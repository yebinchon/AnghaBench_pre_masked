
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_nexthop {int ht_node; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_2__ {int nexthop_ht; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp *VAR_1,
       struct mlxsw_sp_nexthop *VAR_2)
{
 return FUNC_0(&VAR_1->router->nexthop_ht,
          &VAR_2->ht_node, VAR_0);
}
