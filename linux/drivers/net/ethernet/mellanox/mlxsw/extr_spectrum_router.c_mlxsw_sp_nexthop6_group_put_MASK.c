
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nexthop_group {int fib_list; } ;
struct mlxsw_sp_fib_entry {int nexthop_group_node; struct mlxsw_sp_nexthop_group* nh_group; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_nexthop_group*) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_fib_entry *VAR_1)
{
 struct mlxsw_sp_nexthop_group *VAR_2 = VAR_1->nh_group;

 FUNC_0(&VAR_1->nexthop_group_node);
 if (!FUNC_1(&VAR_2->fib_list))
  return;
 FUNC_2(VAR_0, VAR_2);
}
