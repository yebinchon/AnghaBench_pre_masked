
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_table {struct mlxsw_sp_acl_erp_core* erp_core; struct mlxsw_sp_acl_atcam_region* aregion; } ;
struct mlxsw_sp_acl_erp_core {unsigned int* erpt_entries_size; } ;
struct mlxsw_sp_acl_atcam_region {size_t type; } ;



__attribute__((used)) static unsigned int
FUNC_0(const struct mlxsw_sp_acl_erp_table *VAR_0)
{
 struct mlxsw_sp_acl_atcam_region *VAR_1 = VAR_0->aregion;
 struct mlxsw_sp_acl_erp_core *VAR_2 = VAR_0->erp_core;

 return VAR_2->erpt_entries_size[VAR_1->type];
}
