
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct mlxsw_thermal_module* devdata; } ;
struct thermal_cooling_device {int dummy; } ;
struct mlxsw_thermal_module {struct mlxsw_thermal* parent; } ;
struct mlxsw_thermal {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlxsw_thermal*,struct thermal_cooling_device*) ;
 int FUNC_2 (struct thermal_zone_device*,int,struct thermal_cooling_device*) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_1,
           struct thermal_cooling_device *VAR_2)
{
 struct mlxsw_thermal_module *VAR_3 = VAR_1->devdata;
 struct mlxsw_thermal *VAR_4 = VAR_3->parent;
 int VAR_5;
 int VAR_6;


 if (FUNC_1(VAR_4, VAR_2) < 0)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = FUNC_2(VAR_1, VAR_5, VAR_2);
  FUNC_0(VAR_6);
 }
 return VAR_6;
}
