
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sx {struct mlxsw_bus_info const* bus_info; struct mlxsw_core* core; } ;
struct mlxsw_core {int dummy; } ;
struct mlxsw_bus_info {int dev; } ;


 int FUNC_0 (int ,char*) ;
 struct mlxsw_sx* FUNC_1 (struct mlxsw_core*) ;
 int FUNC_2 (struct mlxsw_sx*) ;
 int FUNC_3 (struct mlxsw_sx*) ;
 int FUNC_4 (struct mlxsw_sx*) ;
 int FUNC_5 (struct mlxsw_sx*) ;
 int FUNC_6 (struct mlxsw_sx*) ;
 int FUNC_7 (struct mlxsw_sx*) ;

__attribute__((used)) static int FUNC_8(struct mlxsw_core *VAR_0,
    const struct mlxsw_bus_info *VAR_1)
{
 struct mlxsw_sx *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_2->core = VAR_0;
 VAR_2->bus_info = VAR_1;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->bus_info->dev, "Failed to get switch HW ID\n");
  return VAR_3;
 }

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->bus_info->dev, "Failed to create ports\n");
  return VAR_3;
 }

 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->bus_info->dev, "Failed to set traps\n");
  goto err_listener_register;
 }

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->bus_info->dev, "Failed to initialize flood tables\n");
  goto err_flood_init;
 }

 return 0;

err_flood_init:
 FUNC_6(VAR_2);
err_listener_register:
 FUNC_5(VAR_2);
 return VAR_3;
}
