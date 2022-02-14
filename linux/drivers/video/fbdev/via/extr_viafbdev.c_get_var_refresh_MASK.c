
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_var_screeninfo {int left_margin; int xres; int right_margin; int hsync_len; int upper_margin; int yres; int lower_margin; int vsync_len; int pixclock; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct fb_var_screeninfo *VAR_0)
{
 u32 VAR_1, VAR_2;

 VAR_1 = VAR_0->left_margin + VAR_0->xres + VAR_0->right_margin
  + VAR_0->hsync_len;
 VAR_2 = VAR_0->upper_margin + VAR_0->yres + VAR_0->lower_margin
  + VAR_0->vsync_len;
 return FUNC_0(VAR_0->pixclock) * 1000 / (VAR_1 * VAR_2);
}
