
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlxsw_sp_acl_ruleset {int dummy; } ;
struct mlxsw_sp_acl_rule {int dummy; } ;
struct mlxsw_sp_acl_block {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {int chain_index; } ;
struct flow_cls_offload {int stats; int cookie; TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_acl_ruleset*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_acl_rule*,int *,int *,int *) ;
 struct mlxsw_sp_acl_rule* FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*,int ) ;
 struct mlxsw_sp_acl_ruleset* FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,int ,int ,int *) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*) ;

int FUNC_7(struct mlxsw_sp *VAR_2,
     struct mlxsw_sp_acl_block *VAR_3,
     struct flow_cls_offload *VAR_4)
{
 struct mlxsw_sp_acl_ruleset *VAR_5;
 struct mlxsw_sp_acl_rule *VAR_6;
 u64 VAR_7;
 u64 VAR_8;
 u64 VAR_9;
 int VAR_10;

 VAR_5 = FUNC_5(VAR_2, VAR_3,
        VAR_4->common.chain_index,
        VAR_1, ((void*)0));
 if (FUNC_1(FUNC_0(VAR_5)))
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_2, VAR_5, VAR_4->cookie);
 if (!VAR_6)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_2, VAR_6, &VAR_7, &VAR_9,
       &VAR_8);
 if (VAR_10)
  goto err_rule_get_stats;

 FUNC_2(&VAR_4->stats, VAR_9, VAR_7, VAR_8);

 FUNC_6(VAR_2, VAR_5);
 return 0;

err_rule_get_stats:
 FUNC_6(VAR_2, VAR_5);
 return VAR_10;
}
