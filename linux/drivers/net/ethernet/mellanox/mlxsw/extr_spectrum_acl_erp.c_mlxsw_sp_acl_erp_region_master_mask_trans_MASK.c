
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_erp_table {int base_index; TYPE_1__* aregion; int num_max_atcam_erps; int erp_index_bitmap; struct mlxsw_sp_acl_erp_core* erp_core; } ;
struct mlxsw_sp_acl_erp_core {int dummy; } ;
struct mlxsw_sp_acl_erp {int index; } ;
struct TYPE_2__ {int type; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlxsw_sp_acl_erp_table*,struct mlxsw_sp_acl_erp*) ;
 int FUNC_2 (struct mlxsw_sp_acl_erp_table*) ;
 int FUNC_3 (struct mlxsw_sp_acl_erp*) ;
 int FUNC_4 (struct mlxsw_sp_acl_erp_core*,int ,int ,int ) ;
 struct mlxsw_sp_acl_erp* FUNC_5 (struct mlxsw_sp_acl_erp_table*) ;

__attribute__((used)) static void
FUNC_6(struct mlxsw_sp_acl_erp_table *VAR_0)
{
 struct mlxsw_sp_acl_erp_core *VAR_1 = VAR_0->erp_core;
 struct mlxsw_sp_acl_erp *VAR_2;

 FUNC_2(VAR_0);
 VAR_2 = FUNC_5(VAR_0);
 if (!VAR_2)
  return;
 FUNC_1(VAR_0, VAR_2);
 FUNC_3(VAR_2);
 FUNC_0(VAR_2->index, VAR_0->erp_index_bitmap);
 FUNC_4(VAR_1, VAR_0->num_max_atcam_erps,
        VAR_0->aregion->type,
        VAR_0->base_index);
}
