
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_table {int dummy; } ;
struct mlxsw_sp_acl_erp_delta {int key; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_erp_table* erp_table; } ;


 int FUNC_0 (struct mlxsw_sp_acl_erp_delta*) ;
 int FUNC_1 (struct mlxsw_sp_acl_erp_table*) ;
 int FUNC_2 (struct mlxsw_sp_acl_erp_table*,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, void *VAR_1)
{
 struct mlxsw_sp_acl_erp_delta *VAR_2 = VAR_1;
 struct mlxsw_sp_acl_atcam_region *VAR_3 = VAR_0;
 struct mlxsw_sp_acl_erp_table *VAR_4 = VAR_3->erp_table;

 FUNC_2(VAR_4, &VAR_2->key);
 FUNC_1(VAR_4);
 FUNC_0(VAR_2);
}
