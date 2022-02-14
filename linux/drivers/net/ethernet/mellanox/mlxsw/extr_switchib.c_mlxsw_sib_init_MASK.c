
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sib {struct mlxsw_bus_info const* bus_info; struct mlxsw_core* core; } ;
struct mlxsw_core {int dummy; } ;
struct mlxsw_bus_info {int dev; } ;


 int FUNC_0 (int ,char*) ;
 struct mlxsw_sib* FUNC_1 (struct mlxsw_core*) ;
 int FUNC_2 (struct mlxsw_sib*) ;
 int FUNC_3 (struct mlxsw_sib*) ;
 int FUNC_4 (struct mlxsw_sib*) ;
 int FUNC_5 (struct mlxsw_sib*) ;

__attribute__((used)) static int FUNC_6(struct mlxsw_core *VAR_0,
     const struct mlxsw_bus_info *VAR_1)
{
 struct mlxsw_sib *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_2->core = VAR_0;
 VAR_2->bus_info = VAR_1;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->bus_info->dev, "Failed to get switch HW ID\n");
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->bus_info->dev, "Failed to create ports\n");
  return VAR_3;
 }

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->bus_info->dev, "Failed to set traps\n");
  goto err_traps_init_err;
 }

 return 0;

err_traps_init_err:
 FUNC_4(VAR_2);
 return VAR_3;
}
