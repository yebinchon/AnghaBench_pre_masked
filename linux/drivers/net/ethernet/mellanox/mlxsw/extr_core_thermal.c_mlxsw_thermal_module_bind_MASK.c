
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct mlxsw_thermal_module* devdata; } ;
struct thermal_cooling_device {int dummy; } ;
struct mlxsw_thermal_trip {int min_state; int max_state; } ;
struct mlxsw_thermal_module {struct mlxsw_thermal_trip* trips; struct mlxsw_thermal* parent; } ;
struct mlxsw_thermal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlxsw_thermal*,struct thermal_cooling_device*) ;
 int FUNC_1 (struct thermal_zone_device*,int,struct thermal_cooling_device*,int ,int ,int ) ;
 int FUNC_2 (struct thermal_zone_device*,int,struct thermal_cooling_device*) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_2,
         struct thermal_cooling_device *VAR_3)
{
 struct mlxsw_thermal_module *VAR_4 = VAR_2->devdata;
 struct mlxsw_thermal *VAR_5 = VAR_4->parent;
 int VAR_6, VAR_7, VAR_8;


 if (FUNC_0(VAR_5, VAR_3) < 0)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  const struct mlxsw_thermal_trip *VAR_9 = &VAR_4->trips[VAR_6];

  VAR_8 = FUNC_1(VAR_2, VAR_6, VAR_3,
             VAR_9->max_state,
             VAR_9->min_state,
             VAR_1);
  if (VAR_8 < 0)
   goto err_bind_cooling_device;
 }
 return 0;

err_bind_cooling_device:
 for (VAR_7 = VAR_6 - 1; VAR_7 >= 0; VAR_7--)
  FUNC_2(VAR_2, VAR_7, VAR_3);
 return VAR_8;
}
