
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int length; int offset; int msb_right; } ;
struct TYPE_9__ {int length; int offset; int msb_right; } ;
struct TYPE_8__ {int length; int offset; int msb_right; } ;
struct TYPE_7__ {int length; int offset; int msb_right; } ;
struct fb_var_screeninfo {scalar_t__ xres_virtual; scalar_t__ xres; scalar_t__ yres_virtual; scalar_t__ yres; scalar_t__ xoffset; scalar_t__ yoffset; int bits_per_pixel; int height; int width; int sync; int nonstd; scalar_t__ grayscale; TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct TYPE_6__ {scalar_t__ xres; scalar_t__ xres_virtual; scalar_t__ yres; scalar_t__ yres_virtual; } ;
struct fb_info {TYPE_1__ var; } ;


 int FUNC_0 (struct fb_var_screeninfo*,struct fb_info*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_1,
    struct fb_info *VAR_2)
{
 if (VAR_1->xres_virtual < VAR_1->xres)
  VAR_1->xres_virtual = VAR_1->xres;
 if (VAR_1->yres_virtual < VAR_1->yres)
  VAR_1->yres_virtual = VAR_1->yres;

 if (VAR_1->xoffset + VAR_2->var.xres > VAR_2->var.xres_virtual)
  VAR_1->xoffset = VAR_2->var.xres_virtual - VAR_2->var.xres;

 if (VAR_1->yoffset + VAR_2->var.yres > VAR_2->var.yres_virtual)
  VAR_1->yoffset = VAR_2->var.yres_virtual - VAR_2->var.yres;

 if ((VAR_1->bits_per_pixel != 32) && (VAR_1->bits_per_pixel != 24) &&
     (VAR_1->bits_per_pixel != 16))
  VAR_1->bits_per_pixel = VAR_0;

 switch (VAR_1->bits_per_pixel) {
 case 16:
  VAR_1->red.length = 5;
  VAR_1->red.offset = 11;
  VAR_1->red.msb_right = 0;

  VAR_1->green.length = 6;
  VAR_1->green.offset = 5;
  VAR_1->green.msb_right = 0;

  VAR_1->blue.length = 5;
  VAR_1->blue.offset = 0;
  VAR_1->blue.msb_right = 0;

  VAR_1->transp.length = 0;
  VAR_1->transp.offset = 0;
  VAR_1->transp.msb_right = 0;
  break;
 case 24:
  VAR_1->red.length = 8;
  VAR_1->red.offset = 0;
  VAR_1->red.msb_right = 0;

  VAR_1->green.length = 8;
  VAR_1->green.offset = 8;
  VAR_1->green.msb_right = 0;

  VAR_1->blue.length = 8;
  VAR_1->blue.offset = 16;
  VAR_1->blue.msb_right = 0;

  VAR_1->transp.length = 0;
  VAR_1->transp.offset = 0;
  VAR_1->transp.msb_right = 0;
  break;
 case 32:
  VAR_1->red.length = 8;
  VAR_1->red.offset = 16;
  VAR_1->red.msb_right = 0;

  VAR_1->green.length = 8;
  VAR_1->green.offset = 8;
  VAR_1->green.msb_right = 0;

  VAR_1->blue.length = 8;
  VAR_1->blue.offset = 0;
  VAR_1->blue.msb_right = 0;

  VAR_1->transp.length = 8;
  VAR_1->transp.offset = 24;
  VAR_1->transp.msb_right = 0;

  break;
 }

 VAR_1->height = -1;
 VAR_1->width = -1;
 VAR_1->grayscale = 0;


 VAR_1->sync |= VAR_1->nonstd;
 VAR_1->nonstd |= VAR_1->sync;

 FUNC_0(VAR_1, VAR_2);
 return 0;
}
