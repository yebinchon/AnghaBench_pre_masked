
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fbcon_display {int rotate; int transp; int blue; int green; int red; int width; int height; int accel_flags; int nonstd; int grayscale; int bits_per_pixel; int yres_virtual; int xres_virtual; int mode; } ;
struct fb_var_screeninfo {int rotate; int transp; int blue; int green; int red; int width; int height; int accel_flags; int nonstd; int grayscale; int bits_per_pixel; int yres_virtual; int xres_virtual; } ;


 int FUNC_0 (struct fb_var_screeninfo*,int ) ;

__attribute__((used)) static void FUNC_1(struct fb_var_screeninfo *VAR_0,
      struct fbcon_display *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->mode);
 VAR_0->xres_virtual = VAR_1->xres_virtual;
 VAR_0->yres_virtual = VAR_1->yres_virtual;
 VAR_0->bits_per_pixel = VAR_1->bits_per_pixel;
 VAR_0->grayscale = VAR_1->grayscale;
 VAR_0->nonstd = VAR_1->nonstd;
 VAR_0->accel_flags = VAR_1->accel_flags;
 VAR_0->height = VAR_1->height;
 VAR_0->width = VAR_1->width;
 VAR_0->red = VAR_1->red;
 VAR_0->green = VAR_1->green;
 VAR_0->blue = VAR_1->blue;
 VAR_0->transp = VAR_1->transp;
 VAR_0->rotate = VAR_1->rotate;
}
