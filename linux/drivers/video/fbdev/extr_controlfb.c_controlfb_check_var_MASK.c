
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int dummy; } ;
struct fb_par_control {int dummy; } ;
struct fb_info {int dummy; } ;


 int FUNC_0 (struct fb_par_control*,struct fb_var_screeninfo*) ;
 int FUNC_1 (struct fb_var_screeninfo*,struct fb_par_control*,struct fb_info*) ;

__attribute__((used)) static int FUNC_2 (struct fb_var_screeninfo *VAR_0, struct fb_info *VAR_1)
{
 struct fb_par_control VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, &VAR_2, VAR_1);
 if (VAR_3)
  return VAR_3;
 FUNC_0(&VAR_2, VAR_0);

 return 0;
}
