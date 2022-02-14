
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_erp_table {TYPE_1__* ops; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_erp_table* erp_table; } ;
struct TYPE_2__ {int (* erp_destroy ) (struct mlxsw_sp_acl_erp_table*,void*) ;} ;


 int FUNC_0 (struct mlxsw_sp_acl_erp_table*,void*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1)
{
 struct mlxsw_sp_acl_atcam_region *VAR_2 = VAR_0;
 struct mlxsw_sp_acl_erp_table *VAR_3 = VAR_2->erp_table;

 VAR_3->ops->erp_destroy(VAR_3, VAR_1);
}
