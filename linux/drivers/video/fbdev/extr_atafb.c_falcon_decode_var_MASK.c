
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pixel_clock {int t; int hsync; int right; int left; int f; int control_mask; int sync_mask; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres; int yres; int xres_virtual; int yres_virtual; int pixclock; int left_margin; int right_margin; int hsync_len; int upper_margin; int lower_margin; int vsync_len; int vmode; int sync; int yoffset; } ;
struct TYPE_8__ {int f_shift; int st_shift; int bpp; int ste_mode; int mono; int line_width; int line_offset; int vid_control; int sync; int vid_mode; scalar_t__ xoffset; } ;
struct TYPE_7__ {TYPE_3__ falcon; } ;
struct atafb_par {int HHT; int HDB; int HBE; int HDE; int HBB; int HSS; int VBE; int VDB; int VDE; int VBB; int VFT; int VSS; int yres_virtual; int next_line; TYPE_2__ hw; scalar_t__ screen_base; } ;
struct TYPE_6__ {int hfmin; int hfmax; int vfmax; int vfmin; } ;
struct TYPE_10__ {TYPE_1__ monspecs; } ;
struct TYPE_9__ {int (* get_par ) (struct atafb_par*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct fb_var_screeninfo* VAR_16 ;
 int VAR_17 ;
 struct pixel_clock VAR_18 ;
 struct pixel_clock VAR_19 ;
 TYPE_5__ VAR_20 ;
 TYPE_4__* VAR_21 ;
 struct pixel_clock VAR_22 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_23 ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (struct atafb_par*) ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_26,
        struct atafb_par *VAR_27)
{
 int VAR_28 = VAR_26->bits_per_pixel;
 int VAR_29 = VAR_26->xres;
 int VAR_30 = VAR_26->yres;
 int VAR_31 = VAR_26->xres_virtual;
 int VAR_32 = VAR_26->yres_virtual;
 int VAR_33, VAR_34, VAR_35;
 int VAR_36, VAR_37, VAR_38;
 int VAR_39;
 int VAR_40 = 0, VAR_41 = 0;
 struct pixel_clock *VAR_42;
 int VAR_43;
 int VAR_44;
 int VAR_45;
 int VAR_46 = 0;
 int VAR_47, VAR_48;
 int VAR_49, VAR_50, VAR_51;
 int VAR_52, VAR_53, VAR_54, VAR_55;
 if (!VAR_29 || !VAR_30 || !VAR_28)
  return -VAR_1;

 if (VAR_23 == VAR_7 && VAR_28 != 1)
  return -VAR_1;

 if (VAR_28 <= 1) {
  VAR_28 = 1;
  VAR_27->hw.falcon.f_shift = 0x400;
  VAR_27->hw.falcon.st_shift = 0x200;
 } else if (VAR_28 <= 2) {
  VAR_28 = 2;
  VAR_27->hw.falcon.f_shift = 0x000;
  VAR_27->hw.falcon.st_shift = 0x100;
 } else if (VAR_28 <= 4) {
  VAR_28 = 4;
  VAR_27->hw.falcon.f_shift = 0x000;
  VAR_27->hw.falcon.st_shift = 0x000;
 } else if (VAR_28 <= 8) {
  VAR_28 = 8;
  VAR_27->hw.falcon.f_shift = 0x010;
 } else if (VAR_28 <= 16) {
  VAR_28 = 16;
  VAR_27->hw.falcon.f_shift = 0x100;
 } else
  return -VAR_1;
 VAR_27->hw.falcon.bpp = VAR_28;

 if (VAR_23 == VAR_7 || VAR_0) {

  struct fb_var_screeninfo *VAR_56 = &VAR_16[0];

  if (VAR_28 > VAR_56->bits_per_pixel ||
      VAR_26->xres > VAR_56->xres ||
      VAR_26->yres > VAR_56->yres)
   return -VAR_1;
  VAR_21->get_par(VAR_27);
  goto set_screen_base;
 }


 if (VAR_29 <= 320)
  VAR_29 = 320;
 else if (VAR_29 <= 640 && VAR_28 != 16)
  VAR_29 = 640;
 if (VAR_30 <= 200)
  VAR_30 = 200;
 else if (VAR_30 <= 240)
  VAR_30 = 240;
 else if (VAR_30 <= 400)
  VAR_30 = 400;


 VAR_27->hw.falcon.ste_mode = VAR_28 == 2;
 VAR_27->hw.falcon.mono = VAR_28 == 1;
 if (VAR_27->hw.falcon.ste_mode)
  VAR_29 = (VAR_29 + 63) & ~63;
 else if (VAR_28 == 1)
  VAR_29 = (VAR_29 + 31) & ~31;
 else
  VAR_29 = (VAR_29 + 15) & ~15;
 if (VAR_30 >= 400)
  VAR_30 = (VAR_30 + 15) & ~15;
 else
  VAR_30 = (VAR_30 + 7) & ~7;

 if (VAR_31 < VAR_29)
  VAR_31 = VAR_29;
 else if (VAR_28 == 1)
  VAR_31 = (VAR_31 + 31) & ~31;
 else
  VAR_31 = (VAR_31 + 15) & ~15;

 if (VAR_32 <= 0)
  VAR_32 = 0;
 else if (VAR_32 < VAR_30)
  VAR_32 = VAR_30;


 if (VAR_26->pixclock > 1)
  VAR_26->pixclock -= 1;

 VAR_27->hw.falcon.line_width = VAR_28 * VAR_29 / 16;
 VAR_27->hw.falcon.line_offset = VAR_28 * (VAR_31 - VAR_29) / 16;


 VAR_44 = (VAR_29 < 640) ? 2 : 1;
 if (VAR_23 == VAR_6 || VAR_23 == VAR_8) {
  VAR_43 = 2 * VAR_44;
  if (VAR_26->pixclock > VAR_19 * VAR_43)
   return -VAR_1;
  VAR_42 = &VAR_19;
  if (VAR_30 > 240)
   VAR_40 = 1;
  if (VAR_26->pixclock == 0) {

   VAR_33 = 32;
   VAR_34 = 18;
   VAR_35 = VAR_42->hsync / VAR_43;
   VAR_36 = 31;
   VAR_37 = 14;
   VAR_38 = VAR_40 ? 3 : 4;
  } else {
   VAR_33 = VAR_26->left_margin;
   VAR_34 = VAR_26->right_margin;
   VAR_35 = VAR_26->hsync_len;
   VAR_36 = VAR_26->upper_margin;
   VAR_37 = VAR_26->lower_margin;
   VAR_38 = VAR_26->vsync_len;
   if (VAR_26->vmode & VAR_5) {
    VAR_36 = (VAR_36 + 1) / 2;
    VAR_37 = (VAR_37 + 1) / 2;
    VAR_38 = (VAR_38 + 1) / 2;
   } else if (VAR_26->vmode & VAR_4) {
    VAR_36 *= 2;
    VAR_37 *= 2;
    VAR_38 *= 2;
   }
  }
 } else {
  if (VAR_28 == 16)
   VAR_44 = 2;

  if (VAR_26->pixclock == 0) {
   int VAR_57;


   VAR_43 = 1 * VAR_44;
   if ((VAR_43 * VAR_29 + VAR_18 + VAR_18 + VAR_18) *
       VAR_20.monspecs.hfmin < VAR_18)
    VAR_42 = &VAR_18;
   else if ((VAR_43 * VAR_29 + VAR_19 + VAR_19 +
      VAR_19) * VAR_20.monspecs.hfmin < VAR_19)
    VAR_42 = &VAR_19;
   else if ((VAR_43 * VAR_29 + VAR_22.right + VAR_22.hsync +
      VAR_22.left) * VAR_20.monspecs.hfmin < VAR_22.f &&
            VAR_22.f)
    VAR_42 = &VAR_22;
   else
    return -VAR_1;

   VAR_33 = VAR_42->left / VAR_43;
   VAR_34 = VAR_42->right / VAR_43;
   VAR_35 = VAR_42->hsync / VAR_43;
   VAR_57 = VAR_33 + VAR_29 + VAR_34 + VAR_35;
   VAR_36 = 31;
   VAR_37 = 11;
   VAR_38 = 3;
  } else {

   int VAR_58;
   unsigned long VAR_59 = VAR_10;
   VAR_42 = 0;
   for (VAR_58 = 1; VAR_58 <= 4; VAR_58 *= 2) {
    if (VAR_18 * VAR_58 >= VAR_26->pixclock &&
        VAR_18 * VAR_58 < VAR_59) {
     VAR_59 = VAR_18 * VAR_58;
     VAR_42 = &VAR_18;
    }
    if (VAR_19 * VAR_58 >= VAR_26->pixclock &&
        VAR_19 * VAR_58 < VAR_59) {
     VAR_59 = VAR_19 * VAR_58;
     VAR_42 = &VAR_19;
    }
    if (VAR_22.t && VAR_22.t * VAR_58 >= VAR_26->pixclock &&
        VAR_22.t * VAR_58 < VAR_59) {
     VAR_59 = VAR_22.t * VAR_58;
     VAR_42 = &VAR_22;
    }
   }
   if (!VAR_42)
    return -VAR_1;
   VAR_43 = VAR_59 / VAR_42->t;

   VAR_33 = VAR_26->left_margin;
   VAR_34 = VAR_26->right_margin;
   VAR_35 = VAR_26->hsync_len;
   VAR_36 = VAR_26->upper_margin;
   VAR_37 = VAR_26->lower_margin;
   VAR_38 = VAR_26->vsync_len;

   if (VAR_26->vmode & VAR_5) {


    VAR_36 = (VAR_36 + 1) / 2;
    VAR_37 = (VAR_37 + 1) / 2;
    VAR_38 = (VAR_38 + 1) / 2;
   } else if (VAR_26->vmode & VAR_4) {

    VAR_36 *= 2;
    VAR_37 *= 2;
    VAR_38 *= 2;
   }
  }
  if (VAR_42 == &VAR_22)
   VAR_46 = 1;
 }


 if (VAR_42->f / VAR_43 / 8 * VAR_28 > 32000000L)
  return -VAR_1;

 if (VAR_38 < 1)
  VAR_38 = 1;


 VAR_34 += VAR_35;
 VAR_37 += VAR_38;






again:

 VAR_27->hw.falcon.vid_control = VAR_23 | VAR_17;
 if (!VAR_46)
  VAR_27->hw.falcon.vid_control |= VAR_12;
 if (VAR_26->sync & VAR_2)
  VAR_27->hw.falcon.vid_control |= VAR_11;
 if (VAR_26->sync & VAR_3)
  VAR_27->hw.falcon.vid_control |= VAR_13;

 VAR_27->hw.falcon.vid_control |= VAR_42->control_mask;

 VAR_27->hw.falcon.sync = VAR_42->sync_mask | 0x2;

 VAR_27->hw.falcon.vid_mode = (2 / VAR_43) << 2;
 if (VAR_41)
  VAR_27->hw.falcon.vid_mode |= VAR_14;
 if (VAR_40)
  VAR_27->hw.falcon.vid_mode |= VAR_15;
{
 VAR_45 = FUNC_0(&VAR_27->hw.falcon);
 VAR_51 = VAR_27->hw.falcon.vid_control & VAR_12 ? 64 : 128;





 if (VAR_27->hw.falcon.f_shift & 0x100) {
  VAR_55 = 1;
  VAR_50 = 0;
  VAR_49 = (VAR_51 + 16 * VAR_43) + VAR_45;
 } else {
  VAR_55 = 128 / VAR_28;
  VAR_50 = ((128 / VAR_28 + 2) * VAR_43);
  if (VAR_27->hw.falcon.ste_mode)
   VAR_49 = (64 + VAR_51 + (128 / VAR_28 + 2) * VAR_43) + VAR_45;
  else
   VAR_49 = (VAR_51 + (128 / VAR_28 + 18) * VAR_43) + VAR_45;
 }

 VAR_52 = (VAR_45 / 2 + VAR_43 * VAR_33) / VAR_45;

 VAR_53 = VAR_52 + FUNC_1(VAR_29, VAR_55) * VAR_43 / VAR_45;

 VAR_54 = VAR_52 + VAR_29 * VAR_43 / VAR_45;
 VAR_27->HHT = VAR_43 * (VAR_33 + VAR_29 + VAR_34) /
      (2 * VAR_45) - 2;


 VAR_27->HDB = VAR_52 - VAR_49 / VAR_45;
 VAR_27->HBE = VAR_52;
 if (VAR_27->HDB < 0)
  VAR_27->HDB += VAR_27->HHT + 2 + 0x200;
 VAR_27->HDE = VAR_53 - VAR_27->HHT - 2 - VAR_50 / VAR_45;
 VAR_27->HBB = VAR_54 - VAR_27->HHT - 2;






 if (VAR_50 % VAR_45)
  VAR_27->HBB++;
 VAR_27->HSS = VAR_27->HHT + 2 - VAR_43 * VAR_35 / VAR_45;
 if (VAR_27->HSS < VAR_27->HBB)
  VAR_27->HSS = VAR_27->HBB;
}


 VAR_47 = VAR_42->f / ((VAR_27->HHT + 2) * VAR_45 * 2);
 if (VAR_47 > VAR_20.monspecs.hfmax && VAR_23 != VAR_9) {


  VAR_33 += 1;
  VAR_34 += 1;
  goto again;
 }
 if (VAR_47 > VAR_20.monspecs.hfmax || VAR_47 < VAR_20.monspecs.hfmin)
  return -VAR_1;
 VAR_27->VBE = (VAR_36 * 2 + 1);
 VAR_27->VDB = VAR_27->VBE;
 VAR_27->VDE = VAR_30;
 if (!VAR_40)
  VAR_27->VDE <<= 1;
 if (VAR_41)
  VAR_27->VDE <<= 1;
 VAR_27->VDE += VAR_27->VDB;
 VAR_27->VBB = VAR_27->VDE;
 VAR_27->VFT = VAR_27->VBB + (VAR_37 * 2 - 1) - 1;
 VAR_27->VSS = VAR_27->VFT + 1 - (VAR_38 * 2 - 1);

 if (VAR_40) {
  VAR_27->VBB++;
  VAR_27->VSS++;
  VAR_27->VFT++;
 }



 VAR_48 = (VAR_47 * 2) / (VAR_27->VFT + 1);
 if (VAR_48 > VAR_20.monspecs.vfmax && !VAR_41 && !VAR_40) {

  VAR_41 = 1;
  goto again;
 } else if (VAR_48 < VAR_20.monspecs.vfmin && !VAR_40 && !VAR_41) {

  VAR_40 = 1;
  goto again;
 } else if (VAR_48 < VAR_20.monspecs.vfmin && VAR_41) {

  int VAR_60;
  VAR_41 = 0;
  for (VAR_60 = 0;
       (VAR_47 * 2) / (VAR_27->VFT + 1 + 4 * VAR_60 - 2 * VAR_30) >
       VAR_20.monspecs.vfmax;
       VAR_60++)
   ;
  VAR_36 += VAR_60;
  VAR_37 += VAR_60;
  goto again;
 } else if (VAR_48 > VAR_20.monspecs.vfmax && VAR_41) {

  int VAR_61;
  for (VAR_61 = 0;
       (VAR_47 * 2) / (VAR_27->VFT + 1 + 4 * VAR_61) >
       VAR_20.monspecs.vfmax;
       VAR_61 += 2)
   ;
  VAR_36 += VAR_61;
  VAR_37 += VAR_61;
  goto again;
 } else if (VAR_48 > VAR_20.monspecs.vfmax && VAR_40) {

  int VAR_62;
  for (VAR_62 = 0;
       (VAR_47 * 2) / (VAR_27->VFT + 1 + 4 * VAR_62) >
       VAR_20.monspecs.vfmax;
       VAR_62++)
   ;
  VAR_36 += VAR_62;
  VAR_37 += VAR_62;
  goto again;
 } else if (VAR_48 < VAR_20.monspecs.vfmin ||
     VAR_48 > VAR_20.monspecs.vfmax)
  return -VAR_1;

set_screen_base:
 VAR_39 = VAR_31 * VAR_28 / 8;
 if (VAR_32 * VAR_39 > VAR_25 && VAR_25)
  return -VAR_1;
 if (VAR_30 * VAR_39 > VAR_25 && VAR_25)
  return -VAR_1;
 if (VAR_26->yoffset + VAR_30 > VAR_32 && VAR_32)
  return -VAR_1;
 VAR_27->yres_virtual = VAR_32;
 VAR_27->screen_base = VAR_24 + VAR_26->yoffset * VAR_39;
 VAR_27->hw.falcon.xoffset = 0;

 VAR_27->next_line = VAR_39;

 return 0;
}
