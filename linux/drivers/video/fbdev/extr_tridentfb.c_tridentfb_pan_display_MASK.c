
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tridentfb_par {int dummy; } ;
struct fb_var_screeninfo {int xoffset; int yoffset; } ;
struct TYPE_2__ {int xres_virtual; int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; struct tridentfb_par* par; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct tridentfb_par*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_0,
     struct fb_info *VAR_1)
{
 struct tridentfb_par *VAR_2 = VAR_1->par;
 unsigned int VAR_3;

 FUNC_0("enter\n");
 VAR_3 = (VAR_0->xoffset + (VAR_0->yoffset * VAR_1->var.xres_virtual))
  * VAR_1->var.bits_per_pixel / 32;
 FUNC_1(VAR_2, VAR_3);
 FUNC_0("exit\n");
 return 0;
}
