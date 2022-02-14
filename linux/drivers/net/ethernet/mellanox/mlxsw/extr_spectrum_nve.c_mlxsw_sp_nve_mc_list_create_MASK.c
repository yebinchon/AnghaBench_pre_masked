
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nve_mc_list_key {int dummy; } ;
struct mlxsw_sp_nve_mc_list {int ht_node; struct mlxsw_sp_nve_mc_list_key key; int records_list; } ;
struct mlxsw_sp_nve {int mc_list_ht; } ;
struct mlxsw_sp {struct mlxsw_sp_nve* nve; } ;


 int VAR_0 ;
 struct mlxsw_sp_nve_mc_list* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlxsw_sp_nve_mc_list*) ;
 struct mlxsw_sp_nve_mc_list* FUNC_3 (int,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static struct mlxsw_sp_nve_mc_list *
FUNC_5(struct mlxsw_sp *VAR_3,
       const struct mlxsw_sp_nve_mc_list_key *VAR_4)
{
 struct mlxsw_sp_nve *VAR_5 = VAR_3->nve;
 struct mlxsw_sp_nve_mc_list *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_6->records_list);
 VAR_6->key = *VAR_4;

 VAR_7 = FUNC_4(&VAR_5->mc_list_ht, &VAR_6->ht_node,
         VAR_2);
 if (VAR_7)
  goto err_rhashtable_insert;

 return VAR_6;

err_rhashtable_insert:
 FUNC_2(VAR_6);
 return FUNC_0(VAR_7);
}
