
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxafb_mode_info {int depth; int transparency; int cmap_greyscale; int sync; int lower_margin; int upper_margin; int vsync_len; int right_margin; int left_margin; int hsync_len; int pixclock; int bpp; int yres; int xres; } ;
struct TYPE_2__ {int length; } ;
struct fb_var_screeninfo {TYPE_1__ transp; int grayscale; int sync; int lower_margin; int upper_margin; int vsync_len; int right_margin; int left_margin; int hsync_len; int pixclock; int bits_per_pixel; int yres; int xres; } ;


 int FUNC_0 (struct fb_var_screeninfo*,int ) ;

__attribute__((used)) static void FUNC_1(struct fb_var_screeninfo *VAR_0,
     struct pxafb_mode_info *VAR_1)
{
 VAR_0->xres = VAR_1->xres;
 VAR_0->yres = VAR_1->yres;
 VAR_0->bits_per_pixel = VAR_1->bpp;
 VAR_0->pixclock = VAR_1->pixclock;
 VAR_0->hsync_len = VAR_1->hsync_len;
 VAR_0->left_margin = VAR_1->left_margin;
 VAR_0->right_margin = VAR_1->right_margin;
 VAR_0->vsync_len = VAR_1->vsync_len;
 VAR_0->upper_margin = VAR_1->upper_margin;
 VAR_0->lower_margin = VAR_1->lower_margin;
 VAR_0->sync = VAR_1->sync;
 VAR_0->grayscale = VAR_1->cmap_greyscale;
 VAR_0->transp.length = VAR_1->transparency;


 FUNC_0(VAR_0, VAR_1->depth);
}
