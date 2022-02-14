
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct imx_thermal_data* devdata; } ;
struct imx_thermal_data {int temp_passive; int temp_critical; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_1, int VAR_2,
        int *VAR_3)
{
 struct imx_thermal_data *VAR_4 = VAR_1->devdata;

 *VAR_3 = (VAR_2 == VAR_0) ? VAR_4->temp_passive :
          VAR_4->temp_critical;
 return 0;
}
