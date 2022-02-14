
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct savagefb_par {int dummy; } ;
struct fb_var_screeninfo {int yoffset; int xoffset; } ;
struct TYPE_4__ {int bits_per_pixel; } ;
struct TYPE_3__ {int line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct savagefb_par* par; } ;


 int FUNC_0 (struct savagefb_par*,int) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_0,
    struct fb_info *VAR_1)
{
 struct savagefb_par *VAR_2 = VAR_1->par;
 int VAR_3;

 VAR_3 = (VAR_0->yoffset * VAR_1->fix.line_length
      + (VAR_0->xoffset & ~1) * ((VAR_1->var.bits_per_pixel+7) / 8)) >> 2;

 FUNC_0(VAR_2, VAR_3);
 return 0;
}
