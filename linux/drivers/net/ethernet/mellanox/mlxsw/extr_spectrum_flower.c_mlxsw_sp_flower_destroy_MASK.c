
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_ruleset {int dummy; } ;
struct mlxsw_sp_acl_rule {int dummy; } ;
struct mlxsw_sp_acl_block {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {int chain_index; } ;
struct flow_cls_offload {int cookie; TYPE_1__ common; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_acl_ruleset*) ;
 int VAR_0 ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_acl_rule*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_rule*) ;
 struct mlxsw_sp_acl_rule* FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*,int ) ;
 struct mlxsw_sp_acl_ruleset* FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,int ,int ,int *) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*) ;

void FUNC_6(struct mlxsw_sp *VAR_1,
        struct mlxsw_sp_acl_block *VAR_2,
        struct flow_cls_offload *VAR_3)
{
 struct mlxsw_sp_acl_ruleset *VAR_4;
 struct mlxsw_sp_acl_rule *VAR_5;

 VAR_4 = FUNC_4(VAR_1, VAR_2,
        VAR_3->common.chain_index,
        VAR_0, ((void*)0));
 if (FUNC_0(VAR_4))
  return;

 VAR_5 = FUNC_3(VAR_1, VAR_4, VAR_3->cookie);
 if (VAR_5) {
  FUNC_1(VAR_1, VAR_5);
  FUNC_2(VAR_1, VAR_5);
 }

 FUNC_5(VAR_1, VAR_4);
}
