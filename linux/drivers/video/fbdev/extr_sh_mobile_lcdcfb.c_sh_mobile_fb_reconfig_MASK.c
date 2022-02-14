
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int width; int mode; } ;
struct sh_mobile_lcdc_chan {int use_count; TYPE_1__ display; } ;
struct fb_videomode {int dummy; } ;
struct fb_var_screeninfo {int activate; int height; int width; } ;
struct fb_info {struct fb_var_screeninfo var; int fbcon_par; struct sh_mobile_lcdc_chan* par; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct fb_videomode*) ;
 scalar_t__ FUNC_1 (struct fb_info*,struct fb_var_screeninfo*) ;
 int FUNC_2 (struct fb_videomode*,struct fb_var_screeninfo*) ;
 int FUNC_3 (struct fb_var_screeninfo*,int *) ;
 int FUNC_4 (struct fb_info*,int) ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_1)
{
 struct sh_mobile_lcdc_chan *VAR_2 = VAR_1->par;
 struct fb_var_screeninfo VAR_3;
 struct fb_videomode VAR_4;

 if (VAR_2->use_count > 1 || (VAR_2->use_count == 1 && !VAR_1->fbcon_par))

  return;

 FUNC_2(&VAR_4, &VAR_1->var);

 if (FUNC_0(&VAR_2->display.mode, &VAR_4))
  return;


 VAR_3 = VAR_1->var;
 FUNC_3(&VAR_3, &VAR_2->display.mode);
 VAR_3.width = VAR_2->display.width;
 VAR_3.height = VAR_2->display.height;
 VAR_3.activate = VAR_0;

 if (FUNC_1(VAR_1, &VAR_3) < 0)

  return;

 FUNC_4(VAR_1, 1);
}
