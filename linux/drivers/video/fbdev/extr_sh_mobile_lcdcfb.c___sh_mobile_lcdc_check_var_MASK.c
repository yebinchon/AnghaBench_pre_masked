
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sh_mobile_lcdc_format_info {int bpp; int yuv; } ;
struct TYPE_9__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_8__ {int length; scalar_t__ msb_right; scalar_t__ offset; } ;
struct TYPE_7__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_6__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {scalar_t__ xres; scalar_t__ yres; scalar_t__ xres_virtual; scalar_t__ yres_virtual; int bits_per_pixel; scalar_t__ colorspace; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; int grayscale; } ;
struct TYPE_10__ {int smem_len; } ;
struct fb_info {TYPE_5__ fix; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct sh_mobile_lcdc_format_info* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_6,
          struct fb_info *VAR_7)
{
 if (VAR_6->xres > VAR_1 || VAR_6->yres > VAR_2)
  return -VAR_0;




 if (VAR_6->xres_virtual < VAR_6->xres)
  VAR_6->xres_virtual = VAR_6->xres;
 if (VAR_6->yres_virtual < VAR_6->yres)
  VAR_6->yres_virtual = VAR_6->yres;

 if (FUNC_1(VAR_6)) {
  const struct sh_mobile_lcdc_format_info *VAR_8;

  VAR_8 = FUNC_0(VAR_6->grayscale);
  if (VAR_8 == ((void*)0))
   return -VAR_0;
  VAR_6->bits_per_pixel = VAR_8->bpp;




  if (!VAR_8->yuv)
   VAR_6->colorspace = VAR_5;
  else if (VAR_6->colorspace != VAR_4)
   VAR_6->colorspace = VAR_3;
 } else {
  if (VAR_6->bits_per_pixel <= 16) {
   VAR_6->bits_per_pixel = 16;
   VAR_6->red.offset = 11;
   VAR_6->red.length = 5;
   VAR_6->green.offset = 5;
   VAR_6->green.length = 6;
   VAR_6->blue.offset = 0;
   VAR_6->blue.length = 5;
   VAR_6->transp.offset = 0;
   VAR_6->transp.length = 0;
  } else if (VAR_6->bits_per_pixel <= 24) {
   VAR_6->bits_per_pixel = 24;
   VAR_6->red.offset = 16;
   VAR_6->red.length = 8;
   VAR_6->green.offset = 8;
   VAR_6->green.length = 8;
   VAR_6->blue.offset = 0;
   VAR_6->blue.length = 8;
   VAR_6->transp.offset = 0;
   VAR_6->transp.length = 0;
  } else if (VAR_6->bits_per_pixel <= 32) {
   VAR_6->bits_per_pixel = 32;
   VAR_6->red.offset = 16;
   VAR_6->red.length = 8;
   VAR_6->green.offset = 8;
   VAR_6->green.length = 8;
   VAR_6->blue.offset = 0;
   VAR_6->blue.length = 8;
   VAR_6->transp.offset = 24;
   VAR_6->transp.length = 8;
  } else
   return -VAR_0;

  VAR_6->red.msb_right = 0;
  VAR_6->green.msb_right = 0;
  VAR_6->blue.msb_right = 0;
  VAR_6->transp.msb_right = 0;
 }


 if (VAR_6->xres_virtual * VAR_6->yres_virtual * VAR_6->bits_per_pixel / 8 >
     VAR_7->fix.smem_len)
  return -VAR_0;

 return 0;
}
