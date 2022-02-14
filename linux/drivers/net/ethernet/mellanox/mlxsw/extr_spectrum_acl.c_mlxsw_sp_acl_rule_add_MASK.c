
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chain_index; struct mlxsw_sp_acl_block* block; struct mlxsw_sp_acl_profile_ops* ops; } ;
struct mlxsw_sp_acl_ruleset {int rule_ht; TYPE_1__ ht_key; int priv; } ;
struct mlxsw_sp_acl_rule {int priv; int ht_node; TYPE_3__* rulei; int list; struct mlxsw_sp_acl_ruleset* ruleset; } ;
struct mlxsw_sp_acl_profile_ops {int (* rule_add ) (struct mlxsw_sp*,int ,int ,TYPE_3__*) ;int (* rule_del ) (struct mlxsw_sp*,int ) ;} ;
struct mlxsw_sp_acl_block {int egress_blocker_rule_count; int rule_count; } ;
struct mlxsw_sp {TYPE_2__* acl; } ;
struct TYPE_6__ {scalar_t__ egress_bind_blocker; } ;
struct TYPE_5__ {int rules; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*,struct mlxsw_sp_acl_block*) ;
 scalar_t__ FUNC_2 (struct mlxsw_sp_acl_ruleset*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct mlxsw_sp*,int ,int ,TYPE_3__*) ;
 int FUNC_6 (struct mlxsw_sp*,int ) ;

int FUNC_7(struct mlxsw_sp *VAR_1,
     struct mlxsw_sp_acl_rule *VAR_2)
{
 struct mlxsw_sp_acl_ruleset *VAR_3 = VAR_2->ruleset;
 const struct mlxsw_sp_acl_profile_ops *VAR_4 = VAR_3->ht_key.ops;
 struct mlxsw_sp_acl_block *VAR_5 = VAR_3->ht_key.block;
 int VAR_6;

 VAR_6 = VAR_4->rule_add(VAR_1, VAR_3->priv, VAR_2->priv, VAR_2->rulei);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(&VAR_3->rule_ht, &VAR_2->ht_node,
         VAR_0);
 if (VAR_6)
  goto err_rhashtable_insert;

 if (!VAR_3->ht_key.chain_index &&
     FUNC_2(VAR_3)) {




  VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_5);
  if (VAR_6)
   goto err_ruleset_block_bind;
 }

 FUNC_0(&VAR_2->list, &VAR_1->acl->rules);
 VAR_5->rule_count++;
 VAR_5->egress_blocker_rule_count += VAR_2->rulei->egress_bind_blocker;
 return 0;

err_ruleset_block_bind:
 FUNC_4(&VAR_3->rule_ht, &VAR_2->ht_node,
          VAR_0);
err_rhashtable_insert:
 VAR_4->rule_del(VAR_1, VAR_2->priv);
 return VAR_6;
}
