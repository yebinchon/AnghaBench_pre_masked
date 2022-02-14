
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_7__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_10__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_9__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_8__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int vmode; int xoffset; int yoffset; int xres; int yres; int xres_virtual; int yres_virtual; int bits_per_pixel; TYPE_2__ transp; TYPE_5__ blue; TYPE_4__ green; TYPE_3__ red; } ;
struct TYPE_6__ {int xoffset; int yoffset; } ;
struct fb_info {TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_5,
    struct fb_info *VAR_6)
{
 u_long VAR_7;






 if (VAR_5->vmode & VAR_2) {
  VAR_5->vmode |= VAR_3;
  VAR_5->xoffset = VAR_6->var.xoffset;
  VAR_5->yoffset = VAR_6->var.yoffset;
 }




 if (!VAR_5->xres)
  VAR_5->xres = 1;
 if (!VAR_5->yres)
  VAR_5->yres = 1;
 if (VAR_5->xres > VAR_5->xres_virtual)
  VAR_5->xres_virtual = VAR_5->xres;
 if (VAR_5->yres > VAR_5->yres_virtual)
  VAR_5->yres_virtual = VAR_5->yres;
 if (VAR_5->bits_per_pixel <= 1)
  VAR_5->bits_per_pixel = 1;
 else if (VAR_5->bits_per_pixel <= 8)
  VAR_5->bits_per_pixel = 8;
 else if (VAR_5->bits_per_pixel <= 16)
  VAR_5->bits_per_pixel = 16;
 else if (VAR_5->bits_per_pixel <= 24)
  VAR_5->bits_per_pixel = 24;
 else if (VAR_5->bits_per_pixel <= 32)
  VAR_5->bits_per_pixel = 32;
 else
  return -VAR_0;

 if (VAR_5->xres_virtual < VAR_5->xoffset + VAR_5->xres)
  VAR_5->xres_virtual = VAR_5->xoffset + VAR_5->xres;
 if (VAR_5->yres_virtual < VAR_5->yoffset + VAR_5->yres)
  VAR_5->yres_virtual = VAR_5->yoffset + VAR_5->yres;




 VAR_7 =
     FUNC_0(VAR_5->xres_virtual, VAR_5->bits_per_pixel);
 if (VAR_7 * VAR_5->yres_virtual > VAR_4)
  return -VAR_1;






 switch (VAR_5->bits_per_pixel) {
 case 1:
 case 8:
  VAR_5->red.offset = 0;
  VAR_5->red.length = 8;
  VAR_5->green.offset = 0;
  VAR_5->green.length = 8;
  VAR_5->blue.offset = 0;
  VAR_5->blue.length = 8;
  VAR_5->transp.offset = 0;
  VAR_5->transp.length = 0;
  break;
 case 16:
  if (VAR_5->transp.length) {
   VAR_5->red.offset = 0;
   VAR_5->red.length = 5;
   VAR_5->green.offset = 5;
   VAR_5->green.length = 5;
   VAR_5->blue.offset = 10;
   VAR_5->blue.length = 5;
   VAR_5->transp.offset = 15;
   VAR_5->transp.length = 1;
  } else {
   VAR_5->red.offset = 11;
   VAR_5->red.length = 5;
   VAR_5->green.offset = 5;
   VAR_5->green.length = 6;
   VAR_5->blue.offset = 0;
   VAR_5->blue.length = 5;
   VAR_5->transp.offset = 0;
   VAR_5->transp.length = 0;
  }
  break;
 case 24:
  VAR_5->red.offset = 0;
  VAR_5->red.length = 8;
  VAR_5->green.offset = 8;
  VAR_5->green.length = 8;
  VAR_5->blue.offset = 16;
  VAR_5->blue.length = 8;
  VAR_5->transp.offset = 0;
  VAR_5->transp.length = 0;
  break;
 case 32:
  VAR_5->red.offset = 16;
  VAR_5->red.length = 8;
  VAR_5->green.offset = 8;
  VAR_5->green.length = 8;
  VAR_5->blue.offset = 0;
  VAR_5->blue.length = 8;
  VAR_5->transp.offset = 24;
  VAR_5->transp.length = 8;
  break;
 }
 VAR_5->red.msb_right = 0;
 VAR_5->green.msb_right = 0;
 VAR_5->blue.msb_right = 0;
 VAR_5->transp.msb_right = 0;

 return 0;
}
