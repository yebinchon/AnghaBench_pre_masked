
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mlxsw_sp_acl_profile_ops* ops; } ;
struct mlxsw_sp_acl_ruleset {TYPE_1__ ht_key; } ;
struct mlxsw_sp_acl_rule {int last_used; int priv; struct mlxsw_sp_acl_ruleset* ruleset; } ;
struct mlxsw_sp_acl_profile_ops {int (* rule_activity_get ) (struct mlxsw_sp*,int ,int*) ;} ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp *VAR_1,
          struct mlxsw_sp_acl_rule *VAR_2)
{
 struct mlxsw_sp_acl_ruleset *VAR_3 = VAR_2->ruleset;
 const struct mlxsw_sp_acl_profile_ops *VAR_4 = VAR_3->ht_key.ops;
 bool VAR_5;
 int VAR_6;

 VAR_6 = VAR_4->rule_activity_get(VAR_1, VAR_2->priv, &VAR_5);
 if (VAR_6)
  return VAR_6;
 if (VAR_5)
  VAR_2->last_used = VAR_0;
 return 0;
}
