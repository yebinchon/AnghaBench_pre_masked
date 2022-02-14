
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct imx_thermal_data* devdata; } ;
struct imx_thermal_data {int temp_critical; } ;



__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_0, int *VAR_1)
{
 struct imx_thermal_data *VAR_2 = VAR_0->devdata;

 *VAR_1 = VAR_2->temp_critical;
 return 0;
}
