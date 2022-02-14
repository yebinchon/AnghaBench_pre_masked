
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_7__ {int length; scalar_t__ msb_right; int offset; } ;
struct TYPE_6__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_5__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres_virtual; unsigned long yres_virtual; unsigned long yres; int xres; int xoffset; unsigned long yoffset; int pixclock; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; int nonstd; } ;
struct fb_info {struct da8xx_fb_par* par; } ;
struct da8xx_fb_par {unsigned long vram_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct da8xx_fb_par*,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_4,
   struct fb_info *VAR_5)
{
 int VAR_6 = 0;
 struct da8xx_fb_par *VAR_7 = VAR_5->par;
 int VAR_8 = VAR_4->bits_per_pixel >> 3;
 unsigned long VAR_9 = VAR_4->xres_virtual * VAR_8;

 if (VAR_4->bits_per_pixel > 16 && VAR_3 == VAR_2)
  return -VAR_0;

 switch (VAR_4->bits_per_pixel) {
 case 1:
 case 8:
  VAR_4->red.offset = 0;
  VAR_4->red.length = 8;
  VAR_4->green.offset = 0;
  VAR_4->green.length = 8;
  VAR_4->blue.offset = 0;
  VAR_4->blue.length = 8;
  VAR_4->transp.offset = 0;
  VAR_4->transp.length = 0;
  VAR_4->nonstd = 0;
  break;
 case 4:
  VAR_4->red.offset = 0;
  VAR_4->red.length = 4;
  VAR_4->green.offset = 0;
  VAR_4->green.length = 4;
  VAR_4->blue.offset = 0;
  VAR_4->blue.length = 4;
  VAR_4->transp.offset = 0;
  VAR_4->transp.length = 0;
  VAR_4->nonstd = VAR_1;
  break;
 case 16:
  VAR_4->red.offset = 11;
  VAR_4->red.length = 5;
  VAR_4->green.offset = 5;
  VAR_4->green.length = 6;
  VAR_4->blue.offset = 0;
  VAR_4->blue.length = 5;
  VAR_4->transp.offset = 0;
  VAR_4->transp.length = 0;
  VAR_4->nonstd = 0;
  break;
 case 24:
  VAR_4->red.offset = 16;
  VAR_4->red.length = 8;
  VAR_4->green.offset = 8;
  VAR_4->green.length = 8;
  VAR_4->blue.offset = 0;
  VAR_4->blue.length = 8;
  VAR_4->nonstd = 0;
  break;
 case 32:
  VAR_4->transp.offset = 24;
  VAR_4->transp.length = 8;
  VAR_4->red.offset = 16;
  VAR_4->red.length = 8;
  VAR_4->green.offset = 8;
  VAR_4->green.length = 8;
  VAR_4->blue.offset = 0;
  VAR_4->blue.length = 8;
  VAR_4->nonstd = 0;
  break;
 default:
  VAR_6 = -VAR_0;
 }

 VAR_4->red.msb_right = 0;
 VAR_4->green.msb_right = 0;
 VAR_4->blue.msb_right = 0;
 VAR_4->transp.msb_right = 0;

 if (VAR_9 * VAR_4->yres_virtual > VAR_7->vram_size)
  VAR_4->yres_virtual = VAR_7->vram_size / VAR_9;

 if (VAR_4->yres > VAR_4->yres_virtual)
  VAR_4->yres = VAR_4->yres_virtual;

 if (VAR_4->xres > VAR_4->xres_virtual)
  VAR_4->xres = VAR_4->xres_virtual;

 if (VAR_4->xres + VAR_4->xoffset > VAR_4->xres_virtual)
  VAR_4->xoffset = VAR_4->xres_virtual - VAR_4->xres;
 if (VAR_4->yres + VAR_4->yoffset > VAR_4->yres_virtual)
  VAR_4->yoffset = VAR_4->yres_virtual - VAR_4->yres;

 VAR_4->pixclock = FUNC_0(VAR_7, VAR_4->pixclock);

 return VAR_6;
}
