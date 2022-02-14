
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_acl_ruleset {int dummy; } ;
struct TYPE_4__ {int elusage; } ;
struct mlxsw_sp_acl_rule_info {TYPE_2__ values; } ;
struct mlxsw_sp_acl_block {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_3__ {int chain_index; } ;
struct flow_cls_offload {TYPE_1__ common; } ;
typedef int rulei ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_acl_ruleset*) ;
 int FUNC_1 (struct mlxsw_sp_acl_rule_info*,int ,int) ;
 struct mlxsw_sp_acl_ruleset* FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,int ,int ,int *) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,struct mlxsw_sp_acl_rule_info*,struct flow_cls_offload*) ;

int FUNC_4(struct mlxsw_sp *VAR_1,
     struct mlxsw_sp_acl_block *VAR_2,
     struct flow_cls_offload *VAR_3)
{
 struct mlxsw_sp_acl_ruleset *VAR_4;
 struct mlxsw_sp_acl_rule_info VAR_5;
 int VAR_6;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_6 = FUNC_3(VAR_1, VAR_2, &VAR_5, VAR_3);
 if (VAR_6)
  return VAR_6;
 VAR_4 = FUNC_2(VAR_1, VAR_2,
        VAR_3->common.chain_index,
        VAR_0,
        &VAR_5.values.elusage);


 return FUNC_0(VAR_4);
}
