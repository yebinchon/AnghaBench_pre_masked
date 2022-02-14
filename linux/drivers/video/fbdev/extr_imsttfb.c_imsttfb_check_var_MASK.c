
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_7__ {int length; scalar_t__ msb_right; int offset; } ;
struct TYPE_6__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_10__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres_virtual; int xres; int yres_virtual; int yres; int vmode; int height; int width; int left_margin; int right_margin; int upper_margin; int lower_margin; int hsync_len; int vsync_len; TYPE_3__ transp; TYPE_2__ blue; TYPE_1__ green; TYPE_5__ red; scalar_t__ nonstd; } ;
struct TYPE_9__ {int smem_len; } ;
struct fb_info {TYPE_4__ fix; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct fb_var_screeninfo *VAR_4, struct fb_info *VAR_5)
{
 if ((VAR_4->bits_per_pixel != 8 && VAR_4->bits_per_pixel != 16
     && VAR_4->bits_per_pixel != 24 && VAR_4->bits_per_pixel != 32)
     || VAR_4->xres_virtual < VAR_4->xres || VAR_4->yres_virtual < VAR_4->yres
     || VAR_4->nonstd
     || (VAR_4->vmode & VAR_1) != VAR_2)
  return -VAR_0;

 if ((VAR_4->xres * VAR_4->yres) * (VAR_4->bits_per_pixel >> 3) > VAR_5->fix.smem_len
     || (VAR_4->xres_virtual * VAR_4->yres_virtual) * (VAR_4->bits_per_pixel >> 3) > VAR_5->fix.smem_len)
  return -VAR_0;

 switch (VAR_4->bits_per_pixel) {
  case 8:
   VAR_4->red.offset = 0;
   VAR_4->red.length = 8;
   VAR_4->green.offset = 0;
   VAR_4->green.length = 8;
   VAR_4->blue.offset = 0;
   VAR_4->blue.length = 8;
   VAR_4->transp.offset = 0;
   VAR_4->transp.length = 0;
   break;
  case 16:
   if (VAR_4->green.length != 6)
    VAR_4->red.offset = 10;
   VAR_4->red.length = 5;
   VAR_4->green.offset = 5;
   if (VAR_4->green.length != 6)
    VAR_4->green.length = 5;
   VAR_4->blue.offset = 0;
   VAR_4->blue.length = 5;
   VAR_4->transp.offset = 0;
   VAR_4->transp.length = 0;
   break;
  case 24:
   VAR_4->red.offset = 16;
   VAR_4->red.length = 8;
   VAR_4->green.offset = 8;
   VAR_4->green.length = 8;
   VAR_4->blue.offset = 0;
   VAR_4->blue.length = 8;
   VAR_4->transp.offset = 0;
   VAR_4->transp.length = 0;
   break;
  case 32:
   VAR_4->red.offset = 16;
   VAR_4->red.length = 8;
   VAR_4->green.offset = 8;
   VAR_4->green.length = 8;
   VAR_4->blue.offset = 0;
   VAR_4->blue.length = 8;
   VAR_4->transp.offset = 24;
   VAR_4->transp.length = 8;
   break;
 }

 if (VAR_4->yres == VAR_4->yres_virtual) {
  __u32 VAR_6 = (VAR_5->fix.smem_len - (VAR_3 << 2));
  VAR_4->yres_virtual = ((VAR_6 << 3) / VAR_4->bits_per_pixel) / VAR_4->xres_virtual;
  if (VAR_4->yres_virtual < VAR_4->yres)
   VAR_4->yres_virtual = VAR_4->yres;
 }

 VAR_4->red.msb_right = 0;
 VAR_4->green.msb_right = 0;
 VAR_4->blue.msb_right = 0;
 VAR_4->transp.msb_right = 0;
 VAR_4->height = -1;
 VAR_4->width = -1;
 VAR_4->vmode = VAR_2;
 VAR_4->left_margin = VAR_4->right_margin = 16;
 VAR_4->upper_margin = VAR_4->lower_margin = 16;
 VAR_4->hsync_len = VAR_4->vsync_len = 8;
 return 0;
}
