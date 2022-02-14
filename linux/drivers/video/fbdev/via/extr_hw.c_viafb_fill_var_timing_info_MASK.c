
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int sync; int vsync_len; int lower_margin; int upper_margin; int hsync_len; int right_margin; int left_margin; int yres; int xres; int pixclock; } ;
struct fb_var_screeninfo {int sync; int vsync_len; int lower_margin; int upper_margin; int hsync_len; int right_margin; int left_margin; int yres; int xres; int pixclock; } ;



void FUNC_0(struct fb_var_screeninfo *VAR_0,
 const struct fb_videomode *VAR_1)
{
 VAR_0->pixclock = VAR_1->pixclock;
 VAR_0->xres = VAR_1->xres;
 VAR_0->yres = VAR_1->yres;
 VAR_0->left_margin = VAR_1->left_margin;
 VAR_0->right_margin = VAR_1->right_margin;
 VAR_0->hsync_len = VAR_1->hsync_len;
 VAR_0->upper_margin = VAR_1->upper_margin;
 VAR_0->lower_margin = VAR_1->lower_margin;
 VAR_0->vsync_len = VAR_1->vsync_len;
 VAR_0->sync = VAR_1->sync;
}
