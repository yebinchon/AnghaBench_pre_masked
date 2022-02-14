
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_mr_table {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_mr_route {int route_priv; } ;
struct mlxsw_sp_mr {int priv; TYPE_1__* mr_ops; } ;
struct mlxsw_sp {struct mlxsw_sp_mr* mr; } ;
struct TYPE_2__ {int (* route_destroy ) (struct mlxsw_sp*,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlxsw_sp*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp_mr_table *VAR_0,
        struct mlxsw_sp_mr_route *VAR_1)
{
 struct mlxsw_sp *VAR_2 = VAR_0->mlxsw_sp;
 struct mlxsw_sp_mr *VAR_3 = VAR_2->mr;

 VAR_3->mr_ops->route_destroy(VAR_2, VAR_3->priv, VAR_1->route_priv);
 FUNC_0(VAR_1->route_priv);
}
