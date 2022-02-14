
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct mlxsw_thermal* devdata; } ;
struct thermal_cooling_device {int dummy; } ;
struct mlxsw_thermal_trip {int min_state; int max_state; } ;
struct mlxsw_thermal {struct mlxsw_thermal_trip* trips; TYPE_1__* bus_info; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 scalar_t__ FUNC_1 (struct mlxsw_thermal*,struct thermal_cooling_device*) ;
 int FUNC_2 (struct thermal_zone_device*,int,struct thermal_cooling_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_2,
         struct thermal_cooling_device *VAR_3)
{
 struct mlxsw_thermal *VAR_4 = VAR_2->devdata;
 struct device *VAR_5 = VAR_4->bus_info->dev;
 int VAR_6, VAR_7;


 if (FUNC_1(VAR_4, VAR_3) < 0)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  const struct mlxsw_thermal_trip *VAR_8 = &VAR_4->trips[VAR_6];

  VAR_7 = FUNC_2(VAR_2, VAR_6, VAR_3,
             VAR_8->max_state,
             VAR_8->min_state,
             VAR_1);
  if (VAR_7 < 0) {
   FUNC_0(VAR_5, "Failed to bind cooling device to trip %d\n", VAR_6);
   return VAR_7;
  }
 }
 return 0;
}
