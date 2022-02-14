
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_listener; int event_listener; } ;
struct mlxsw_listener {TYPE_1__ u; scalar_t__ is_event; } ;
struct mlxsw_core {int dummy; } ;


 int FUNC_0 (struct mlxsw_core*,int *,void*) ;
 int FUNC_1 (struct mlxsw_core*,int *,void*) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_core *VAR_0,
     const struct mlxsw_listener *VAR_1,
     void *VAR_2)
{
 if (VAR_1->is_event)
  return FUNC_0(VAR_0,
      &VAR_1->u.event_listener,
      VAR_2);
 else
  return FUNC_1(VAR_0,
      &VAR_1->u.rx_listener,
      VAR_2);
}
