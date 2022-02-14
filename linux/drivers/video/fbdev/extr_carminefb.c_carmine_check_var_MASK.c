
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_7__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_6__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_5__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; int yres; int yres_virtual; int xres; int xres_virtual; scalar_t__ nonstd; scalar_t__ rotate; scalar_t__ grayscale; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_1,
  struct fb_info *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_1->grayscale || VAR_1->rotate || VAR_1->nonstd)
  return -VAR_0;

 VAR_1->xres_virtual = VAR_1->xres;
 VAR_1->yres_virtual = VAR_1->yres;

 VAR_1->bits_per_pixel = 32;







 VAR_1->transp.offset = 24;
 VAR_1->red.offset = 16;
 VAR_1->green.offset = 8;
 VAR_1->blue.offset = 0;


 VAR_1->red.length = 8;
 VAR_1->green.length = 8;
 VAR_1->blue.length = 8;
 VAR_1->transp.length = 8;

 VAR_1->red.msb_right = 0;
 VAR_1->green.msb_right = 0;
 VAR_1->blue.msb_right = 0;
 VAR_1->transp.msb_right = 0;
 return 0;
}
