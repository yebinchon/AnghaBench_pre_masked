
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_var_screeninfo {int xres; int yres; int bits_per_pixel; int yres_virtual; int sync; int yoffset; } ;
struct TYPE_3__ {int sync; int mode; } ;
struct TYPE_4__ {TYPE_1__ tt; } ;
struct atafb_par {int yres_virtual; int next_line; scalar_t__ screen_base; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_14, struct atafb_par *VAR_15)
{
 int VAR_16 = VAR_14->xres;
 int VAR_17 = VAR_14->yres;
 int VAR_18 = VAR_14->bits_per_pixel;
 int VAR_19;
 int VAR_20 = VAR_14->yres_virtual;

 if (VAR_8) {
  if (VAR_18 > 1 || VAR_16 > VAR_12 * 2 || VAR_17 > VAR_13 * 2)
   return -VAR_0;
  VAR_15->hw.tt.mode = VAR_5;
  VAR_16 = VAR_12 * 2;
  VAR_17 = VAR_13 * 2;
  VAR_18 = 1;
 } else {
  if (VAR_18 > 8 || VAR_16 > VAR_12 || VAR_17 > VAR_13)
   return -VAR_0;
  if (VAR_18 > 4) {
   if (VAR_16 > VAR_12 / 2 || VAR_17 > VAR_13)
    return -VAR_0;
   VAR_15->hw.tt.mode = VAR_6;
   VAR_16 = VAR_12 / 2;
   VAR_17 = VAR_13;
   VAR_18 = 8;
  } else if (VAR_18 > 2) {
   if (VAR_16 > VAR_12 || VAR_17 > VAR_13)
    return -VAR_0;
   if (VAR_16 > VAR_12 / 2 || VAR_17 > VAR_11 / 2) {
    VAR_15->hw.tt.mode = VAR_7;
    VAR_16 = VAR_12;
    VAR_17 = VAR_13;
    VAR_18 = 4;
   } else {
    VAR_15->hw.tt.mode = VAR_3;
    VAR_16 = VAR_12 / 2;
    VAR_17 = VAR_11 / 2;
    VAR_18 = 4;
   }
  } else if (VAR_18 > 1) {
   if (VAR_16 > VAR_12 || VAR_17 > VAR_11 / 2)
    return -VAR_0;
   VAR_15->hw.tt.mode = VAR_4;
   VAR_16 = VAR_12;
   VAR_17 = VAR_11 / 2;
   VAR_18 = 2;
  } else if (VAR_14->xres > VAR_12 || VAR_14->yres > VAR_11) {
   return -VAR_0;
  } else {
   VAR_15->hw.tt.mode = VAR_2;
   VAR_16 = VAR_12;
   VAR_17 = VAR_11;
   VAR_18 = 1;
  }
 }
 if (VAR_20 <= 0)
  VAR_20 = 0;
 else if (VAR_20 < VAR_17)
  VAR_20 = VAR_17;
 if (VAR_14->sync & VAR_1)
  VAR_15->hw.tt.sync = 0;
 else
  VAR_15->hw.tt.sync = 1;
 VAR_19 = VAR_16 * VAR_18 / 8;
 if (VAR_20 * VAR_19 > VAR_10 && VAR_10)
  return -VAR_0;
 if (VAR_17 * VAR_19 > VAR_10 && VAR_10)
  return -VAR_0;
 if (VAR_14->yoffset + VAR_17 > VAR_20 && VAR_20)
  return -VAR_0;
 VAR_15->yres_virtual = VAR_20;
 VAR_15->screen_base = VAR_9 + VAR_14->yoffset * VAR_19;
 VAR_15->next_line = VAR_19;
 return 0;
}
