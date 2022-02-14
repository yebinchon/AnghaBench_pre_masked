
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long long u64 ;
typedef int u32 ;
struct pxa168fb_mach_info {int dummy; } ;
struct pxa168fb_info {int dev; } ;
struct fb_videomode {int dummy; } ;
struct fb_var_screeninfo {int xres_virtual; int xres; int yres_virtual; int bits_per_pixel; int yres; int left_margin; int right_margin; int hsync_len; int upper_margin; int lower_margin; int vsync_len; int pixclock; } ;
struct TYPE_2__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; struct fb_var_screeninfo var; int modelist; struct pxa168fb_info* par; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (long long,int) ;
 struct fb_videomode* FUNC_2 (struct fb_var_screeninfo*,int *) ;
 int FUNC_3 (struct fb_var_screeninfo*,struct fb_videomode const*) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_1,
         struct pxa168fb_mach_info *VAR_2)
{
 struct pxa168fb_info *VAR_3 = VAR_1->par;
 struct fb_var_screeninfo *VAR_4 = &VAR_1->var;
 int VAR_5 = 0;
 u32 VAR_6, VAR_7, VAR_8;
 u64 VAR_9;
 const struct fb_videomode *VAR_10;




 VAR_8 = VAR_0;


 VAR_10 = FUNC_2(&VAR_1->var, &VAR_1->modelist);
 if (VAR_10)
  FUNC_3(&VAR_1->var, VAR_10);


 VAR_4->xres_virtual = VAR_4->xres;
 VAR_4->yres_virtual = VAR_1->fix.smem_len /
  (VAR_4->xres_virtual * (VAR_4->bits_per_pixel >> 3));
 FUNC_0(VAR_3->dev, "pxa168fb: find best mode: res = %dx%d\n",
    VAR_4->xres, VAR_4->yres);


 VAR_6 = VAR_4->xres + VAR_4->left_margin + VAR_4->right_margin +
    VAR_4->hsync_len;
 VAR_7 = VAR_4->yres + VAR_4->upper_margin + VAR_4->lower_margin +
    VAR_4->vsync_len;

 VAR_9 = 1000000000000ll;
 FUNC_1(VAR_9, VAR_6 * VAR_7 * VAR_8);
 VAR_4->pixclock = (u32)VAR_9;

 return VAR_5;
}
