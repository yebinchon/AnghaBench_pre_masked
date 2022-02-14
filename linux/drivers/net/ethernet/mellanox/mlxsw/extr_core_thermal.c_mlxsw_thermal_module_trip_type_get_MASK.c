
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct mlxsw_thermal_module* devdata; } ;
struct mlxsw_thermal_module {TYPE_1__* trips; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct thermal_zone_device *VAR_2, int VAR_3,
       enum thermal_trip_type *VAR_4)
{
 struct mlxsw_thermal_module *VAR_5 = VAR_2->devdata;

 if (VAR_3 < 0 || VAR_3 >= VAR_1)
  return -VAR_0;

 *VAR_4 = VAR_5->trips[VAR_3].type;
 return 0;
}
