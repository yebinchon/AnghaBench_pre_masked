
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct mlxsw_thermal* devdata; } ;
struct mlxsw_thermal {int mode; } ;
typedef enum thermal_device_mode { ____Placeholder_thermal_device_mode } thermal_device_mode ;



__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_0,
      enum thermal_device_mode *VAR_1)
{
 struct mlxsw_thermal *VAR_2 = VAR_0->devdata;

 *VAR_1 = VAR_2->mode;

 return 0;
}
