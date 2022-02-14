
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mapping; } ;
struct mlxsw_core {TYPE_3__* driver; int bus_priv; TYPE_2__* bus; TYPE_1__ lag; int hwmon; int thermal; } ;
struct devlink {int dummy; } ;
struct TYPE_6__ {int (* params_unregister ) (struct mlxsw_core*) ;int (* fini ) (struct mlxsw_core*) ;} ;
struct TYPE_5__ {int (* fini ) (int ) ;} ;


 int FUNC_0 (struct devlink*) ;
 scalar_t__ FUNC_1 (struct devlink*) ;
 int FUNC_2 (struct devlink*) ;
 int FUNC_3 (struct devlink*,int *) ;
 int FUNC_4 (struct devlink*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mlxsw_core*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mlxsw_core*) ;
 int FUNC_9 (int ) ;
 struct devlink* FUNC_10 (struct mlxsw_core*) ;
 int FUNC_11 (struct mlxsw_core*) ;
 int FUNC_12 (struct mlxsw_core*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct mlxsw_core*) ;

void FUNC_15(struct mlxsw_core *VAR_0,
          bool VAR_1)
{
 struct devlink *VAR_2 = FUNC_10(VAR_0);

 if (FUNC_1(VAR_2)) {
  if (!VAR_1)



   goto reload_fail_deinit;
  else
   return;
 }

 if (VAR_0->driver->params_unregister)
  FUNC_2(VAR_2);
 FUNC_9(VAR_0->thermal);
 FUNC_7(VAR_0->hwmon);
 if (VAR_0->driver->fini)
  VAR_0->driver->fini(VAR_0);
 if (VAR_0->driver->params_unregister && !VAR_1)
  VAR_0->driver->params_unregister(VAR_0);
 if (!VAR_1)
  FUNC_4(VAR_2);
 FUNC_6(VAR_0);
 FUNC_5(VAR_0->lag.mapping);
 FUNC_8(VAR_0);
 if (!VAR_1)
  FUNC_3(VAR_2, ((void*)0));
 VAR_0->bus->fini(VAR_0->bus_priv);

 return;

reload_fail_deinit:
 if (VAR_0->driver->params_unregister)
  VAR_0->driver->params_unregister(VAR_0);
 FUNC_4(VAR_2);
 FUNC_3(VAR_2, ((void*)0));
 FUNC_0(VAR_2);
}
