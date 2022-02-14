
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct fb_var_screeninfo {scalar_t__ yoffset; int vmode; } ;
struct TYPE_2__ {scalar_t__ yres; scalar_t__ yres_virtual; } ;
struct fb_info {TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fb_info*,struct fb_var_screeninfo*) ;

__attribute__((used)) static int
FUNC_1(struct fb_var_screeninfo *VAR_2, struct fb_info *VAR_3)
{
 u_int VAR_4 = VAR_2->yoffset;

 if (!(VAR_2->vmode & VAR_1))
  VAR_4 += VAR_3->var.yres;

 if (VAR_4 > VAR_3->var.yres_virtual)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_2);

 return 0;
}
