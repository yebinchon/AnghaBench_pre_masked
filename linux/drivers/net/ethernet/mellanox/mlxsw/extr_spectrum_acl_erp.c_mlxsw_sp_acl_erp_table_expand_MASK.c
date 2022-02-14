
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_erp_table {unsigned int num_max_atcam_erps; unsigned long base_index; scalar_t__ num_ctcam_erps; unsigned int num_atcam_erps; TYPE_1__* aregion; struct mlxsw_sp_acl_erp_core* erp_core; } ;
struct mlxsw_sp_acl_erp_core {unsigned int num_erp_banks; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp_acl_erp_core*,unsigned int,int ,unsigned long*) ;
 int FUNC_1 (struct mlxsw_sp_acl_erp_table*,int) ;
 int FUNC_2 (struct mlxsw_sp_acl_erp_core*,unsigned int,int ,unsigned long) ;
 int FUNC_3 (struct mlxsw_sp_acl_erp_table*) ;

__attribute__((used)) static int
FUNC_4(struct mlxsw_sp_acl_erp_table *VAR_2)
{
 unsigned int VAR_3, VAR_4 = VAR_2->num_max_atcam_erps;
 struct mlxsw_sp_acl_erp_core *VAR_5 = VAR_2->erp_core;
 unsigned long VAR_6 = VAR_2->base_index;
 bool VAR_7 = VAR_2->num_ctcam_erps > 0;
 int VAR_8;

 if (VAR_2->num_atcam_erps < VAR_2->num_max_atcam_erps)
  return 0;

 if (VAR_2->num_max_atcam_erps == VAR_1)
  return -VAR_0;

 VAR_3 = VAR_4 + VAR_5->num_erp_banks;
 VAR_8 = FUNC_0(VAR_5, VAR_3,
        VAR_2->aregion->type,
        &VAR_2->base_index);
 if (VAR_8)
  return VAR_8;
 VAR_2->num_max_atcam_erps = VAR_3;

 VAR_8 = FUNC_3(VAR_2);
 if (VAR_8)
  goto err_table_relocate;

 VAR_8 = FUNC_1(VAR_2, VAR_7);
 if (VAR_8)
  goto err_table_enable;

 FUNC_2(VAR_5, VAR_4,
        VAR_2->aregion->type, VAR_6);

 return 0;

err_table_enable:
err_table_relocate:
 VAR_2->num_max_atcam_erps = VAR_4;
 FUNC_2(VAR_5, VAR_3,
        VAR_2->aregion->type,
        VAR_2->base_index);
 VAR_2->base_index = VAR_6;
 return VAR_8;
}
