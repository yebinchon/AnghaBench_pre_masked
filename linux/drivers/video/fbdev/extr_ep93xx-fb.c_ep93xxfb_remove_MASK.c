
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct fb_info {int cmap; struct ep93xx_fbi* par; } ;
struct ep93xx_fbi {TYPE_1__* mach_info; int clk; } ;
struct TYPE_2__ {int (* teardown ) (struct platform_device*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fb_info*) ;
 struct fb_info* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct fb_info*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_4(VAR_0);
 struct ep93xx_fbi *VAR_2 = VAR_1->par;

 FUNC_6(VAR_1);
 FUNC_0(VAR_2->clk);
 FUNC_1(VAR_1);
 FUNC_2(&VAR_1->cmap);

 if (VAR_2->mach_info->teardown)
  VAR_2->mach_info->teardown(VAR_0);

 FUNC_3(VAR_1);

 return 0;
}
