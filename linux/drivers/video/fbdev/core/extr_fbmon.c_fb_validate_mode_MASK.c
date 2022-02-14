
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fb_var_screeninfo {int xres; int right_margin; int hsync_len; int left_margin; int yres; int lower_margin; int vsync_len; int upper_margin; int vmode; int pixclock; } ;
struct TYPE_2__ {int hfmax; int vfmax; int dclkmax; int hfmin; int vfmin; int dclkmin; } ;
struct fb_info {TYPE_1__ monspecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

int FUNC_1(const struct fb_var_screeninfo *VAR_3, struct fb_info *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;





 if (!VAR_4->monspecs.hfmax || !VAR_4->monspecs.vfmax ||
     !VAR_4->monspecs.dclkmax ||
     VAR_4->monspecs.hfmax < VAR_4->monspecs.hfmin ||
     VAR_4->monspecs.vfmax < VAR_4->monspecs.vfmin ||
     VAR_4->monspecs.dclkmax < VAR_4->monspecs.dclkmin) {
  VAR_10 = 29000; VAR_11 = 30000;
  VAR_12 = 60; VAR_13 = 60;
  VAR_14 = 0; VAR_15 = 25000000;
 } else {
  VAR_10 = VAR_4->monspecs.hfmin;
  VAR_11 = VAR_4->monspecs.hfmax;
  VAR_12 = VAR_4->monspecs.vfmin;
  VAR_13 = VAR_4->monspecs.vfmax;
  VAR_14 = VAR_4->monspecs.dclkmin;
  VAR_15 = VAR_4->monspecs.dclkmax;
 }

 if (!VAR_3->pixclock)
  return -VAR_0;
 VAR_9 = FUNC_0(VAR_3->pixclock) * 1000;

 VAR_7 = VAR_3->xres + VAR_3->right_margin + VAR_3->hsync_len +
  VAR_3->left_margin;
 VAR_8 = VAR_3->yres + VAR_3->lower_margin + VAR_3->vsync_len +
  VAR_3->upper_margin;

 if (VAR_3->vmode & VAR_2)
  VAR_8 /= 2;
 if (VAR_3->vmode & VAR_1)
  VAR_8 *= 2;

 VAR_5 = VAR_9/VAR_7;
 VAR_5 = (VAR_5 + 500) / 1000 * 1000;

 VAR_6 = VAR_5/VAR_8;

 return (VAR_6 < VAR_12 || VAR_6 > VAR_13 ||
  VAR_5 < VAR_10 || VAR_5 > VAR_11 ||
  VAR_9 < VAR_14 || VAR_9 > VAR_15) ?
  -VAR_0 : 0;
}
