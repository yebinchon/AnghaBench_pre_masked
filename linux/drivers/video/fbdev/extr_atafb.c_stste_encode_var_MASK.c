
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ msb_right; scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_7__ {int length; scalar_t__ msb_right; scalar_t__ offset; } ;
struct fb_var_screeninfo {int pixclock; int left_margin; int right_margin; int upper_margin; int lower_margin; int hsync_len; int vsync_len; int height; int width; int xres; int yres; int bits_per_pixel; int xres_virtual; int yres_virtual; int yoffset; int vmode; scalar_t__ activate; scalar_t__ nonstd; scalar_t__ xoffset; TYPE_4__ transp; TYPE_3__ red; TYPE_3__ green; TYPE_3__ blue; scalar_t__ sync; scalar_t__ grayscale; } ;
struct TYPE_5__ {int sync; int mode; } ;
struct TYPE_6__ {TYPE_1__ st; } ;
struct atafb_par {int yres_virtual; int screen_base; TYPE_2__ hw; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_1 (struct fb_var_screeninfo*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_12,
       struct atafb_par *VAR_13)
{
 int VAR_14;
 FUNC_1(VAR_12, 0, sizeof(struct fb_var_screeninfo));
 VAR_12->red.offset = 0;
 VAR_12->red.length = FUNC_0(VAR_0) ? 4 : 3;
 VAR_12->red.msb_right = 0;
 VAR_12->grayscale = 0;

 VAR_12->pixclock = 31041;
 VAR_12->left_margin = 120;
 VAR_12->right_margin = 100;
 VAR_12->upper_margin = 8;
 VAR_12->lower_margin = 16;
 VAR_12->hsync_len = 140;
 VAR_12->vsync_len = 30;

 VAR_12->height = -1;
 VAR_12->width = -1;

 if (!(VAR_13->hw.st.sync & 1))
  VAR_12->sync = 0;
 else
  VAR_12->sync = VAR_1;

 switch (VAR_13->hw.st.mode & 3) {
 case 129:
  VAR_12->xres = VAR_8 / 2;
  VAR_12->yres = VAR_7 / 2;
  VAR_12->bits_per_pixel = 4;
  break;
 case 128:
  VAR_12->xres = VAR_8;
  VAR_12->yres = VAR_7 / 2;
  VAR_12->bits_per_pixel = 2;
  break;
 case 130:
  VAR_12->xres = VAR_8;
  VAR_12->yres = VAR_7;
  VAR_12->bits_per_pixel = 1;
  break;
 }
 VAR_12->blue = VAR_12->green = VAR_12->red;
 VAR_12->transp.offset = 0;
 VAR_12->transp.length = 0;
 VAR_12->transp.msb_right = 0;
 VAR_12->xres_virtual = VAR_9;
 VAR_14 = VAR_12->xres_virtual * VAR_12->bits_per_pixel / 8;
 VAR_4 = VAR_14 * (VAR_10 - VAR_7);

 if (!VAR_11)
  VAR_12->yres_virtual = VAR_12->yres;
 else if (VAR_6) {
  if (VAR_13->yres_virtual)
   VAR_12->yres_virtual = VAR_13->yres_virtual;
  else

   VAR_12->yres_virtual = VAR_6 / VAR_14;
 } else {
  if (VAR_3 < 0)
   VAR_12->yres_virtual = 2 * VAR_12->yres;
  else
   VAR_12->yres_virtual = VAR_12->yres + VAR_3 * 16;
 }
 VAR_12->xoffset = 0;
 if (VAR_5)
  VAR_12->yoffset = (VAR_13->screen_base - VAR_5) / VAR_14;
 else
  VAR_12->yoffset = 0;
 VAR_12->nonstd = 0;
 VAR_12->activate = 0;
 VAR_12->vmode = VAR_2;
 return 0;
}
