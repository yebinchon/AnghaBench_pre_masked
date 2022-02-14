
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct mlxsw_sp_acl_block* block; int chain_index; struct mlxsw_sp_acl_profile_ops* ops; } ;
struct mlxsw_sp_acl_ruleset {int rule_ht; TYPE_2__ ht_key; } ;
struct mlxsw_sp_acl_rule {int priv; int ht_node; int list; TYPE_1__* rulei; struct mlxsw_sp_acl_ruleset* ruleset; } ;
struct mlxsw_sp_acl_profile_ops {int (* rule_del ) (struct mlxsw_sp*,int ) ;} ;
struct mlxsw_sp_acl_block {int rule_count; int egress_blocker_rule_count; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_3__ {scalar_t__ egress_bind_blocker; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*,struct mlxsw_sp_acl_block*) ;
 scalar_t__ FUNC_2 (struct mlxsw_sp_acl_ruleset*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct mlxsw_sp*,int ) ;

void FUNC_5(struct mlxsw_sp *VAR_1,
      struct mlxsw_sp_acl_rule *VAR_2)
{
 struct mlxsw_sp_acl_ruleset *VAR_3 = VAR_2->ruleset;
 const struct mlxsw_sp_acl_profile_ops *VAR_4 = VAR_3->ht_key.ops;
 struct mlxsw_sp_acl_block *VAR_5 = VAR_3->ht_key.block;

 VAR_5->egress_blocker_rule_count -= VAR_2->rulei->egress_bind_blocker;
 VAR_3->ht_key.block->rule_count--;
 FUNC_0(&VAR_2->list);
 if (!VAR_3->ht_key.chain_index &&
     FUNC_2(VAR_3))
  FUNC_1(VAR_1, VAR_3,
        VAR_3->ht_key.block);
 FUNC_3(&VAR_3->rule_ht, &VAR_2->ht_node,
          VAR_0);
 VAR_4->rule_del(VAR_1, VAR_2->priv);
}
