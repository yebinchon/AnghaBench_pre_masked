
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_thermal_module {int parent; } ;
struct mlxsw_thermal {struct mlxsw_thermal_module* tz_module_arr; } ;
struct mlxsw_core {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_thermal_module* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (struct mlxsw_thermal_module*) ;
 unsigned int FUNC_2 (struct mlxsw_core*) ;
 int FUNC_3 (struct mlxsw_core*) ;
 int FUNC_4 (struct mlxsw_thermal_module*) ;
 int FUNC_5 (struct device*,struct mlxsw_core*,struct mlxsw_thermal*,int) ;
 int FUNC_6 (struct mlxsw_thermal_module*) ;

__attribute__((used)) static int
FUNC_7(struct device *VAR_2, struct mlxsw_core *VAR_3,
      struct mlxsw_thermal *VAR_4)
{
 unsigned int VAR_5 = FUNC_2(VAR_3);
 struct mlxsw_thermal_module *VAR_6;
 int VAR_7, VAR_8;

 if (!FUNC_3(VAR_3))
  return 0;

 VAR_4->tz_module_arr = FUNC_0(VAR_5,
      sizeof(*VAR_4->tz_module_arr),
      VAR_1);
 if (!VAR_4->tz_module_arr)
  return -VAR_0;

 for (VAR_7 = 1; VAR_7 < VAR_5; VAR_7++) {
  VAR_8 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_7);
  if (VAR_8)
   goto err_unreg_tz_module_arr;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5 - 1; VAR_7++) {
  VAR_6 = &VAR_4->tz_module_arr[VAR_7];
  if (!VAR_6->parent)
   continue;
  VAR_8 = FUNC_6(VAR_6);
  if (VAR_8)
   goto err_unreg_tz_module_arr;
 }

 return 0;

err_unreg_tz_module_arr:
 for (VAR_7 = VAR_5 - 1; VAR_7 >= 0; VAR_7--)
  FUNC_4(&VAR_4->tz_module_arr[VAR_7]);
 FUNC_1(VAR_4->tz_module_arr);
 return VAR_8;
}
