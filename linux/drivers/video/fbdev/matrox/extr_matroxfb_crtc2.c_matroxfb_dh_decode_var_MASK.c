
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int len_usable; } ;
struct matroxfb_dh_fb_info {TYPE_1__ video; } ;
struct TYPE_10__ {int offset; int length; } ;
struct TYPE_9__ {int length; scalar_t__ offset; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int yres_virtual; int yres; int xres_virtual; int xres; int xoffset; int yoffset; int left_margin; int right_margin; int hsync_len; TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct matroxfb_dh_fb_info* VAR_2,
  struct fb_var_screeninfo* VAR_3,
  int *VAR_4,
  int *VAR_5,
  int *VAR_6) {
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;

 switch (VAR_3->bits_per_pixel) {
  case 16: VAR_7 = 0x1F;
    break;
  case 32: VAR_7 = 0x0F;
    break;
  default: return -VAR_0;
 }
 VAR_9 = VAR_2->video.len_usable;
 if (VAR_3->yres_virtual < VAR_3->yres)
  VAR_3->yres_virtual = VAR_3->yres;
 if (VAR_3->xres_virtual < VAR_3->xres)
  VAR_3->xres_virtual = VAR_3->xres;
 VAR_3->xres_virtual = (VAR_3->xres_virtual + VAR_7) & ~VAR_7;
 if (VAR_3->yres_virtual > 32767)
  return -VAR_0;
 VAR_8 = VAR_3->xres_virtual * VAR_3->yres_virtual * (VAR_3->bits_per_pixel >> 3);
 if (VAR_8 > VAR_9)
  return -VAR_0;
 if (VAR_3->xoffset + VAR_3->xres > VAR_3->xres_virtual)
  VAR_3->xoffset = VAR_3->xres_virtual - VAR_3->xres;
 if (VAR_3->yoffset + VAR_3->yres > VAR_3->yres_virtual)
  VAR_3->yoffset = VAR_3->yres_virtual - VAR_3->yres;

 VAR_3->xres &= ~7;
 VAR_3->left_margin &= ~7;
 VAR_3->right_margin &= ~7;
 VAR_3->hsync_len &= ~7;

 *VAR_6 = VAR_3->bits_per_pixel;
 if (VAR_3->bits_per_pixel == 16) {
  if (VAR_3->green.length == 5) {
   VAR_3->red.offset = 10;
   VAR_3->red.length = 5;
   VAR_3->green.offset = 5;
   VAR_3->green.length = 5;
   VAR_3->blue.offset = 0;
   VAR_3->blue.length = 5;
   VAR_3->transp.offset = 15;
   VAR_3->transp.length = 1;
   *VAR_6 = 15;
  } else {
   VAR_3->red.offset = 11;
   VAR_3->red.length = 5;
   VAR_3->green.offset = 5;
   VAR_3->green.length = 6;
   VAR_3->blue.offset = 0;
   VAR_3->blue.length = 5;
   VAR_3->transp.offset = 0;
   VAR_3->transp.length = 0;
  }
 } else {
   VAR_3->red.offset = 16;
   VAR_3->red.length = 8;
   VAR_3->green.offset = 8;
   VAR_3->green.length = 8;
   VAR_3->blue.offset = 0;
   VAR_3->blue.length = 8;
   VAR_3->transp.offset = 24;
   VAR_3->transp.length = 8;
 }
 *VAR_4 = VAR_1;
 *VAR_5 = 16;
 return 0;
}
