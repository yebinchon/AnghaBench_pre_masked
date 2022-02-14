
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bits_per_pixel; int xres_virtual; } ;
struct TYPE_3__ {int line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_0)
{
 VAR_0->fix.line_length = FUNC_0(VAR_0->var.xres_virtual,
      VAR_0->var.bits_per_pixel);
 return 0;
}
