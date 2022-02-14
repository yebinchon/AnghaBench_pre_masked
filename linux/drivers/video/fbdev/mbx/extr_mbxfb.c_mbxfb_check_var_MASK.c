
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pixclock_div {int dummy; } ;
struct TYPE_8__ {int length; int offset; scalar_t__ msb_right; } ;
struct TYPE_7__ {int length; scalar_t__ msb_right; int offset; } ;
struct TYPE_6__ {int length; int offset; scalar_t__ msb_right; } ;
struct TYPE_5__ {int length; int offset; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {scalar_t__ xres; scalar_t__ yres; int bits_per_pixel; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; void* yres_virtual; void* xres_virtual; int pixclock; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (void*,scalar_t__) ;
 int FUNC_1 (int ,struct pixclock_div*) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_5, struct fb_info *VAR_6)
{
 struct pixclock_div VAR_7;

 VAR_5->pixclock = FUNC_1(VAR_5->pixclock, &VAR_7);

 if (VAR_5->xres < VAR_3)
  VAR_5->xres = VAR_3;
 if (VAR_5->yres < VAR_4)
  VAR_5->yres = VAR_4;
 if (VAR_5->xres > VAR_1)
  return -VAR_0;
 if (VAR_5->yres > VAR_2)
  return -VAR_0;
 VAR_5->xres_virtual = FUNC_0(VAR_5->xres_virtual, VAR_5->xres);
 VAR_5->yres_virtual = FUNC_0(VAR_5->yres_virtual, VAR_5->yres);

 switch (VAR_5->bits_per_pixel) {

 case 8:
  return -VAR_0;
 case 16:
  VAR_5->green.length = (VAR_5->green.length == 5) ? 5 : 6;
  VAR_5->red.length = 5;
  VAR_5->blue.length = 5;
  VAR_5->transp.length = 6 - VAR_5->green.length;
  VAR_5->blue.offset = 0;
  VAR_5->green.offset = 5;
  VAR_5->red.offset = 5 + VAR_5->green.length;
  VAR_5->transp.offset = (5 + VAR_5->red.offset) & 15;
  break;
 case 24:
 case 32:
  VAR_5->red.offset = 16;
  VAR_5->red.length = 8;
  VAR_5->green.offset = 8;
  VAR_5->green.length = 8;
  VAR_5->blue.offset = 0;
  VAR_5->blue.length = 8;
  VAR_5->transp.length = VAR_5->bits_per_pixel - 24;
  VAR_5->transp.offset = (VAR_5->transp.length) ? 24 : 0;
  break;
 }
 VAR_5->red.msb_right = 0;
 VAR_5->green.msb_right = 0;
 VAR_5->blue.msb_right = 0;
 VAR_5->transp.msb_right = 0;

 return 0;
}
