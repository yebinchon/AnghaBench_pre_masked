
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct objagg_obj {int dummy; } ;
struct mlxsw_sp_acl_erp_mask {int dummy; } ;
struct mlxsw_sp_acl_erp {TYPE_2__* erp_table; } ;
struct mlxsw_sp_acl_atcam_region {int dummy; } ;
struct mlxsw_sp_acl_atcam_entry {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_4__ {TYPE_1__* erp_core; } ;
struct TYPE_3__ {int bf; } ;


 int FUNC_0 (struct mlxsw_sp*,int ,struct mlxsw_sp_acl_atcam_region*,unsigned int,struct mlxsw_sp_acl_atcam_entry*) ;
 unsigned int FUNC_1 (struct mlxsw_sp_acl_erp const*) ;
 int FUNC_2 (TYPE_2__*) ;
 struct mlxsw_sp_acl_erp* FUNC_3 (struct objagg_obj*) ;

void FUNC_4(struct mlxsw_sp *VAR_0,
    struct mlxsw_sp_acl_atcam_region *VAR_1,
    struct mlxsw_sp_acl_erp_mask *VAR_2,
    struct mlxsw_sp_acl_atcam_entry *VAR_3)
{
 struct objagg_obj *VAR_4 = (struct objagg_obj *) VAR_2;
 const struct mlxsw_sp_acl_erp *VAR_5 = FUNC_3(VAR_4);
 unsigned int VAR_6;

 if (!FUNC_2(VAR_5->erp_table))
  return;

 VAR_6 = FUNC_1(VAR_5);
 FUNC_0(VAR_0,
      VAR_5->erp_table->erp_core->bf,
      VAR_1, VAR_6, VAR_3);
}
