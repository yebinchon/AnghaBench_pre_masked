
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nexthop_group {int fib_list; } ;
struct mlxsw_sp_fib_entry {struct mlxsw_sp_nexthop_group* nh_group; int nexthop_group_node; } ;
struct mlxsw_sp {int dummy; } ;
struct fib_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_nexthop_group*) ;
 int FUNC_1 (struct mlxsw_sp_nexthop_group*) ;
 int FUNC_2 (int *,int *) ;
 struct mlxsw_sp_nexthop_group* FUNC_3 (struct mlxsw_sp*,struct fib_info*) ;
 struct mlxsw_sp_nexthop_group* FUNC_4 (struct mlxsw_sp*,struct fib_info*) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_0,
           struct mlxsw_sp_fib_entry *VAR_1,
           struct fib_info *VAR_2)
{
 struct mlxsw_sp_nexthop_group *VAR_3;

 VAR_3 = FUNC_4(VAR_0, VAR_2);
 if (!VAR_3) {
  VAR_3 = FUNC_3(VAR_0, VAR_2);
  if (FUNC_0(VAR_3))
   return FUNC_1(VAR_3);
 }
 FUNC_2(&VAR_1->nexthop_group_node, &VAR_3->fib_list);
 VAR_1->nh_group = VAR_3;
 return 0;
}
