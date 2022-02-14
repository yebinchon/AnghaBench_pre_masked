
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_info {int region; int id; } ;
struct fb_var_screeninfo {scalar_t__ xoffset; scalar_t__ yoffset; } ;
struct fb_info {struct fb_var_screeninfo var; } ;


 int FUNC_0 (char*,int ) ;
 struct omapfb_info* FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct fb_var_screeninfo *VAR_0,
  struct fb_info *VAR_1)
{
 struct omapfb_info *VAR_2 = FUNC_1(VAR_1);
 struct fb_var_screeninfo VAR_3;
 int VAR_4;

 FUNC_0("pan_display(%d)\n", FUNC_1(VAR_1)->id);

 if (VAR_0->xoffset == VAR_1->var.xoffset &&
     VAR_0->yoffset == VAR_1->var.yoffset)
  return 0;

 VAR_3 = VAR_1->var;
 VAR_3.xoffset = VAR_0->xoffset;
 VAR_3.yoffset = VAR_0->yoffset;

 VAR_1->var = VAR_3;

 FUNC_3(VAR_2->region);

 VAR_4 = FUNC_2(VAR_1, 0);

 FUNC_4(VAR_2->region);

 return VAR_4;
}
