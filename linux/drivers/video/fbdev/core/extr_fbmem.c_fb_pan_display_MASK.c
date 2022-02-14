
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_var_screeninfo {int yoffset; int vmode; int xoffset; } ;
struct TYPE_4__ {unsigned int yres; unsigned int yres_virtual; int xres_virtual; int xres; int xoffset; unsigned int yoffset; int vmode; } ;
struct fb_fix_screeninfo {int ywrapstep; int ypanstep; int xpanstep; } ;
struct fb_info {TYPE_2__ var; TYPE_1__* fbops; struct fb_fix_screeninfo fix; } ;
struct TYPE_3__ {int (* fb_pan_display ) (struct fb_var_screeninfo*,struct fb_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fb_var_screeninfo*,struct fb_info*) ;

int
FUNC_1(struct fb_info *VAR_2, struct fb_var_screeninfo *VAR_3)
{
 struct fb_fix_screeninfo *VAR_4 = &VAR_2->fix;
 unsigned int VAR_5 = VAR_2->var.yres;
 int VAR_6 = 0;

 if (VAR_3->yoffset > 0) {
  if (VAR_3->vmode & VAR_1) {
   if (!VAR_4->ywrapstep || (VAR_3->yoffset % VAR_4->ywrapstep))
    VAR_6 = -VAR_0;
   else
    VAR_5 = 0;
  } else if (!VAR_4->ypanstep || (VAR_3->yoffset % VAR_4->ypanstep))
   VAR_6 = -VAR_0;
 }

 if (VAR_3->xoffset > 0 && (!VAR_4->xpanstep ||
     (VAR_3->xoffset % VAR_4->xpanstep)))
  VAR_6 = -VAR_0;

 if (VAR_6 || !VAR_2->fbops->fb_pan_display ||
     VAR_3->yoffset > VAR_2->var.yres_virtual - VAR_5 ||
     VAR_3->xoffset > VAR_2->var.xres_virtual - VAR_2->var.xres)
  return -VAR_0;

 if ((VAR_6 = VAR_2->fbops->fb_pan_display(VAR_3, VAR_2)))
  return VAR_6;
 VAR_2->var.xoffset = VAR_3->xoffset;
 VAR_2->var.yoffset = VAR_3->yoffset;
 if (VAR_3->vmode & VAR_1)
  VAR_2->var.vmode |= VAR_1;
 else
  VAR_2->var.vmode &= ~VAR_1;
 return 0;
}
