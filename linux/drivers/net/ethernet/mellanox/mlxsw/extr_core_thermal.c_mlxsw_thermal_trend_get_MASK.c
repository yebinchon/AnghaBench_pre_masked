
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct mlxsw_thermal_module* devdata; } ;
struct mlxsw_thermal_module {struct mlxsw_thermal* parent; } ;
struct mlxsw_thermal {struct thermal_zone_device* tz_highest_dev; } ;
typedef enum thermal_trend { ____Placeholder_thermal_trend } thermal_trend ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_3,
       int VAR_4, enum thermal_trend *VAR_5)
{
 struct mlxsw_thermal_module *VAR_6 = VAR_3->devdata;
 struct mlxsw_thermal *VAR_7 = VAR_6->parent;

 if (VAR_4 < 0 || VAR_4 >= VAR_1)
  return -VAR_0;

 if (VAR_3 == VAR_7->tz_highest_dev)
  return 1;

 *VAR_5 = VAR_2;
 return 0;
}
