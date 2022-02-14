
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gxt4500_par {void* pixfmt; } ;
struct TYPE_4__ {int length; } ;
struct TYPE_3__ {int length; } ;
struct fb_var_screeninfo {int xres; int xoffset; int xres_virtual; scalar_t__ yres; scalar_t__ yoffset; scalar_t__ yres_virtual; int vmode; int bits_per_pixel; TYPE_2__ green; TYPE_1__ transp; int pixclock; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,struct gxt4500_par*) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_8,
         struct gxt4500_par *VAR_9)
{
 if (VAR_8->xres + VAR_8->xoffset > VAR_8->xres_virtual ||
     VAR_8->yres + VAR_8->yoffset > VAR_8->yres_virtual ||
     VAR_8->xres_virtual > 4096)
  return -VAR_5;
 if ((VAR_8->vmode & VAR_6) != VAR_7)
  return -VAR_5;

 if (FUNC_0(VAR_8->pixclock, VAR_9) < 0)
  return -VAR_5;

 switch (VAR_8->bits_per_pixel) {
 case 32:
  if (VAR_8->transp.length)
   VAR_9->pixfmt = VAR_3;
  else
   VAR_9->pixfmt = VAR_2;
  break;
 case 24:
  VAR_9->pixfmt = VAR_2;
  break;
 case 16:
  if (VAR_8->green.length == 5)
   VAR_9->pixfmt = VAR_0;
  else
   VAR_9->pixfmt = VAR_1;
  break;
 case 8:
  VAR_9->pixfmt = VAR_4;
  break;
 default:
  return -VAR_5;
 }

 return 0;
}
