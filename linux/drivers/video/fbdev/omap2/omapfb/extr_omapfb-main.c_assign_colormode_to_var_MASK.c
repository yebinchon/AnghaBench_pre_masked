
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_colormode {int transp; int blue; int green; int red; int nonstd; int bits_per_pixel; } ;
struct fb_var_screeninfo {int transp; int blue; int green; int red; int nonstd; int bits_per_pixel; } ;



__attribute__((used)) static void FUNC_0(struct fb_var_screeninfo *VAR_0,
  struct omapfb_colormode *VAR_1)
{
 VAR_0->bits_per_pixel = VAR_1->bits_per_pixel;
 VAR_0->nonstd = VAR_1->nonstd;
 VAR_0->red = VAR_1->red;
 VAR_0->green = VAR_1->green;
 VAR_0->blue = VAR_1->blue;
 VAR_0->transp = VAR_1->transp;
}
