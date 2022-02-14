
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i810fb_par {int dev_flags; } ;
struct TYPE_2__ {int accel_flags; } ;
struct fb_info {TYPE_1__ var; struct i810fb_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*) ;

int FUNC_1(struct fb_info *VAR_1)
{
 struct i810fb_par *VAR_2 = VAR_1->par;

 if (!VAR_1->var.accel_flags || VAR_2->dev_flags & VAR_0)
  return 0;

 return FUNC_0(VAR_1);
}
