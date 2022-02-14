
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_ruleset {int dummy; } ;
struct mlxsw_sp_acl_rule_info {int dummy; } ;
typedef struct mlxsw_sp_acl_ruleset mlxsw_sp_acl_rule ;
struct mlxsw_sp_acl_block {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {int extack; int chain_index; } ;
struct flow_cls_offload {TYPE_1__ common; int cookie; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_acl_ruleset*) ;
 int VAR_0 ;
 int FUNC_1 (struct mlxsw_sp_acl_ruleset*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*) ;
 struct mlxsw_sp_acl_ruleset* FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*,int ,int *,int ) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*) ;
 struct mlxsw_sp_acl_rule_info* FUNC_5 (struct mlxsw_sp_acl_ruleset*) ;
 int FUNC_6 (struct mlxsw_sp_acl_rule_info*) ;
 struct mlxsw_sp_acl_ruleset* FUNC_7 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,int ,int ,int *) ;
 int FUNC_8 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*) ;
 int FUNC_9 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,struct mlxsw_sp_acl_rule_info*,struct flow_cls_offload*) ;

int FUNC_10(struct mlxsw_sp *VAR_1,
       struct mlxsw_sp_acl_block *VAR_2,
       struct flow_cls_offload *VAR_3)
{
 struct mlxsw_sp_acl_rule_info *VAR_4;
 struct mlxsw_sp_acl_ruleset *VAR_5;
 struct mlxsw_sp_acl_rule *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_7(VAR_1, VAR_2,
        VAR_3->common.chain_index,
        VAR_0, ((void*)0));
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = FUNC_3(VAR_1, VAR_5, VAR_3->cookie, ((void*)0),
     VAR_3->common.extack);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  goto err_rule_create;
 }

 VAR_4 = FUNC_5(VAR_6);
 VAR_7 = FUNC_9(VAR_1, VAR_2, VAR_4, VAR_3);
 if (VAR_7)
  goto err_flower_parse;

 VAR_7 = FUNC_6(VAR_4);
 if (VAR_7)
  goto err_rulei_commit;

 VAR_7 = FUNC_2(VAR_1, VAR_6);
 if (VAR_7)
  goto err_rule_add;

 FUNC_8(VAR_1, VAR_5);
 return 0;

err_rule_add:
err_rulei_commit:
err_flower_parse:
 FUNC_4(VAR_1, VAR_6);
err_rule_create:
 FUNC_8(VAR_1, VAR_5);
 return VAR_7;
}
