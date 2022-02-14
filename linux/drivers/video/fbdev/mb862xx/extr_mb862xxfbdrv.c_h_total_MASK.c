
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int xres; int left_margin; int right_margin; int hsync_len; } ;



__attribute__((used)) static inline int FUNC_0(struct fb_var_screeninfo *VAR_0)
{
 return VAR_0->xres + VAR_0->left_margin +
  VAR_0->right_margin + VAR_0->hsync_len;
}
