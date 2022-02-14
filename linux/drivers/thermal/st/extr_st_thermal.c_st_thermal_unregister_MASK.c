
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_thermal_sensor {int thermal_dev; } ;
struct platform_device {int dummy; } ;


 struct st_thermal_sensor* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct st_thermal_sensor*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct platform_device *VAR_0)
{
 struct st_thermal_sensor *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1);
 FUNC_2(VAR_1->thermal_dev);

 return 0;
}
