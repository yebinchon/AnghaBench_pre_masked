
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bits_per_pixel; int xres_virtual; } ;
struct TYPE_3__ {int line_length; int visual; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_3)
{
 switch (VAR_3->var.bits_per_pixel) {
 case 1:
  VAR_3->fix.visual = VAR_0;
  break;
 case 8:
  VAR_3->fix.visual = VAR_1;
  break;
 case 16:
 case 24:
 case 32:
  VAR_3->fix.visual = VAR_2;
  break;
 }

 VAR_3->fix.line_length = FUNC_0(VAR_3->var.xres_virtual,
      VAR_3->var.bits_per_pixel);

 return 0;
}
