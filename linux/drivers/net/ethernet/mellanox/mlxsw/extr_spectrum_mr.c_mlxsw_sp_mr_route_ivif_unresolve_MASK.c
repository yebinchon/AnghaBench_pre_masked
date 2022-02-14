
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_mr_table {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_mr_route_vif_entry {TYPE_2__* mr_route; } ;
struct mlxsw_sp_mr {TYPE_1__* mr_ops; } ;
struct mlxsw_sp {struct mlxsw_sp_mr* mr; } ;
struct TYPE_4__ {int route_action; int route_priv; } ;
struct TYPE_3__ {int (* route_action_update ) (struct mlxsw_sp*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct mlxsw_sp*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp_mr_table *VAR_1,
     struct mlxsw_sp_mr_route_vif_entry *VAR_2)
{
 struct mlxsw_sp *VAR_3 = VAR_1->mlxsw_sp;
 struct mlxsw_sp_mr *VAR_4 = VAR_3->mr;

 VAR_4->mr_ops->route_action_update(VAR_3, VAR_2->mr_route->route_priv,
     VAR_0);
 VAR_2->mr_route->route_action = VAR_0;
 FUNC_0(VAR_2->mr_route);
}
