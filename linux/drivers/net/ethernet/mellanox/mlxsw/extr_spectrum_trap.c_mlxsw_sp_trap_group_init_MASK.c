
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int dummy; } ;
struct mlxsw_core {int dummy; } ;
struct devlink_trap_group {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,struct devlink_trap_group const*) ;
 struct mlxsw_sp* FUNC_1 (struct mlxsw_core*) ;
 int FUNC_2 (struct mlxsw_sp*,struct devlink_trap_group const*) ;

int FUNC_3(struct mlxsw_core *VAR_0,
        const struct devlink_trap_group *VAR_1)
{
 struct mlxsw_sp *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3)
  return VAR_3;

 return 0;
}
