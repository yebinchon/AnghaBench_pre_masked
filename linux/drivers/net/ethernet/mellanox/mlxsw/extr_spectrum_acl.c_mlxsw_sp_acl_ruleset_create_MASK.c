
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct mlxsw_sp_acl_profile_ops const* ops; int chain_index; struct mlxsw_sp_acl_block* block; } ;
struct mlxsw_sp_acl_ruleset {int ref_count; int rule_ht; int priv; int ht_node; TYPE_1__ ht_key; } ;
struct mlxsw_sp_acl_profile_ops {int ruleset_priv_size; int (* ruleset_add ) (struct mlxsw_sp*,int *,int ,struct mlxsw_afk_element_usage*) ;int (* ruleset_del ) (struct mlxsw_sp*,int ) ;} ;
struct mlxsw_sp_acl_block {int dummy; } ;
struct mlxsw_sp_acl {int ruleset_ht; int tcam; } ;
struct mlxsw_sp {struct mlxsw_sp_acl* acl; } ;
struct mlxsw_afk_element_usage {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_sp_acl_ruleset* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mlxsw_sp_acl_ruleset*) ;
 struct mlxsw_sp_acl_ruleset* FUNC_2 (size_t,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (struct mlxsw_sp*,int *,int ,struct mlxsw_afk_element_usage*) ;
 int FUNC_7 (struct mlxsw_sp*,int ) ;

__attribute__((used)) static struct mlxsw_sp_acl_ruleset *
FUNC_8(struct mlxsw_sp *VAR_4,
       struct mlxsw_sp_acl_block *VAR_5, u32 VAR_6,
       const struct mlxsw_sp_acl_profile_ops *VAR_7,
       struct mlxsw_afk_element_usage *VAR_8)
{
 struct mlxsw_sp_acl *VAR_9 = VAR_4->acl;
 struct mlxsw_sp_acl_ruleset *VAR_10;
 size_t VAR_11;
 int VAR_12;

 VAR_11 = sizeof(*VAR_10) + VAR_7->ruleset_priv_size;
 VAR_10 = FUNC_2(VAR_11, VAR_1);
 if (!VAR_10)
  return FUNC_0(-VAR_0);
 VAR_10->ref_count = 1;
 VAR_10->ht_key.block = VAR_5;
 VAR_10->ht_key.chain_index = VAR_6;
 VAR_10->ht_key.ops = VAR_7;

 VAR_12 = FUNC_4(&VAR_10->rule_ht, &VAR_2);
 if (VAR_12)
  goto err_rhashtable_init;

 VAR_12 = VAR_7->ruleset_add(VAR_4, &VAR_9->tcam, VAR_10->priv,
          VAR_8);
 if (VAR_12)
  goto err_ops_ruleset_add;

 VAR_12 = FUNC_5(&VAR_9->ruleset_ht, &VAR_10->ht_node,
         VAR_3);
 if (VAR_12)
  goto err_ht_insert;

 return VAR_10;

err_ht_insert:
 VAR_7->ruleset_del(VAR_4, VAR_10->priv);
err_ops_ruleset_add:
 FUNC_3(&VAR_10->rule_ht);
err_rhashtable_init:
 FUNC_1(VAR_10);
 return FUNC_0(VAR_12);
}
