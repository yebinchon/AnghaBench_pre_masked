
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct platform_device {int dev; } ;
struct bcm2835_thermal_data {int clk; int debugfsdir; struct thermal_zone_device* tz; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct bcm2835_thermal_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,struct thermal_zone_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct bcm2835_thermal_data *VAR_1 = FUNC_2(VAR_0);
 struct thermal_zone_device *VAR_2 = VAR_1->tz;

 FUNC_1(VAR_1->debugfsdir);
 FUNC_3(&VAR_0->dev, VAR_2);
 FUNC_0(VAR_1->clk);

 return 0;
}
