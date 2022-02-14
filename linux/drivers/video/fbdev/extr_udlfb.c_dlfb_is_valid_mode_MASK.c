
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int xres; int yres; } ;
struct dlfb_data {int sku_pixel_limit; } ;



__attribute__((used)) static int FUNC_0(struct fb_videomode *VAR_0, struct dlfb_data *VAR_1)
{
 if (VAR_0->xres * VAR_0->yres > VAR_1->sku_pixel_limit)
  return 0;

 return 1;
}
