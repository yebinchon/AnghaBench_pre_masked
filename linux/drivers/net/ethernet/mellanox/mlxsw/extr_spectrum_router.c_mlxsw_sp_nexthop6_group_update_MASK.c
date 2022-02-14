
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_nexthop_group {int fib_list; } ;
struct TYPE_3__ {struct mlxsw_sp_nexthop_group* nh_group; int nexthop_group_node; } ;
struct mlxsw_sp_fib6_entry {TYPE_1__ common; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct mlxsw_sp*,TYPE_1__*) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_nexthop_group*) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_fib6_entry*) ;
 int FUNC_6 (struct mlxsw_sp*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(struct mlxsw_sp *VAR_0,
          struct mlxsw_sp_fib6_entry *VAR_1)
{
 struct mlxsw_sp_nexthop_group *VAR_2 = VAR_1->common.nh_group;
 int VAR_3;

 VAR_1->common.nh_group = ((void*)0);
 FUNC_1(&VAR_1->common.nexthop_group_node);

 VAR_3 = FUNC_5(VAR_0, VAR_1);
 if (VAR_3)
  goto err_nexthop6_group_get;





 VAR_3 = FUNC_3(VAR_0, &VAR_1->common);
 if (VAR_3)
  goto err_fib_node_entry_add;

 if (FUNC_2(&VAR_2->fib_list))
  FUNC_4(VAR_0, VAR_2);

 return 0;

err_fib_node_entry_add:
 FUNC_6(VAR_0, &VAR_1->common);
err_nexthop6_group_get:
 FUNC_0(&VAR_1->common.nexthop_group_node,
        &VAR_2->fib_list);
 VAR_1->common.nh_group = VAR_2;
 return VAR_3;
}
