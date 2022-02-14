
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int length; scalar_t__ offset; scalar_t__ msb_right; } ;
struct TYPE_3__ {scalar_t__ length; scalar_t__ offset; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres; int yres; int grayscale; TYPE_2__ red; TYPE_2__ blue; TYPE_2__ green; TYPE_1__ transp; int pixclock; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_2,
     struct fb_info *VAR_3)
{
 u32 VAR_4;

 if (VAR_2->bits_per_pixel < 1 ||
     VAR_2->bits_per_pixel > VAR_0)
  return -VAR_1;

 if (!VAR_2->pixclock)
  return -VAR_1;

 VAR_4 = FUNC_0(VAR_2->xres, 16) - 1;
 if (VAR_4 < 0x01 || VAR_4 > 0x3f)
  return -VAR_1;

 VAR_4 = FUNC_0(VAR_2->yres * VAR_2->xres * VAR_2->bits_per_pixel, 128);
 VAR_4--;
 if (VAR_4 < 0x001 || VAR_4 > 0x1fff)
  return -VAR_1;

 VAR_2->transp.msb_right = 0;
 VAR_2->transp.offset = 0;
 VAR_2->transp.length = 0;
 VAR_2->red.msb_right = 0;
 VAR_2->red.offset = 0;
 VAR_2->red.length = VAR_2->bits_per_pixel;
 VAR_2->green = VAR_2->red;
 VAR_2->blue = VAR_2->red;
 VAR_2->grayscale = VAR_2->bits_per_pixel > 1;

 return 0;
}
