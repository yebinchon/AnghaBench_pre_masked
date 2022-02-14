
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int attrs; } ;
struct mlxsw_hwmon {struct device* hwmon_dev; TYPE_1__** groups; int attrs; TYPE_1__ group; struct mlxsw_bus_info const* bus_info; struct mlxsw_core* core; } ;
struct mlxsw_core {int dummy; } ;
struct mlxsw_bus_info {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 struct device* FUNC_2 (int ,char*,struct mlxsw_hwmon*,TYPE_1__**) ;
 int FUNC_3 (struct mlxsw_hwmon*) ;
 struct mlxsw_hwmon* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlxsw_hwmon*) ;
 int FUNC_6 (struct mlxsw_hwmon*) ;
 int FUNC_7 (struct mlxsw_hwmon*) ;
 int FUNC_8 (struct mlxsw_hwmon*) ;

int FUNC_9(struct mlxsw_core *VAR_2,
       const struct mlxsw_bus_info *VAR_3,
       struct mlxsw_hwmon **VAR_4)
{
 struct mlxsw_hwmon *VAR_5;
 struct device *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->core = VAR_2;
 VAR_5->bus_info = VAR_3;

 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7)
  goto err_temp_init;

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7)
  goto err_fans_init;

 VAR_7 = FUNC_7(VAR_5);
 if (VAR_7)
  goto err_temp_module_init;

 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7)
  goto err_temp_gearbox_init;

 VAR_5->groups[0] = &VAR_5->group;
 VAR_5->group.attrs = VAR_5->attrs;

 VAR_6 = FUNC_2(VAR_3->dev,
            "mlxsw", VAR_5,
            VAR_5->groups);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  goto err_hwmon_register;
 }

 VAR_5->hwmon_dev = VAR_6;
 *VAR_4 = VAR_5;
 return 0;

err_hwmon_register:
err_temp_gearbox_init:
err_temp_module_init:
err_fans_init:
err_temp_init:
 FUNC_3(VAR_5);
 return VAR_7;
}
