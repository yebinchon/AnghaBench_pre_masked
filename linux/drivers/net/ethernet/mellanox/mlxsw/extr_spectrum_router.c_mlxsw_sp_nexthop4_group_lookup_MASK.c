
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_nexthop_group_cmp_arg {struct fib_info* fi; int proto; } ;
struct mlxsw_sp_nexthop_group {int dummy; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct fib_info {int dummy; } ;
struct TYPE_2__ {int nexthop_group_ht; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_sp_nexthop_group* FUNC_0 (int *,struct mlxsw_sp_nexthop_group_cmp_arg*,int ) ;

__attribute__((used)) static struct mlxsw_sp_nexthop_group *
FUNC_1(struct mlxsw_sp *VAR_2,
          struct fib_info *VAR_3)
{
 struct mlxsw_sp_nexthop_group_cmp_arg VAR_4;

 VAR_4.proto = VAR_0;
 VAR_4.fi = VAR_3;
 return FUNC_0(&VAR_2->router->nexthop_group_ht,
          &VAR_4,
          VAR_1);
}
