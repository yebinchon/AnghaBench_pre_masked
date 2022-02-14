
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_obj {int dummy; } ;
struct mlxsw_sp_acl_erp_table {int objagg_lock; int objagg; } ;
struct mlxsw_sp_acl_erp_mask {int dummy; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_erp_table* erp_table; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct objagg_obj*) ;

void FUNC_3(struct mlxsw_sp_acl_atcam_region *VAR_0,
          struct mlxsw_sp_acl_erp_mask *VAR_1)
{
 struct objagg_obj *VAR_2 = (struct objagg_obj *) VAR_1;
 struct mlxsw_sp_acl_erp_table *VAR_3 = VAR_0->erp_table;

 FUNC_0(&VAR_3->objagg_lock);
 FUNC_2(VAR_3->objagg, VAR_2);
 FUNC_1(&VAR_3->objagg_lock);
}
