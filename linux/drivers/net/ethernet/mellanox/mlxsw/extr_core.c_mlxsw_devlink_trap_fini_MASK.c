
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_driver {int (* trap_fini ) (struct mlxsw_core*,struct devlink_trap const*,void*) ;} ;
struct mlxsw_core {struct mlxsw_driver* driver; } ;
struct devlink_trap {int dummy; } ;
struct devlink {int dummy; } ;


 struct mlxsw_core* FUNC_0 (struct devlink*) ;
 int FUNC_1 (struct mlxsw_core*,struct devlink_trap const*,void*) ;

__attribute__((used)) static void FUNC_2(struct devlink *VAR_0,
        const struct devlink_trap *VAR_1,
        void *VAR_2)
{
 struct mlxsw_core *VAR_3 = FUNC_0(VAR_0);
 struct mlxsw_driver *VAR_4 = VAR_3->driver;

 if (!VAR_4->trap_fini)
  return;
 VAR_4->trap_fini(VAR_3, VAR_1, VAR_2);
}
