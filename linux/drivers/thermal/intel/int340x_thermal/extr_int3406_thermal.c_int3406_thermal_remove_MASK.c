
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct int3406_thermal_data {int br; int cooling_dev; } ;


 int FUNC_0 (int ) ;
 struct int3406_thermal_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct int3406_thermal_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->cooling_dev);
 FUNC_0(VAR_1->br);
 return 0;
}
