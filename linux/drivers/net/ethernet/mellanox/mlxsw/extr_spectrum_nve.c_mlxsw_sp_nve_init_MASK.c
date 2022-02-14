
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nve {int mc_list_ht; int nve_ops_arr; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {struct mlxsw_sp_nve* nve; int nve_ops_arr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp_nve*) ;
 struct mlxsw_sp_nve* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlxsw_sp*) ;
 int VAR_2 ;
 int FUNC_3 (struct mlxsw_sp*) ;
 int FUNC_4 (struct mlxsw_sp*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

int FUNC_7(struct mlxsw_sp *VAR_3)
{
 struct mlxsw_sp_nve *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_3->nve), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_3->nve = VAR_4;
 VAR_4->mlxsw_sp = VAR_3;
 VAR_4->nve_ops_arr = VAR_3->nve_ops_arr;

 VAR_5 = FUNC_6(&VAR_4->mc_list_ht,
         &VAR_2);
 if (VAR_5)
  goto err_rhashtable_init;

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5)
  goto err_nve_qos_init;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  goto err_nve_ecn_init;

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5)
  goto err_nve_resources_query;

 return 0;

err_nve_resources_query:
err_nve_ecn_init:
err_nve_qos_init:
 FUNC_5(&VAR_4->mc_list_ht);
err_rhashtable_init:
 VAR_3->nve = ((void*)0);
 FUNC_0(VAR_4);
 return VAR_5;
}
