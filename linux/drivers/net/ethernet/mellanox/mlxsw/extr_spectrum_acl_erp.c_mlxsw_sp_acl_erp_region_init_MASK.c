
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_hints {int dummy; } ;
struct mlxsw_sp_acl_erp_table {int dummy; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_erp_table* erp_table; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_acl_erp_table*) ;
 int FUNC_1 (struct mlxsw_sp_acl_erp_table*) ;
 int FUNC_2 (struct mlxsw_sp_acl_atcam_region*) ;
 int FUNC_3 (struct mlxsw_sp_acl_atcam_region*) ;
 struct mlxsw_sp_acl_erp_table* FUNC_4 (struct mlxsw_sp_acl_atcam_region*,struct objagg_hints*) ;
 int FUNC_5 (struct mlxsw_sp_acl_erp_table*) ;

int FUNC_6(struct mlxsw_sp_acl_atcam_region *VAR_0,
     void *VAR_1)
{
 struct mlxsw_sp_acl_erp_table *VAR_2;
 struct objagg_hints *VAR_3 = VAR_1;
 int VAR_4;

 VAR_2 = FUNC_4(VAR_0, VAR_3);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);
 VAR_0->erp_table = VAR_2;


 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4)
  goto err_erp_master_mask_init;


 VAR_4 = FUNC_3(VAR_0);
 if (VAR_4)
  goto err_erp_region_param_init;

 return 0;

err_erp_region_param_init:
err_erp_master_mask_init:
 FUNC_5(VAR_2);
 return VAR_4;
}
