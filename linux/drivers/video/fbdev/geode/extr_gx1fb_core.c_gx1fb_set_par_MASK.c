
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct geodefb_par {TYPE_1__* dc_ops; } ;
struct TYPE_5__ {int bits_per_pixel; int xres; } ;
struct TYPE_6__ {int line_length; int visual; } ;
struct fb_info {TYPE_2__ var; TYPE_3__ fix; struct geodefb_par* par; } ;
struct TYPE_4__ {int (* set_mode ) (struct fb_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct fb_info*) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_2)
{
 struct geodefb_par *VAR_3 = VAR_2->par;

 if (VAR_2->var.bits_per_pixel == 16)
  VAR_2->fix.visual = VAR_1;
 else
  VAR_2->fix.visual = VAR_0;

 VAR_2->fix.line_length = FUNC_0(VAR_2->var.xres, VAR_2->var.bits_per_pixel);

 VAR_3->dc_ops->set_mode(VAR_2);

 return 0;
}
