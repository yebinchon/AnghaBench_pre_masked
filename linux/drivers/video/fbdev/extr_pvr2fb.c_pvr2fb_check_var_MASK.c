
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2fb_par {unsigned int borderstop_h; unsigned int diwstart_h; unsigned int borderstart_h; unsigned int hsync_total; unsigned int diwstart_v; unsigned int borderstart_v; unsigned int borderstop_v; unsigned int vsync_total; } ;
struct fb_var_screeninfo {scalar_t__ pixclock; int xres; int yres; int xres_virtual; int yres_virtual; int bits_per_pixel; int vmode; scalar_t__ xoffset; scalar_t__ yoffset; int sync; int activate; unsigned int right_margin; unsigned int left_margin; unsigned int hsync_len; unsigned int upper_margin; unsigned int lower_margin; unsigned int vsync_len; } ;
struct TYPE_2__ {unsigned long smem_len; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned long FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct fb_var_screeninfo*) ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_17, struct fb_info *VAR_18)
{
 struct pvr2fb_par *VAR_19 = (struct pvr2fb_par *)VAR_18->par;
 unsigned int VAR_20, VAR_21;
 unsigned long VAR_22;

 if (VAR_17->pixclock != VAR_13 && VAR_17->pixclock != VAR_14) {
  FUNC_1("Invalid pixclock value %d\n", VAR_17->pixclock);
  return -VAR_0;
 }

 if (VAR_17->xres < 320)
  VAR_17->xres = 320;
 if (VAR_17->yres < 240)
  VAR_17->yres = 240;
 if (VAR_17->xres_virtual < VAR_17->xres)
  VAR_17->xres_virtual = VAR_17->xres;
 if (VAR_17->yres_virtual < VAR_17->yres)
  VAR_17->yres_virtual = VAR_17->yres;

 if (VAR_17->bits_per_pixel <= 16)
  VAR_17->bits_per_pixel = 16;
 else if (VAR_17->bits_per_pixel <= 24)
  VAR_17->bits_per_pixel = 24;
 else if (VAR_17->bits_per_pixel <= 32)
  VAR_17->bits_per_pixel = 32;

 FUNC_2(VAR_17);

 if (VAR_17->vmode & VAR_8) {
  if (VAR_17->xoffset || VAR_17->yoffset >= VAR_17->yres_virtual) {
   VAR_17->xoffset = VAR_17->yoffset = 0;
  } else {
   if (VAR_17->xoffset > VAR_17->xres_virtual - VAR_17->xres ||
       VAR_17->yoffset > VAR_17->yres_virtual - VAR_17->yres)
    VAR_17->xoffset = VAR_17->yoffset = 0;
  }
 } else {
  VAR_17->xoffset = VAR_17->yoffset = 0;
 }





 if (VAR_17->yres < 480 && VAR_16 == VAR_15)
  VAR_17->vmode |= VAR_5;

 if (VAR_16 != VAR_15) {
  VAR_17->sync |= VAR_4;
  VAR_17->vmode |= VAR_6;
 } else {
  VAR_17->sync &= ~VAR_4;
  VAR_17->vmode &= ~VAR_6;
  VAR_17->vmode |= VAR_7;
 }

 if ((VAR_17->activate & VAR_2) != VAR_3) {
  VAR_17->right_margin = VAR_19->borderstop_h -
       (VAR_19->diwstart_h + VAR_17->xres);
  VAR_17->left_margin = VAR_19->diwstart_h - VAR_19->borderstart_h;
  VAR_17->hsync_len = VAR_19->borderstart_h +
                     (VAR_19->hsync_total - VAR_19->borderstop_h);

  VAR_17->upper_margin = VAR_19->diwstart_v - VAR_19->borderstart_v;
  VAR_17->lower_margin = VAR_19->borderstop_v -
       (VAR_19->diwstart_v + VAR_17->yres);
  VAR_17->vsync_len = VAR_19->borderstop_v +
       (VAR_19->vsync_total - VAR_19->borderstop_v);
 }

 VAR_21 = VAR_17->left_margin + VAR_17->xres + VAR_17->right_margin +
        VAR_17->hsync_len;
 VAR_20 = VAR_17->upper_margin + VAR_17->yres + VAR_17->lower_margin +
   VAR_17->vsync_len;

 if (VAR_17->sync & VAR_4) {
  if (VAR_17->vmode & VAR_6)
   VAR_20 /= 2;
  if (VAR_20 > (VAR_12 + VAR_10)/2) {


   if (VAR_21 != VAR_11) {
    FUNC_1("invalid hsync total for PAL\n");
    return -VAR_0;
   }
  } else {

   if (VAR_21 != VAR_9) {
    FUNC_1("invalid hsync total for NTSC\n");
    return -VAR_0;
   }
  }
 }


 VAR_22 = FUNC_0(VAR_17->xres_virtual, VAR_17->bits_per_pixel);
 if (VAR_22 * VAR_17->yres_virtual > VAR_18->fix.smem_len)
  return -VAR_1;

 return 0;
}
