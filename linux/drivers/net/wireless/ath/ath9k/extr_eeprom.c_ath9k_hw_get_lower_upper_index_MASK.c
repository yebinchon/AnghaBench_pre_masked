
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;



bool FUNC_0(u8 VAR_0, u8 *VAR_1, u16 VAR_2,
        u16 *VAR_3, u16 *VAR_4)
{
 u16 VAR_5;

 if (VAR_0 <= VAR_1[0]) {
  *VAR_3 = *VAR_4 = 0;
  return 1;
 }
 if (VAR_0 >= VAR_1[VAR_2 - 1]) {
  *VAR_3 = *VAR_4 = (u16) (VAR_2 - 1);
  return 1;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2 - 1; VAR_5++) {
  if (VAR_1[VAR_5] == VAR_0) {
   *VAR_3 = *VAR_4 = VAR_5;
   return 1;
  }
  if (VAR_0 < VAR_1[VAR_5 + 1]) {
   *VAR_3 = VAR_5;
   *VAR_4 = (u16) (VAR_5 + 1);
   return 0;
  }
 }
 return 0;
}
