
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_acl_erp_table {int dummy; } ;
struct mlxsw_sp_acl_erp_key {scalar_t__ mask; } ;
struct mlxsw_sp_acl_erp {int key; struct mlxsw_sp_acl_erp_table* erp_table; int mask_bitmap; } ;


 int VAR_0 ;
 struct mlxsw_sp_acl_erp* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct mlxsw_sp_acl_erp*) ;
 struct mlxsw_sp_acl_erp* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct mlxsw_sp_acl_erp_key*,int) ;
 int FUNC_5 (struct mlxsw_sp_acl_erp_table*) ;
 int FUNC_6 (struct mlxsw_sp_acl_erp_table*) ;
 int FUNC_7 (struct mlxsw_sp_acl_erp_table*,int *) ;
 int FUNC_8 (struct mlxsw_sp_acl_erp_table*,int *) ;
 int FUNC_9 (struct mlxsw_sp_acl_erp_table*) ;

__attribute__((used)) static struct mlxsw_sp_acl_erp *
FUNC_10(struct mlxsw_sp_acl_erp_table *VAR_3,
       struct mlxsw_sp_acl_erp_key *VAR_4)
{
 struct mlxsw_sp_acl_erp *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 FUNC_4(&VAR_5->key, VAR_4, sizeof(*VAR_4));
 FUNC_1(VAR_5->mask_bitmap, (u32 *) VAR_4->mask,
     VAR_2);

 VAR_6 = FUNC_6(VAR_3);
 if (VAR_6)
  goto err_erp_ctcam_inc;

 VAR_5->erp_table = VAR_3;

 VAR_6 = FUNC_8(VAR_3, &VAR_5->key);
 if (VAR_6)
  goto err_master_mask_set;

 VAR_6 = FUNC_9(VAR_3);
 if (VAR_6)
  goto err_erp_region_ctcam_enable;

 return VAR_5;

err_erp_region_ctcam_enable:
 FUNC_7(VAR_3, &VAR_5->key);
err_master_mask_set:
 FUNC_5(VAR_3);
err_erp_ctcam_inc:
 FUNC_2(VAR_5);
 return FUNC_0(VAR_6);
}
