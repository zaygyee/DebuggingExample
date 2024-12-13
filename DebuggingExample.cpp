#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    cout << "Displaying numbers for 1 to " << n << " : \n";

    for (int i = 1; i <= n; i++) //fixed i++ instead of i--
    {
        cout << i << ", " << endl;
    }
    return 0;
}