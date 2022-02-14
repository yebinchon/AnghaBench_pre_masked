
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_driver {int (* trap_action_set ) (struct mlxsw_core*,struct devlink_trap const*,int) ;} ;
struct mlxsw_core {struct mlxsw_driver* driver; } ;
struct devlink_trap {int dummy; } ;
struct devlink {int dummy; } ;
typedef enum devlink_trap_action { ____Placeholder_devlink_trap_action } devlink_trap_action ;


 int VAR_0 ;
 struct mlxsw_core* FUNC_0 (struct devlink*) ;
 int FUNC_1 (struct mlxsw_core*,struct devlink_trap const*,int) ;

__attribute__((used)) static int FUNC_2(struct devlink *VAR_1,
      const struct devlink_trap *VAR_2,
      enum devlink_trap_action VAR_3)
{
 struct mlxsw_core *VAR_4 = FUNC_0(VAR_1);
 struct mlxsw_driver *VAR_5 = VAR_4->driver;

 if (!VAR_5->trap_action_set)
  return -VAR_0;
 return VAR_5->trap_action_set(VAR_4, VAR_2, VAR_3);
}
