
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_erp_table {int base_index; TYPE_1__* aregion; int num_max_atcam_erps; int erp_index_bitmap; struct mlxsw_sp_acl_erp_core* erp_core; } ;
struct mlxsw_sp_acl_erp_core {int num_erp_banks; } ;
struct mlxsw_sp_acl_erp {scalar_t__ index; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct mlxsw_sp_acl_erp_table*,struct mlxsw_sp_acl_erp*) ;
 int FUNC_3 (struct mlxsw_sp_acl_erp_table*,struct mlxsw_sp_acl_erp*) ;
 int FUNC_4 (struct mlxsw_sp_acl_erp_core*,int ,int ,int *) ;
 int FUNC_5 (struct mlxsw_sp_acl_erp_table*,int) ;
 int FUNC_6 (struct mlxsw_sp_acl_erp_table*,struct mlxsw_sp_acl_erp*) ;
 int FUNC_7 (struct mlxsw_sp_acl_erp*) ;
 int FUNC_8 (struct mlxsw_sp_acl_erp_core*,int ,int ,int ) ;
 struct mlxsw_sp_acl_erp* FUNC_9 (struct mlxsw_sp_acl_erp_table*) ;

__attribute__((used)) static int
FUNC_10(struct mlxsw_sp_acl_erp_table *VAR_1)
{
 struct mlxsw_sp_acl_erp_core *VAR_2 = VAR_1->erp_core;
 struct mlxsw_sp_acl_erp *VAR_3;
 int VAR_4;


 VAR_4 = FUNC_4(VAR_2, VAR_2->num_erp_banks,
        VAR_1->aregion->type,
        &VAR_1->base_index);
 if (VAR_4)
  return VAR_4;
 VAR_1->num_max_atcam_erps = VAR_2->num_erp_banks;




 VAR_3 = FUNC_9(VAR_1);
 if (!VAR_3) {
  VAR_4 = -VAR_0;
  goto err_table_master_rp;
 }




 VAR_3->index = 0;
 FUNC_1(VAR_3->index, VAR_1->erp_index_bitmap);

 VAR_4 = FUNC_6(VAR_1, VAR_3);
 if (VAR_4)
  goto err_table_master_rp_add;





 VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (VAR_4)
  goto err_table_bf_add;

 VAR_4 = FUNC_5(VAR_1, 0);
 if (VAR_4)
  goto err_table_enable;

 return 0;

err_table_enable:
 FUNC_3(VAR_1, VAR_3);
err_table_bf_add:
 FUNC_7(VAR_3);
err_table_master_rp_add:
 FUNC_0(VAR_3->index, VAR_1->erp_index_bitmap);
err_table_master_rp:
 FUNC_8(VAR_2, VAR_1->num_max_atcam_erps,
        VAR_1->aregion->type,
        VAR_1->base_index);
 return VAR_4;
}
