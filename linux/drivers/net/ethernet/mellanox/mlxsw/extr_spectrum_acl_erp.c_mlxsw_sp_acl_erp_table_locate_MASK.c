
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_sp_acl_erp_table {int base_index; struct mlxsw_sp_acl_erp_core* erp_core; } ;
struct mlxsw_sp_acl_erp_core {int num_erp_banks; } ;
struct mlxsw_sp_acl_erp {int index; } ;


 unsigned int FUNC_0 (struct mlxsw_sp_acl_erp_table const*) ;

__attribute__((used)) static void
FUNC_1(const struct mlxsw_sp_acl_erp_table *VAR_0,
         const struct mlxsw_sp_acl_erp *VAR_1,
         u8 *VAR_2, u8 *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_0);
 struct mlxsw_sp_acl_erp_core *VAR_5 = VAR_0->erp_core;
 unsigned int VAR_6;

 *VAR_2 = VAR_1->index % VAR_5->num_erp_banks;
 VAR_6 = VAR_1->index / VAR_5->num_erp_banks;
 *VAR_3 = VAR_0->base_index + VAR_6 * VAR_4;
}
