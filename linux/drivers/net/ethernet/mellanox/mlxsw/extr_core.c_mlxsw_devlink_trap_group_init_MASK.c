
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_driver {int (* trap_group_init ) (struct mlxsw_core*,struct devlink_trap_group const*) ;} ;
struct mlxsw_core {struct mlxsw_driver* driver; } ;
struct devlink_trap_group {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_core* FUNC_0 (struct devlink*) ;
 int FUNC_1 (struct mlxsw_core*,struct devlink_trap_group const*) ;

__attribute__((used)) static int
FUNC_2(struct devlink *VAR_1,
         const struct devlink_trap_group *VAR_2)
{
 struct mlxsw_core *VAR_3 = FUNC_0(VAR_1);
 struct mlxsw_driver *VAR_4 = VAR_3->driver;

 if (!VAR_4->trap_group_init)
  return -VAR_0;
 return VAR_4->trap_group_init(VAR_3, VAR_2);
}
