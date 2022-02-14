
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_obj {int dummy; } ;
struct mlxsw_sp_acl_erp_mask {int dummy; } ;
struct mlxsw_sp_acl_erp_delta {int dummy; } ;


 struct mlxsw_sp_acl_erp_delta VAR_0 ;
 struct mlxsw_sp_acl_erp_delta* FUNC_0 (struct objagg_obj*) ;

const struct mlxsw_sp_acl_erp_delta *
FUNC_1(const struct mlxsw_sp_acl_erp_mask *VAR_1)
{
 struct objagg_obj *VAR_2 = (struct objagg_obj *) VAR_1;
 const struct mlxsw_sp_acl_erp_delta *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  VAR_3 = &VAR_0;
 return VAR_3;
}
