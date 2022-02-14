
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sm501fb_par {struct sm501fb_info* info; } ;
struct sm501fb_info {scalar_t__ regs; } ;
struct fb_var_screeninfo {int xoffset; int yoffset; } ;
struct TYPE_2__ {int xres_virtual; int yres_virtual; } ;
struct fb_info {TYPE_1__ var; struct sm501fb_par* par; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sm501fb_info*) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_2,
      struct fb_info *VAR_3)
{
 struct sm501fb_par *VAR_4 = VAR_3->par;
 struct sm501fb_info *VAR_5 = VAR_4->info;
 unsigned long VAR_6;

 VAR_6 = VAR_2->xoffset | (VAR_3->var.xres_virtual << 16);
 FUNC_1(VAR_6, VAR_5->regs + VAR_1);

 VAR_6 = VAR_2->yoffset | (VAR_3->var.yres_virtual << 16);
 FUNC_1(VAR_6, VAR_5->regs + VAR_0);

 FUNC_0(VAR_5);
 return 0;
}
