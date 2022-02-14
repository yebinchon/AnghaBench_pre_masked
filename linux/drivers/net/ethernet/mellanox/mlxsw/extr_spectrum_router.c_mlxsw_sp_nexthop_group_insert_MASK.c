
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_nexthop_group {int ht_node; int gateway; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_2__ {int nexthop_group_ht; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlxsw_sp_nexthop_group*) ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_2,
      struct mlxsw_sp_nexthop_group *VAR_3)
{
 if (FUNC_0(VAR_3) == VAR_0 &&
     !VAR_3->gateway)
  return 0;

 return FUNC_1(&VAR_2->router->nexthop_group_ht,
          &VAR_3->ht_node,
          VAR_1);
}
