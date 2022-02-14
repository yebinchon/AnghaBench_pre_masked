
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int activate; int yoffset; int xoffset; } ;
struct mx3fb_info {struct fb_var_screeninfo cur_var; } ;
struct fb_info {struct fb_var_screeninfo var; struct mx3fb_info* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fb_var_screeninfo*,struct fb_var_screeninfo*,int) ;

__attribute__((used)) static bool FUNC_1(struct fb_info *VAR_3)
{
 struct mx3fb_info *VAR_4 = VAR_3->par;
 struct fb_var_screeninfo VAR_5 = VAR_4->cur_var;
 struct fb_var_screeninfo VAR_6 = VAR_3->var;

 if ((VAR_3->var.activate & VAR_0) &&
     (VAR_3->var.activate & VAR_1) == VAR_2)
  return 1;





 VAR_5.xoffset = VAR_6.xoffset;
 VAR_5.yoffset = VAR_6.yoffset;

 return !!FUNC_0(&VAR_5, &VAR_6, sizeof(struct fb_var_screeninfo));
}
