
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mlxsw_sp_acl_profile_ops* ops; } ;
struct mlxsw_sp_acl_ruleset {TYPE_1__ ht_key; } ;
struct mlxsw_sp_acl_rule_info {struct mlxsw_afa_block* act_block; } ;
struct mlxsw_sp_acl_rule {int rulei; int priv; struct mlxsw_sp_acl_ruleset* ruleset; } ;
struct mlxsw_sp_acl_profile_ops {int (* rule_action_replace ) (struct mlxsw_sp*,int ,int ) ;} ;
struct mlxsw_sp {int dummy; } ;
struct mlxsw_afa_block {int dummy; } ;


 struct mlxsw_sp_acl_rule_info* FUNC_0 (struct mlxsw_sp_acl_rule*) ;
 int FUNC_1 (struct mlxsw_sp*,int ,int ) ;

int FUNC_2(struct mlxsw_sp *VAR_0,
         struct mlxsw_sp_acl_rule *VAR_1,
         struct mlxsw_afa_block *VAR_2)
{
 struct mlxsw_sp_acl_ruleset *VAR_3 = VAR_1->ruleset;
 const struct mlxsw_sp_acl_profile_ops *VAR_4 = VAR_3->ht_key.ops;
 struct mlxsw_sp_acl_rule_info *VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 VAR_5->act_block = VAR_2;

 return VAR_4->rule_action_replace(VAR_0, VAR_1->priv, VAR_1->rulei);
}
