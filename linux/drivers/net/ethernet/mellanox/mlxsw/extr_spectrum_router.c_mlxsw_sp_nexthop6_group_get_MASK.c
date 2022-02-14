
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_nexthop_group {int fib_list; } ;
struct TYPE_2__ {struct mlxsw_sp_nexthop_group* nh_group; int nexthop_group_node; } ;
struct mlxsw_sp_fib6_entry {TYPE_1__ common; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_nexthop_group*) ;
 int FUNC_1 (struct mlxsw_sp_nexthop_group*) ;
 int FUNC_2 (int *,int *) ;
 struct mlxsw_sp_nexthop_group* FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_fib6_entry*) ;
 struct mlxsw_sp_nexthop_group* FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_fib6_entry*) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_0,
           struct mlxsw_sp_fib6_entry *VAR_1)
{
 struct mlxsw_sp_nexthop_group *VAR_2;

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (!VAR_2) {
  VAR_2 = FUNC_3(VAR_0, VAR_1);
  if (FUNC_0(VAR_2))
   return FUNC_1(VAR_2);
 }

 FUNC_2(&VAR_1->common.nexthop_group_node,
        &VAR_2->fib_list);
 VAR_1->common.nh_group = VAR_2;

 return 0;
}
