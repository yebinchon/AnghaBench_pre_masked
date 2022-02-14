
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_plane_struct {struct omapfb_device* fbdev; } ;
struct fb_var_screeninfo {scalar_t__ xoffset; scalar_t__ yoffset; } ;
struct omapfb_device {struct fb_var_screeninfo new_var; } ;
struct fb_info {struct fb_var_screeninfo var; struct omapfb_plane_struct* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_var_screeninfo*,struct fb_var_screeninfo*,int) ;
 int FUNC_2 (struct omapfb_device*) ;
 int FUNC_3 (struct omapfb_device*) ;
 scalar_t__ FUNC_4 (struct fb_info*,struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_5(struct fb_var_screeninfo *VAR_1,
          struct fb_info *VAR_2)
{
 struct omapfb_plane_struct *VAR_3 = VAR_2->par;
 struct omapfb_device *VAR_4 = VAR_3->fbdev;
 int VAR_5 = 0;

 FUNC_2(VAR_4);
 if (VAR_1->xoffset != VAR_2->var.xoffset ||
     VAR_1->yoffset != VAR_2->var.yoffset) {
  struct fb_var_screeninfo *VAR_6 = &VAR_4->new_var;

  FUNC_1(VAR_6, &VAR_2->var, sizeof(*VAR_6));
  VAR_6->xoffset = VAR_1->xoffset;
  VAR_6->yoffset = VAR_1->yoffset;
  if (FUNC_4(VAR_2, VAR_6))
   VAR_5 = -VAR_0;
  else {
   FUNC_1(&VAR_2->var, VAR_6, sizeof(*VAR_6));
   FUNC_0(VAR_2);
  }
 }
 FUNC_3(VAR_4);

 return VAR_5;
}
