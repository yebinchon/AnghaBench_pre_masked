
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_acl_ruleset_ht_key {struct mlxsw_sp_acl_profile_ops const* ops; int chain_index; struct mlxsw_sp_acl_block* block; } ;
struct mlxsw_sp_acl_ruleset {int dummy; } ;
struct mlxsw_sp_acl_profile_ops {int dummy; } ;
struct mlxsw_sp_acl_block {int dummy; } ;
struct mlxsw_sp_acl {int ruleset_ht; } ;
typedef int ht_key ;


 int FUNC_0 (struct mlxsw_sp_acl_ruleset_ht_key*,int ,int) ;
 int VAR_0 ;
 struct mlxsw_sp_acl_ruleset* FUNC_1 (int *,struct mlxsw_sp_acl_ruleset_ht_key*,int ) ;

__attribute__((used)) static struct mlxsw_sp_acl_ruleset *
FUNC_2(struct mlxsw_sp_acl *VAR_1,
         struct mlxsw_sp_acl_block *VAR_2, u32 VAR_3,
         const struct mlxsw_sp_acl_profile_ops *VAR_4)
{
 struct mlxsw_sp_acl_ruleset_ht_key VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.block = VAR_2;
 VAR_5.chain_index = VAR_3;
 VAR_5.ops = VAR_4;
 return FUNC_1(&VAR_1->ruleset_ht, &VAR_5,
          VAR_0);
}
