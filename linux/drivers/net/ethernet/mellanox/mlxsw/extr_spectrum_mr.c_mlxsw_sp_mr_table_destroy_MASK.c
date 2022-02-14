
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_mr_table {int route_ht; int catchall_route_priv; int node; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_mr {int priv; TYPE_1__* mr_ops; } ;
struct mlxsw_sp {struct mlxsw_sp_mr* mr; } ;
struct TYPE_2__ {int (* route_destroy ) (struct mlxsw_sp*,int ,int *) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_mr_table*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlxsw_sp_mr_table*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlxsw_sp*,int ,int *) ;

void FUNC_6(struct mlxsw_sp_mr_table *VAR_0)
{
 struct mlxsw_sp *VAR_1 = VAR_0->mlxsw_sp;
 struct mlxsw_sp_mr *VAR_2 = VAR_1->mr;

 FUNC_0(!FUNC_3(VAR_0));
 FUNC_2(&VAR_0->node);
 VAR_2->mr_ops->route_destroy(VAR_1, VAR_2->priv,
      &VAR_0->catchall_route_priv);
 FUNC_4(&VAR_0->route_ht);
 FUNC_1(VAR_0);
}
