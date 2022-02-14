
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i740fb_par {int has_sgram; } ;



__attribute__((used)) static u32 FUNC_0(struct i740fb_par *VAR_0, u32 VAR_1, int VAR_2)
{
 u32 VAR_3;

 switch (VAR_2) {
 case 8:
  if (VAR_1 > 200)
   VAR_3 = 0x18120000;
  else if (VAR_1 > 175)
   VAR_3 = 0x16110000;
  else if (VAR_1 > 135)
   VAR_3 = 0x120E0000;
  else
   VAR_3 = 0x100D0000;
  break;
 case 15:
 case 16:
  if (VAR_0->has_sgram) {
   if (VAR_1 > 140)
    VAR_3 = 0x2C1D0000;
   else if (VAR_1 > 120)
    VAR_3 = 0x2C180000;
   else if (VAR_1 > 100)
    VAR_3 = 0x24160000;
   else if (VAR_1 > 90)
    VAR_3 = 0x18120000;
   else if (VAR_1 > 50)
    VAR_3 = 0x16110000;
   else if (VAR_1 > 32)
    VAR_3 = 0x13100000;
   else
    VAR_3 = 0x120E0000;
  } else {
   if (VAR_1 > 160)
    VAR_3 = 0x28200000;
   else if (VAR_1 > 140)
    VAR_3 = 0x2A1E0000;
   else if (VAR_1 > 130)
    VAR_3 = 0x2B1A0000;
   else if (VAR_1 > 120)
    VAR_3 = 0x2C180000;
   else if (VAR_1 > 100)
    VAR_3 = 0x24180000;
   else if (VAR_1 > 90)
    VAR_3 = 0x18120000;
   else if (VAR_1 > 50)
    VAR_3 = 0x16110000;
   else if (VAR_1 > 32)
    VAR_3 = 0x13100000;
   else
    VAR_3 = 0x120E0000;
  }
  break;
 case 24:
  if (VAR_0->has_sgram) {
   if (VAR_1 > 130)
    VAR_3 = 0x31200000;
   else if (VAR_1 > 120)
    VAR_3 = 0x2E200000;
   else if (VAR_1 > 100)
    VAR_3 = 0x2C1D0000;
   else if (VAR_1 > 80)
    VAR_3 = 0x25180000;
   else if (VAR_1 > 64)
    VAR_3 = 0x24160000;
   else if (VAR_1 > 49)
    VAR_3 = 0x18120000;
   else if (VAR_1 > 32)
    VAR_3 = 0x16110000;
   else
    VAR_3 = 0x13100000;
  } else {
   if (VAR_1 > 120)
    VAR_3 = 0x311F0000;
   else if (VAR_1 > 100)
    VAR_3 = 0x2C1D0000;
   else if (VAR_1 > 80)
    VAR_3 = 0x25180000;
   else if (VAR_1 > 64)
    VAR_3 = 0x24160000;
   else if (VAR_1 > 49)
    VAR_3 = 0x18120000;
   else if (VAR_1 > 32)
    VAR_3 = 0x16110000;
   else
    VAR_3 = 0x13100000;
  }
  break;
 case 32:
  if (VAR_0->has_sgram) {
   if (VAR_1 > 80)
    VAR_3 = 0x2A200000;
   else if (VAR_1 > 60)
    VAR_3 = 0x281A0000;
   else if (VAR_1 > 49)
    VAR_3 = 0x25180000;
   else if (VAR_1 > 32)
    VAR_3 = 0x18120000;
   else
    VAR_3 = 0x16110000;
  } else {
   if (VAR_1 > 80)
    VAR_3 = 0x29200000;
   else if (VAR_1 > 60)
    VAR_3 = 0x281A0000;
   else if (VAR_1 > 49)
    VAR_3 = 0x25180000;
   else if (VAR_1 > 32)
    VAR_3 = 0x18120000;
   else
    VAR_3 = 0x16110000;
  }
  break;
 }

 return VAR_3;
}
