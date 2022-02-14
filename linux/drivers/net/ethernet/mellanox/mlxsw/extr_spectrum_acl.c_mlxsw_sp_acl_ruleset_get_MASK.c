
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
struct mlxsw_afk_element_usage {int dummy; } ;
typedef enum mlxsw_sp_acl_profile { ____Placeholder_mlxsw_sp_acl_profile } mlxsw_sp_acl_profile ;


 int VAR_0 ;
 struct mlxsw_sp_acl_ruleset* FUNC_0 (int ) ;
 struct mlxsw_sp_acl_ruleset* FUNC_1 (struct mlxsw_sp_acl*,struct mlxsw_sp_acl_block*,int ,struct mlxsw_sp_acl_profile_ops const*) ;
 struct mlxsw_sp_acl_ruleset* FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,int ,struct mlxsw_sp_acl_profile_ops const*,struct mlxsw_afk_element_usage*) ;
 int FUNC_3 (struct mlxsw_sp_acl_ruleset*) ;
 struct mlxsw_sp_acl_profile_ops* FUNC_4 (struct mlxsw_sp*,int) ;

struct mlxsw_sp_acl_ruleset *
FUNC_5(struct mlxsw_sp *VAR_1,
    struct mlxsw_sp_acl_block *VAR_2, u32 VAR_3,
    enum mlxsw_sp_acl_profile VAR_4,
    struct mlxsw_afk_element_usage *VAR_5)
{
 const struct mlxsw_sp_acl_profile_ops *VAR_6;
 struct mlxsw_sp_acl *VAR_7 = VAR_1->acl;
 struct mlxsw_sp_acl_ruleset *VAR_8;

 VAR_6 = FUNC_4(VAR_1, VAR_4);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_1(VAR_7, VAR_2, VAR_3, VAR_6);
 if (VAR_8) {
  FUNC_3(VAR_8);
  return VAR_8;
 }
 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_6,
        VAR_5);
}
