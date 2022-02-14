
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_videomode {int xres; int yres; int hsync_len; int vsync_len; int left_margin; int right_margin; int upper_margin; int lower_margin; int vmode; int refresh; int flag; int sync; int pixclock; int * name; } ;
struct fb_var_screeninfo {int xres; int yres; int hsync_len; int vsync_len; int left_margin; int right_margin; int upper_margin; int lower_margin; int vmode; int pixclock; int sync; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct fb_videomode *VAR_4,
    const struct fb_var_screeninfo *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_4->name = ((void*)0);
 VAR_4->xres = VAR_5->xres;
 VAR_4->yres = VAR_5->yres;
 VAR_4->pixclock = VAR_5->pixclock;
 VAR_4->hsync_len = VAR_5->hsync_len;
 VAR_4->vsync_len = VAR_5->vsync_len;
 VAR_4->left_margin = VAR_5->left_margin;
 VAR_4->right_margin = VAR_5->right_margin;
 VAR_4->upper_margin = VAR_5->upper_margin;
 VAR_4->lower_margin = VAR_5->lower_margin;
 VAR_4->sync = VAR_5->sync;
 VAR_4->vmode = VAR_5->vmode & VAR_3;
 VAR_4->flag = VAR_0;
 VAR_4->refresh = 0;

 if (!VAR_5->pixclock)
  return;

 VAR_6 = FUNC_0(VAR_5->pixclock) * 1000;

 VAR_8 = VAR_5->xres + VAR_5->right_margin + VAR_5->hsync_len +
  VAR_5->left_margin;
 VAR_9 = VAR_5->yres + VAR_5->lower_margin + VAR_5->vsync_len +
  VAR_5->upper_margin;

 if (VAR_5->vmode & VAR_2)
  VAR_9 /= 2;
 if (VAR_5->vmode & VAR_1)
  VAR_9 *= 2;

 if (!VAR_8 || !VAR_9)
  return;

 VAR_7 = VAR_6/VAR_8;
 VAR_4->refresh = VAR_7/VAR_9;
}
