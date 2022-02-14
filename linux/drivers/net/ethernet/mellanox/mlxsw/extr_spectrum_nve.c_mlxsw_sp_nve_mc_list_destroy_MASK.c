
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nve_mc_list {int records_list; int ht_node; } ;
struct mlxsw_sp_nve {int mc_list_ht; } ;
struct mlxsw_sp {struct mlxsw_sp_nve* nve; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_nve_mc_list*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct mlxsw_sp *VAR_1,
      struct mlxsw_sp_nve_mc_list *VAR_2)
{
 struct mlxsw_sp_nve *VAR_3 = VAR_1->nve;

 FUNC_3(&VAR_3->mc_list_ht, &VAR_2->ht_node,
          VAR_0);
 FUNC_0(!FUNC_2(&VAR_2->records_list));
 FUNC_1(VAR_2);
}
