
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_obj {int dummy; } ;
struct mlxsw_sp_acl_erp_table {int objagg_lock; int objagg; } ;
struct mlxsw_sp_acl_erp_mask {int dummy; } ;
struct mlxsw_sp_acl_erp_key {int ctcam; int mask; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_erp_table* erp_table; } ;


 struct mlxsw_sp_acl_erp_mask* FUNC_0 (struct objagg_obj*) ;
 scalar_t__ FUNC_1 (struct objagg_obj*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct objagg_obj* FUNC_5 (int ,struct mlxsw_sp_acl_erp_key*) ;

struct mlxsw_sp_acl_erp_mask *
FUNC_6(struct mlxsw_sp_acl_atcam_region *VAR_1,
     const char *VAR_2, bool VAR_3)
{
 struct mlxsw_sp_acl_erp_table *VAR_4 = VAR_1->erp_table;
 struct mlxsw_sp_acl_erp_key VAR_5;
 struct objagg_obj *VAR_6;

 FUNC_2(VAR_5.mask, VAR_2, VAR_0);
 VAR_5.ctcam = VAR_3;
 FUNC_3(&VAR_4->objagg_lock);
 VAR_6 = FUNC_5(VAR_4->objagg, &VAR_5);
 FUNC_4(&VAR_4->objagg_lock);
 if (FUNC_1(VAR_6))
  return FUNC_0(VAR_6);
 return (struct mlxsw_sp_acl_erp_mask *) VAR_6;
}
