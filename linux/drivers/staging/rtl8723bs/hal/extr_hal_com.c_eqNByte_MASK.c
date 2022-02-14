
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;



bool FUNC_0(u8 *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 if (VAR_2 == 0)
  return 0;
 while (VAR_2 > 0) {
  VAR_2--;
  if (VAR_0[VAR_2] != VAR_1[VAR_2])
   return 0;
 }
 return 1;
}
