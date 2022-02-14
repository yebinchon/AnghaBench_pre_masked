
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int xres; int bits_per_pixel; } ;
struct TYPE_3__ {int line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct carmine_fb* par; } ;
struct carmine_fb {int new_mode; int cur_mode; int * res; } ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct carmine_fb*) ;
 int FUNC_2 (struct carmine_fb*) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_1)
{
 struct carmine_fb *VAR_2 = VAR_1->par;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_1->var);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->new_mode = VAR_3;
 if (VAR_2->cur_mode != VAR_2->new_mode) {

  VAR_2->cur_mode = VAR_2->new_mode;
  VAR_2->res = &VAR_0[VAR_2->new_mode];

  FUNC_1(VAR_2);
  FUNC_2(VAR_2);
 }

 VAR_1->fix.line_length = VAR_1->var.xres * VAR_1->var.bits_per_pixel / 8;
 return 0;
}
