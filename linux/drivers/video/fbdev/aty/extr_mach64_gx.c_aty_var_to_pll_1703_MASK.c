
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int program_bits; short post_divider; int period_in_ps; scalar_t__ locationAddr; } ;
union aty_pll {TYPE_1__ ics2595; } ;
typedef int u32 ;
typedef int u16 ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(const struct fb_info *VAR_4, u32 VAR_5,
          u32 VAR_6, union aty_pll *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;

 u32 VAR_10, VAR_11, VAR_12;
 u32 VAR_13, VAR_14;
 u16 VAR_15, VAR_16;
 short VAR_17 = 0, VAR_18;


 VAR_8 = 100000000 / VAR_5;
 VAR_10 = VAR_1;
 VAR_11 = VAR_0;
 VAR_12 = VAR_3;


 if (VAR_8 == 0)
  VAR_9 = 0xE0;
 else {
  if (VAR_8 < VAR_10)
   VAR_8 = VAR_10;
  if (VAR_8 > VAR_11)
   VAR_8 = VAR_11;

  VAR_17 = 0;
  while (VAR_8 < (VAR_10 << 3)) {
   VAR_8 <<= 1;
   VAR_17 += 0x20;
  }

  VAR_13 = (unsigned int) (VAR_8);
  VAR_13 = (unsigned int) (VAR_13 * (VAR_2 + 2));
  VAR_13 -= (short) (VAR_12 << 1);

  VAR_18 = VAR_2;
  VAR_16 = 0xffff;

  do {
   VAR_14 = VAR_13;
   VAR_15 = VAR_14 % VAR_12;
   VAR_14 = VAR_14 / VAR_12;

   if ((VAR_14 & 0xffff) <= 127
       && (VAR_15 <= VAR_16)) {
    VAR_16 = VAR_15;
    VAR_17 &= ~0x1f;
    VAR_17 |= VAR_18;
    VAR_17 =
        (VAR_17 & 0x00ff) +
        ((VAR_14 & 0xff) << 8);
   }

   VAR_13 += VAR_8;
   VAR_18++;
  } while (VAR_18 <= (VAR_2 << 1));

  VAR_9 = VAR_17;
 }

 VAR_7->ics2595.program_bits = VAR_9;
 VAR_7->ics2595.locationAddr = 0;
 VAR_7->ics2595.post_divider = VAR_17;
 VAR_7->ics2595.period_in_ps = VAR_5;

 return 0;
}
