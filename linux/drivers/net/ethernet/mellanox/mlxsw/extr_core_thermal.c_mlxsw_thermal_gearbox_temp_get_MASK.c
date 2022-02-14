
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct thermal_zone_device {struct mlxsw_thermal_module* devdata; } ;
struct mlxsw_thermal_module {int trips; scalar_t__ module; struct mlxsw_thermal* parent; } ;
struct mlxsw_thermal {int core; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,scalar_t__,int,int) ;
 int FUNC_2 (char*,int*,int *,int *) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (struct mlxsw_thermal*,struct thermal_zone_device*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct thermal_zone_device *VAR_3,
       int *VAR_4)
{
 struct mlxsw_thermal_module *VAR_5 = VAR_3->devdata;
 struct mlxsw_thermal *VAR_6 = VAR_5->parent;
 char VAR_7[VAR_1];
 u16 VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = VAR_0 + VAR_5->module;
 FUNC_1(VAR_7, VAR_8, 0, 0);

 VAR_10 = FUNC_3(VAR_6->core, FUNC_0(VAR_2), VAR_7);
 if (VAR_10)
  return VAR_10;

 FUNC_2(VAR_7, &VAR_9, ((void*)0), ((void*)0));
 if (VAR_9 > 0)
  FUNC_4(VAR_6, VAR_3, VAR_5->trips, VAR_9);

 *VAR_4 = VAR_9;
 return 0;
}
