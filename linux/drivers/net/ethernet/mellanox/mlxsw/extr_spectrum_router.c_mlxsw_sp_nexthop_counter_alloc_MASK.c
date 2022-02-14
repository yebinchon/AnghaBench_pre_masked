
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nexthop {int counter_valid; int counter_index; } ;
struct mlxsw_sp {int core; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct devlink*,int ) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp*,int *) ;
 struct devlink* FUNC_2 (int ) ;

void FUNC_3(struct mlxsw_sp *VAR_1,
        struct mlxsw_sp_nexthop *VAR_2)
{
 struct devlink *VAR_3;

 VAR_3 = FUNC_2(VAR_1->core);
 if (!FUNC_0(VAR_3,
       VAR_0))
  return;

 if (FUNC_1(VAR_1, &VAR_2->counter_index))
  return;

 VAR_2->counter_valid = 1;
}
