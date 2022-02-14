
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int s32 ;




u16 FUNC_0(void *VAR_0, s32 VAR_1, u16 VAR_2, s32 VAR_3)
{
 int VAR_4;
 u8 *VAR_5 = (u8 *)VAR_0;

 switch (VAR_3) {
 case 128:
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++, VAR_5++) {
   if ((VAR_4 == 2) || (VAR_4 == 3))
    continue;
   VAR_2 = (((VAR_2 & 1) << 15) |
      ((VAR_2 & 0xFFFE) >> 1)) + (u16)*VAR_5;
  }
  break;
 default
   :
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++, VAR_5++)
   VAR_2 = (((VAR_2 & 1) << 15) |
      ((VAR_2 & 0xFFFE) >> 1)) + (u16)*VAR_5;
 }

 return VAR_2;
}
