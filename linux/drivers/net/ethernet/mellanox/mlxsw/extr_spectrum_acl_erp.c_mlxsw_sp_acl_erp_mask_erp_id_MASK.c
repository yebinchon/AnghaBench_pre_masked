
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct objagg_obj {int dummy; } ;
struct mlxsw_sp_acl_erp_mask {int dummy; } ;
struct mlxsw_sp_acl_erp {int id; } ;


 struct mlxsw_sp_acl_erp* FUNC_0 (struct objagg_obj*) ;

u8 FUNC_1(const struct mlxsw_sp_acl_erp_mask *VAR_0)
{
 struct objagg_obj *VAR_1 = (struct objagg_obj *) VAR_0;
 const struct mlxsw_sp_acl_erp *VAR_2 = FUNC_0(VAR_1);

 return VAR_2->id;
}
