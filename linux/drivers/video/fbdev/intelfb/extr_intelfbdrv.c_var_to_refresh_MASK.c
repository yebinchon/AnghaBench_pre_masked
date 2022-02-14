
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int xres; int left_margin; int right_margin; int hsync_len; int yres; int upper_margin; int lower_margin; int vsync_len; int pixclock; } ;



__attribute__((used)) static __inline__ int FUNC_0(const struct fb_var_screeninfo *VAR_0)
{
 int VAR_1 = VAR_0->xres + VAR_0->left_margin + VAR_0->right_margin +
     VAR_0->hsync_len;
 int VAR_2 = VAR_0->yres + VAR_0->upper_margin + VAR_0->lower_margin +
     VAR_0->vsync_len;

 return (1000000000 / VAR_0->pixclock * 1000 + 500) / VAR_1 / VAR_2;
}
