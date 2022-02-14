
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_table {int route_ht; } ;
struct mlxsw_sp_mr_route {int node; int ht_node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_sp_mr_route*,int) ;
 int FUNC_2 (struct mlxsw_sp_mr_table*,struct mlxsw_sp_mr_route*) ;
 int FUNC_3 (struct mlxsw_sp_mr_table*,struct mlxsw_sp_mr_route*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_5(struct mlxsw_sp_mr_table *VAR_1,
        struct mlxsw_sp_mr_route *VAR_2)
{
 FUNC_1(VAR_2, 0);
 FUNC_3(VAR_1, VAR_2);
 FUNC_4(&VAR_1->route_ht, &VAR_2->ht_node,
          VAR_0);
 FUNC_0(&VAR_2->node);
 FUNC_2(VAR_1, VAR_2);
}
