
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_m {struct mlxsw_bus_info const* bus_info; struct mlxsw_core* core; } ;
struct mlxsw_core {int dummy; } ;
struct mlxsw_bus_info {int dev; } ;


 int FUNC_0 (int ,char*) ;
 struct mlxsw_m* FUNC_1 (struct mlxsw_core*) ;
 int FUNC_2 (struct mlxsw_m*) ;
 int FUNC_3 (struct mlxsw_m*) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_core *VAR_0,
   const struct mlxsw_bus_info *VAR_1)
{
 struct mlxsw_m *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_2->core = VAR_0;
 VAR_2->bus_info = VAR_1;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->bus_info->dev, "Failed to get base mac\n");
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->bus_info->dev, "Failed to create ports\n");
  return VAR_3;
 }

 return 0;
}
