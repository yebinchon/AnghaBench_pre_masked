
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_nexthop_key {int dummy; } ;
struct mlxsw_sp_nexthop {int dummy; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_2__ {int nexthop_ht; } ;


 int VAR_0 ;
 struct mlxsw_sp_nexthop* FUNC_0 (int *,struct mlxsw_sp_nexthop_key*,int ) ;

__attribute__((used)) static struct mlxsw_sp_nexthop *
FUNC_1(struct mlxsw_sp *VAR_1,
   struct mlxsw_sp_nexthop_key VAR_2)
{
 return FUNC_0(&VAR_1->router->nexthop_ht, &VAR_2,
          VAR_0);
}
