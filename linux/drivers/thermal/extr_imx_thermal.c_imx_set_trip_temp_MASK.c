
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct imx_thermal_data* devdata; } ;
struct imx_thermal_data {int temp_critical; int temp_passive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct imx_thermal_data*,int) ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_3, int VAR_4,
        int VAR_5)
{
 struct imx_thermal_data *VAR_6 = VAR_3->devdata;


 if (VAR_4 == VAR_2)
  return -VAR_1;


 if (VAR_5 < 0 || VAR_5 > VAR_6->temp_critical)
  return -VAR_0;

 VAR_6->temp_passive = VAR_5;

 FUNC_0(VAR_6, VAR_5);

 return 0;
}
