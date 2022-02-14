
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_table {int num_atcam_erps; int atcam_erps_list; } ;
struct mlxsw_sp_acl_erp_key {int dummy; } ;
struct mlxsw_sp_acl_erp {int id; int list; int key; struct mlxsw_sp_acl_erp_table* erp_table; } ;


 int VAR_0 ;
 struct mlxsw_sp_acl_erp* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mlxsw_sp_acl_erp*) ;
 struct mlxsw_sp_acl_erp* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct mlxsw_sp_acl_erp_key*,int) ;
 int FUNC_6 (struct mlxsw_sp_acl_erp_table*,int *) ;
 int FUNC_7 (struct mlxsw_sp_acl_erp_table*,int ) ;
 int FUNC_8 (struct mlxsw_sp_acl_erp_table*,int *) ;

__attribute__((used)) static struct mlxsw_sp_acl_erp *
FUNC_9(struct mlxsw_sp_acl_erp_table *VAR_2,
    struct mlxsw_sp_acl_erp_key *VAR_3)
{
 struct mlxsw_sp_acl_erp *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_6(VAR_2, &VAR_4->id);
 if (VAR_5)
  goto err_erp_id_get;

 FUNC_5(&VAR_4->key, VAR_3, sizeof(*VAR_3));
 FUNC_3(&VAR_4->list, &VAR_2->atcam_erps_list);
 VAR_2->num_atcam_erps++;
 VAR_4->erp_table = VAR_2;

 VAR_5 = FUNC_8(VAR_2, &VAR_4->key);
 if (VAR_5)
  goto err_master_mask_set;

 return VAR_4;

err_master_mask_set:
 VAR_2->num_atcam_erps--;
 FUNC_4(&VAR_4->list);
 FUNC_7(VAR_2, VAR_4->id);
err_erp_id_get:
 FUNC_1(VAR_4);
 return FUNC_0(VAR_5);
}
