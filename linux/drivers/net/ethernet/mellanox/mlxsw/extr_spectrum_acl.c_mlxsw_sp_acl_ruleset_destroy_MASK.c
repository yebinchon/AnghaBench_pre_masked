
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mlxsw_sp_acl_profile_ops* ops; } ;
struct mlxsw_sp_acl_ruleset {int rule_ht; int priv; int ht_node; TYPE_1__ ht_key; } ;
struct mlxsw_sp_acl_profile_ops {int (* ruleset_del ) (struct mlxsw_sp*,int ) ;} ;
struct mlxsw_sp_acl {int ruleset_ht; } ;
struct mlxsw_sp {struct mlxsw_sp_acl* acl; } ;


 int FUNC_0 (struct mlxsw_sp_acl_ruleset*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct mlxsw_sp*,int ) ;

__attribute__((used)) static void FUNC_4(struct mlxsw_sp *VAR_1,
      struct mlxsw_sp_acl_ruleset *VAR_2)
{
 const struct mlxsw_sp_acl_profile_ops *VAR_3 = VAR_2->ht_key.ops;
 struct mlxsw_sp_acl *VAR_4 = VAR_1->acl;

 FUNC_2(&VAR_4->ruleset_ht, &VAR_2->ht_node,
          VAR_0);
 VAR_3->ruleset_del(VAR_1, VAR_2->priv);
 FUNC_1(&VAR_2->rule_ht);
 FUNC_0(VAR_2);
}
