
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct spear_thermal_dev* devdata; } ;
struct spear_thermal_dev {unsigned int flags; int clk; int thermal_base; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct thermal_zone_device* FUNC_1 (struct platform_device*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct thermal_zone_device*) ;
 int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 unsigned int VAR_1 = 0;
 struct thermal_zone_device *VAR_2 = FUNC_1(VAR_0);
 struct spear_thermal_dev *VAR_3 = VAR_2->devdata;

 FUNC_3(VAR_2);


 VAR_1 = FUNC_2(VAR_3->thermal_base);
 FUNC_4(VAR_1 & ~VAR_3->flags, VAR_3->thermal_base);

 FUNC_0(VAR_3->clk);

 return 0;
}
