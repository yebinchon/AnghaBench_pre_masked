
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int** VAR_0 ;

u32 FUNC_0(const void *VAR_1, size_t VAR_2)
{
 const u32 *VAR_3 = (const u32 *)VAR_1;
 const u8 *VAR_4;
 u32 VAR_5 = 0, VAR_6, VAR_7;

 if (!VAR_1)
  return 0;


 while (VAR_2 >= 8) {
  VAR_6 = *VAR_3++ ^ VAR_5;
  VAR_7 = *VAR_3++;

  VAR_5 = VAR_0[0][(VAR_7 >> 24) & 0xff]
   ^ VAR_0[1][(VAR_7 >> 16) & 0xff]
   ^ VAR_0[2][(VAR_7 >> 8) & 0xff]
   ^ VAR_0[3][VAR_7 & 0xff]
   ^ VAR_0[4][(VAR_6 >> 24) & 0xff]
   ^ VAR_0[5][(VAR_6 >> 16) & 0xff]
   ^ VAR_0[6][(VAR_6 >> 8) & 0xff]
   ^ VAR_0[7][VAR_6 & 0xff];

  VAR_2 -= 8;
 }

 VAR_4 = (const u8 *)VAR_3;

 while (VAR_2-- != 0)
  VAR_5 = (VAR_5 >> 8) ^ VAR_0[0][(VAR_5 & 0xff)
   ^ *VAR_4++];

 return ((VAR_5 >> 24) & 0xff) | ((VAR_5 << 8) & 0xff0000) |
  ((VAR_5 >> 8) & 0xff00) | ((VAR_5 << 24) & 0xff000000);
}
