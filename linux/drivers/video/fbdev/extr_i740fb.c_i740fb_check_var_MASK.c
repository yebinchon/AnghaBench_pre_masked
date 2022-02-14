
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int offset; int length; } ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_7__ {int offset; int length; } ;
struct TYPE_6__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; scalar_t__ xres; scalar_t__ xres_virtual; scalar_t__ yres; scalar_t__ yres_virtual; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; TYPE_1__ transp; } ;
struct TYPE_10__ {scalar_t__ dclkmax; scalar_t__ vfmax; scalar_t__ hfmax; } ;
struct fb_info {TYPE_5__ monspecs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fb_var_screeninfo*,struct fb_info*) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 switch (VAR_1->bits_per_pixel) {
 case 8:
  VAR_1->red.offset = VAR_1->green.offset = VAR_1->blue.offset = 0;
  VAR_1->red.length = VAR_1->green.length = VAR_1->blue.length = 8;
  break;
 case 16:
  switch (VAR_1->green.length) {
  default:
  case 5:
   VAR_1->red.offset = 10;
   VAR_1->green.offset = 5;
   VAR_1->blue.offset = 0;
   VAR_1->red.length = 5;
   VAR_1->green.length = 5;
   VAR_1->blue.length = 5;
   break;
  case 6:
   VAR_1->red.offset = 11;
   VAR_1->green.offset = 5;
   VAR_1->blue.offset = 0;
   VAR_1->red.length = VAR_1->blue.length = 5;
   break;
  }
  break;
 case 24:
  VAR_1->red.offset = 16;
  VAR_1->green.offset = 8;
  VAR_1->blue.offset = 0;
  VAR_1->red.length = VAR_1->green.length = VAR_1->blue.length = 8;
  break;
 case 32:
  VAR_1->transp.offset = 24;
  VAR_1->red.offset = 16;
  VAR_1->green.offset = 8;
  VAR_1->blue.offset = 0;
  VAR_1->transp.length = 8;
  VAR_1->red.length = VAR_1->green.length = VAR_1->blue.length = 8;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_1->xres > VAR_1->xres_virtual)
  VAR_1->xres_virtual = VAR_1->xres;

 if (VAR_1->yres > VAR_1->yres_virtual)
  VAR_1->yres_virtual = VAR_1->yres;

 if (VAR_2->monspecs.hfmax && VAR_2->monspecs.vfmax &&
     VAR_2->monspecs.dclkmax && FUNC_0(VAR_1, VAR_2) < 0)
  return -VAR_0;

 return 0;
}
