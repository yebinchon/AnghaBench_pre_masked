
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_acl_ruleset {int dummy; } ;
struct mlxsw_sp_acl_profile_ops {int dummy; } ;
struct mlxsw_sp_acl_block {int dummy; } ;
struct mlxsw_sp_acl {int dummy; } ;
struct mlxsw_sp {struct mlxsw_sp_acl* acl; } ;
typedef enum mlxsw_sp_acl_profile { ____Placeholder_mlxsw_sp_acl_profile } mlxsw_sp_acl_profile ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_sp_acl_ruleset* FUNC_0 (int ) ;
 struct mlxsw_sp_acl_ruleset* FUNC_1 (struct mlxsw_sp_acl*,struct mlxsw_sp_acl_block*,int ,struct mlxsw_sp_acl_profile_ops const*) ;
 struct mlxsw_sp_acl_profile_ops* FUNC_2 (struct mlxsw_sp*,int) ;

struct mlxsw_sp_acl_ruleset *
FUNC_3(struct mlxsw_sp *VAR_2,
       struct mlxsw_sp_acl_block *VAR_3, u32 VAR_4,
       enum mlxsw_sp_acl_profile VAR_5)
{
 const struct mlxsw_sp_acl_profile_ops *VAR_6;
 struct mlxsw_sp_acl *VAR_7 = VAR_2->acl;
 struct mlxsw_sp_acl_ruleset *VAR_8;

 VAR_6 = FUNC_2(VAR_2, VAR_5);
 if (!VAR_6)
  return FUNC_0(-VAR_0);
 VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_4, VAR_6);
 if (!VAR_8)
  return FUNC_0(-VAR_1);
 return VAR_8;
}
