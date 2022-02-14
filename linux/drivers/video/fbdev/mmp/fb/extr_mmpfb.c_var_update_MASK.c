
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmpfb_info {int pix_fmt; int mode; int dev; } ;
struct fb_videomode {int dummy; } ;
struct fb_var_screeninfo {int yres_virtual; int yres; int xres_virtual; int bits_per_pixel; } ;
struct TYPE_2__ {int line_length; int ypanstep; int visual; } ;
struct fb_info {TYPE_1__ fix; int modelist; struct fb_var_screeninfo var; struct mmpfb_info* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct fb_var_screeninfo*,int *) ;
 scalar_t__ FUNC_2 (struct fb_var_screeninfo*,int *) ;
 int FUNC_3 (struct fb_var_screeninfo*,struct fb_videomode*) ;
 int FUNC_4 (int *,struct fb_videomode*,int) ;
 int FUNC_5 (struct fb_var_screeninfo*,int) ;
 int FUNC_6 (struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_7(struct fb_info *VAR_4)
{
 struct mmpfb_info *VAR_5 = VAR_4->par;
 struct fb_var_screeninfo *VAR_6 = &VAR_4->var;
 struct fb_videomode *VAR_7;
 int VAR_8;


 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8 < 0)
  return -VAR_0;
 FUNC_5(VAR_6, VAR_8);
 VAR_5->pix_fmt = VAR_8;


 VAR_7 = (struct fb_videomode *)FUNC_2(VAR_6, &VAR_4->modelist);
 if (!VAR_7) {
  FUNC_0(VAR_5->dev, "set par: no match mode, use best mode\n");
  VAR_7 = (struct fb_videomode *)FUNC_1(VAR_6,
    &VAR_4->modelist);
  FUNC_3(VAR_6, VAR_7);
 }
 FUNC_4(&VAR_5->mode, VAR_7, sizeof(struct fb_videomode));


 VAR_6->yres_virtual = VAR_6->yres * 2;
 VAR_4->fix.visual = (VAR_8 == VAR_3) ?
  VAR_1 : VAR_2;
 VAR_4->fix.line_length = VAR_6->xres_virtual * VAR_6->bits_per_pixel / 8;
 VAR_4->fix.ypanstep = VAR_6->yres;
 return 0;
}
