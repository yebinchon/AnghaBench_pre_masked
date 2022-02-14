
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_vif {int route_evif_list; } ;
struct mlxsw_sp_mr_route_vif_entry {int vif_node; int route_node; struct mlxsw_sp_mr_vif* mr_vif; struct mlxsw_sp_mr_route* mr_route; } ;
struct mlxsw_sp_mr_route {int evif_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_sp_mr_route_vif_entry* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp_mr_route *VAR_2,
           struct mlxsw_sp_mr_vif *VAR_3)
{
 struct mlxsw_sp_mr_route_vif_entry *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_4->mr_route = VAR_2;
 VAR_4->mr_vif = VAR_3;
 FUNC_1(&VAR_4->route_node, &VAR_2->evif_list);
 FUNC_1(&VAR_4->vif_node, &VAR_3->route_evif_list);
 return 0;
}
