
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
struct fb_var_screeninfo {int pixclock; int left_margin; int right_margin; int upper_margin; int lower_margin; int hsync_len; int vsync_len; int height; int width; int xres; int xres_virtual; int yres; int bits_per_pixel; int yres_virtual; int yoffset; int vmode; scalar_t__ activate; scalar_t__ nonstd; scalar_t__ xoffset; TYPE_4__ transp; TYPE_3__ red; TYPE_3__ green; TYPE_3__ blue; scalar_t__ sync; scalar_t__ grayscale; } ;
struct TYPE_5__ {int sync; int mode; } ;
struct TYPE_6__ {TYPE_1__ tt; } ;
struct atafb_par {int yres_virtual; int screen_base; TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int FUNC_0 (struct fb_var_screeninfo*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_11, struct atafb_par *VAR_12)
{
 int VAR_13;
 FUNC_0(VAR_11, 0, sizeof(struct fb_var_screeninfo));
 VAR_11->red.offset = 0;
 VAR_11->red.length = 4;
 VAR_11->red.msb_right = 0;
 VAR_11->grayscale = 0;

 VAR_11->pixclock = 31041;
 VAR_11->left_margin = 120;
 VAR_11->right_margin = 100;
 VAR_11->upper_margin = 8;
 VAR_11->lower_margin = 16;
 VAR_11->hsync_len = 140;
 VAR_11->vsync_len = 30;

 VAR_11->height = -1;
 VAR_11->width = -1;

 if (VAR_12->hw.tt.sync & 1)
  VAR_11->sync = 0;
 else
  VAR_11->sync = VAR_0;

 switch (VAR_12->hw.tt.mode & VAR_2) {
 case 132:
  VAR_11->xres = VAR_7 / 2;
  VAR_11->xres_virtual = VAR_8 / 2;
  VAR_11->yres = VAR_6 / 2;
  VAR_11->bits_per_pixel = 4;
  break;
 case 131:
  VAR_11->xres = VAR_7;
  VAR_11->xres_virtual = VAR_8;
  VAR_11->yres = VAR_6 / 2;
  VAR_11->bits_per_pixel = 2;
  break;
 case 133:
  VAR_11->xres = VAR_7;
  VAR_11->xres_virtual = VAR_8;
  VAR_11->yres = VAR_6;
  VAR_11->bits_per_pixel = 1;
  break;
 case 129:
  VAR_11->xres = VAR_7 / 2;
  VAR_11->xres_virtual = VAR_8 / 2;
  VAR_11->yres = VAR_9;
  VAR_11->bits_per_pixel = 8;
  break;
 case 128:
  VAR_11->xres = VAR_7;
  VAR_11->xres_virtual = VAR_8;
  VAR_11->yres = VAR_9;
  VAR_11->bits_per_pixel = 4;
  break;
 case 130:
  VAR_11->red.length = 0;
  VAR_11->xres = VAR_7 * 2;
  VAR_11->xres_virtual = VAR_8 * 2;
  VAR_11->yres = VAR_9 * 2;
  VAR_11->bits_per_pixel = 1;
  break;
 }
 VAR_11->blue = VAR_11->green = VAR_11->red;
 VAR_11->transp.offset = 0;
 VAR_11->transp.length = 0;
 VAR_11->transp.msb_right = 0;
 VAR_13 = VAR_11->xres_virtual * VAR_11->bits_per_pixel / 8;
 if (!VAR_10)
  VAR_11->yres_virtual = VAR_11->yres;
 else if (VAR_5) {
  if (VAR_12->yres_virtual)
   VAR_11->yres_virtual = VAR_12->yres_virtual;
  else

   VAR_11->yres_virtual = VAR_5 / VAR_13;
 } else {
  if (VAR_3 < 0)
   VAR_11->yres_virtual = 2 * VAR_11->yres;
  else
   VAR_11->yres_virtual = VAR_11->yres + VAR_3 * 16;
 }
 VAR_11->xoffset = 0;
 if (VAR_4)
  VAR_11->yoffset = (VAR_12->screen_base - VAR_4) / VAR_13;
 else
  VAR_11->yoffset = 0;
 VAR_11->nonstd = 0;
 VAR_11->activate = 0;
 VAR_11->vmode = VAR_1;
 return 0;
}
