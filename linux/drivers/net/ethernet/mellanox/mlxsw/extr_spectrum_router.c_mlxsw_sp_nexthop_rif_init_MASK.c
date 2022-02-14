
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif {int nexthop_list; } ;
struct mlxsw_sp_nexthop {int rif_list_node; struct mlxsw_sp_rif* rif; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_sp_nexthop *VAR_0,
          struct mlxsw_sp_rif *VAR_1)
{
 if (VAR_0->rif)
  return;

 VAR_0->rif = VAR_1;
 FUNC_0(&VAR_0->rif_list_node, &VAR_1->nexthop_list);
}
