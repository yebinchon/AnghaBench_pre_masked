
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int vmode; int sync; int vsync_len; int hsync_len; int lower_margin; int upper_margin; int right_margin; int left_margin; int pixclock; int yres; int xres; } ;
struct fb_var_screeninfo {int vmode; int sync; int vsync_len; int hsync_len; int lower_margin; int upper_margin; int right_margin; int left_margin; int pixclock; scalar_t__ yoffset; scalar_t__ xoffset; int yres_virtual; int xres_virtual; int yres; int xres; } ;


 int VAR_0 ;

void FUNC_0(struct fb_var_screeninfo *VAR_1,
    const struct fb_videomode *VAR_2)
{
 VAR_1->xres = VAR_2->xres;
 VAR_1->yres = VAR_2->yres;
 VAR_1->xres_virtual = VAR_2->xres;
 VAR_1->yres_virtual = VAR_2->yres;
 VAR_1->xoffset = 0;
 VAR_1->yoffset = 0;
 VAR_1->pixclock = VAR_2->pixclock;
 VAR_1->left_margin = VAR_2->left_margin;
 VAR_1->right_margin = VAR_2->right_margin;
 VAR_1->upper_margin = VAR_2->upper_margin;
 VAR_1->lower_margin = VAR_2->lower_margin;
 VAR_1->hsync_len = VAR_2->hsync_len;
 VAR_1->vsync_len = VAR_2->vsync_len;
 VAR_1->sync = VAR_2->sync;
 VAR_1->vmode = VAR_2->vmode & VAR_0;
}
