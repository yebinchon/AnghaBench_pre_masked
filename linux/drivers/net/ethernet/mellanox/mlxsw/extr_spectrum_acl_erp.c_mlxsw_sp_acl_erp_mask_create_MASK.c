
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_table {int * ops; } ;
struct mlxsw_sp_acl_erp_key {scalar_t__ ctcam; } ;
struct mlxsw_sp_acl_erp {int index; } ;


 struct mlxsw_sp_acl_erp* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp_acl_erp*) ;
 int VAR_0 ;
 struct mlxsw_sp_acl_erp* FUNC_2 (struct mlxsw_sp_acl_erp_table*,struct mlxsw_sp_acl_erp_key*) ;
 struct mlxsw_sp_acl_erp* FUNC_3 (struct mlxsw_sp_acl_erp_table*,struct mlxsw_sp_acl_erp_key*) ;
 int FUNC_4 (struct mlxsw_sp_acl_erp*) ;
 int FUNC_5 (struct mlxsw_sp_acl_erp_table*,int *) ;
 int FUNC_6 (struct mlxsw_sp_acl_erp_table*,int ) ;
 int FUNC_7 (struct mlxsw_sp_acl_erp_table*,struct mlxsw_sp_acl_erp*) ;
 int FUNC_8 (struct mlxsw_sp_acl_erp_table*,struct mlxsw_sp_acl_erp*) ;
 int FUNC_9 (struct mlxsw_sp_acl_erp*) ;
 int FUNC_10 (struct mlxsw_sp_acl_erp_table*) ;

__attribute__((used)) static struct mlxsw_sp_acl_erp *
FUNC_11(struct mlxsw_sp_acl_erp_table *VAR_1,
        struct mlxsw_sp_acl_erp_key *VAR_2)
{
 struct mlxsw_sp_acl_erp *VAR_3;
 int VAR_4;

 if (VAR_2->ctcam)
  return FUNC_2(VAR_1, VAR_2);


 VAR_4 = FUNC_10(VAR_1);
 if (VAR_4)
  return FUNC_0(VAR_4);

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (FUNC_1(VAR_3))
  return VAR_3;

 VAR_4 = FUNC_5(VAR_1, &VAR_3->index);
 if (VAR_4)
  goto err_erp_index_get;

 VAR_4 = FUNC_8(VAR_1, VAR_3);
 if (VAR_4)
  goto err_table_erp_add;

 VAR_4 = FUNC_7(VAR_1, VAR_3);
 if (VAR_4)
  goto err_region_erp_add;

 VAR_1->ops = &VAR_0;

 return VAR_3;

err_region_erp_add:
 FUNC_9(VAR_3);
err_table_erp_add:
 FUNC_6(VAR_1, VAR_3->index);
err_erp_index_get:
 FUNC_4(VAR_3);
 return FUNC_0(VAR_4);
}
