
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int dummy; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {struct dlfb_data* par; } ;
struct dlfb_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_videomode*,struct dlfb_data*) ;
 int FUNC_1 (struct fb_var_screeninfo*) ;
 int FUNC_2 (struct fb_videomode*,struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_1,
    struct fb_info *VAR_2)
{
 struct fb_videomode VAR_3;
 struct dlfb_data *VAR_4 = VAR_2->par;


 FUNC_1(VAR_1);

 FUNC_2(&VAR_3, VAR_1);

 if (!FUNC_0(&VAR_3, VAR_4))
  return -VAR_0;

 return 0;
}
