
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static int FUNC_0(const u8 *VAR_0, const u8 **VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4;
 const unsigned long *VAR_5 = (const unsigned long *) VAR_0;
 const unsigned long *VAR_6 = (const unsigned long *) *VAR_1;
 const int VAR_7 = *VAR_2 / sizeof(unsigned long);
 int VAR_8 = VAR_7;
 int VAR_9 = VAR_7;
 int VAR_10 = VAR_7;

 for (VAR_3 = 0; VAR_3 < VAR_7; VAR_3++) {
  if (VAR_5[VAR_3] != VAR_6[VAR_3]) {
   VAR_9 = VAR_3;
   break;
  }
 }

 for (VAR_4 = VAR_7 - 1; VAR_4 > VAR_3; VAR_4--) {
  if (VAR_5[VAR_4] != VAR_6[VAR_4]) {
   VAR_10 = VAR_4+1;
   break;
  }
 }

 VAR_8 = VAR_9 + (VAR_7 - VAR_10);
 *VAR_1 = (u8 *) &VAR_6[VAR_9];
 *VAR_2 = (VAR_10 - VAR_9) * sizeof(unsigned long);

 return VAR_8 * sizeof(unsigned long);
}
