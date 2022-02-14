
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sm501fb_par {struct sm501fb_info* info; } ;
struct sm501fb_info {TYPE_1__* pdata; } ;
struct TYPE_10__ {int offset; int length; } ;
struct TYPE_9__ {int length; int offset; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int length; int offset; } ;
struct fb_var_screeninfo {int hsync_len; int vsync_len; int xres; int right_margin; int yres; int lower_margin; int bits_per_pixel; int xres_virtual; int yres_virtual; TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct fb_info {struct sm501fb_par* par; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fb_var_screeninfo*) ;
 int FUNC_1 (struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_2,
        struct fb_info *VAR_3)
{
 struct sm501fb_par *VAR_4 = VAR_3->par;
 struct sm501fb_info *VAR_5 = VAR_4->info;
 unsigned long VAR_6;



 if (VAR_2->hsync_len > 255 || VAR_2->vsync_len > 63)
  return -VAR_0;


 if ((VAR_2->xres + VAR_2->right_margin) > 4096)
  return -VAR_0;


 if ((VAR_2->yres + VAR_2->lower_margin) > 2048)
  return -VAR_0;



 if (FUNC_0(VAR_2) > 4096 || FUNC_1(VAR_2) > 2048)
  return -VAR_0;



 VAR_6 = (VAR_2->xres * VAR_2->bits_per_pixel) / 8;
 if ((VAR_6 & 15) != 0)
  return -VAR_0;



 if (VAR_2->xres_virtual > 4096 || VAR_2->yres_virtual > 2048)
  return -VAR_0;



 if (VAR_2->bits_per_pixel <= 8)
  VAR_2->bits_per_pixel = 8;
 else if (VAR_2->bits_per_pixel <= 16)
  VAR_2->bits_per_pixel = 16;
 else if (VAR_2->bits_per_pixel == 24)
  VAR_2->bits_per_pixel = 32;


 switch(VAR_2->bits_per_pixel) {
 case 8:
  VAR_2->red.length = VAR_2->bits_per_pixel;
  VAR_2->red.offset = 0;
  VAR_2->green.length = VAR_2->bits_per_pixel;
  VAR_2->green.offset = 0;
  VAR_2->blue.length = VAR_2->bits_per_pixel;
  VAR_2->blue.offset = 0;
  VAR_2->transp.length = 0;
  VAR_2->transp.offset = 0;

  break;

 case 16:
  if (VAR_5->pdata->flags & VAR_1) {
   VAR_2->blue.offset = 11;
   VAR_2->green.offset = 5;
   VAR_2->red.offset = 0;
  } else {
   VAR_2->red.offset = 11;
   VAR_2->green.offset = 5;
   VAR_2->blue.offset = 0;
  }
  VAR_2->transp.offset = 0;

  VAR_2->red.length = 5;
  VAR_2->green.length = 6;
  VAR_2->blue.length = 5;
  VAR_2->transp.length = 0;
  break;

 case 32:
  if (VAR_5->pdata->flags & VAR_1) {
   VAR_2->transp.offset = 0;
   VAR_2->red.offset = 8;
   VAR_2->green.offset = 16;
   VAR_2->blue.offset = 24;
  } else {
   VAR_2->transp.offset = 24;
   VAR_2->red.offset = 16;
   VAR_2->green.offset = 8;
   VAR_2->blue.offset = 0;
  }

  VAR_2->red.length = 8;
  VAR_2->green.length = 8;
  VAR_2->blue.length = 8;
  VAR_2->transp.length = 0;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
