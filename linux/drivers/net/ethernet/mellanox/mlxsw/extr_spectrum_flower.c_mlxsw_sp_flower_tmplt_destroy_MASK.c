
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_ruleset {int dummy; } ;
struct mlxsw_sp_acl_block {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {int chain_index; } ;
struct flow_cls_offload {TYPE_1__ common; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_acl_ruleset*) ;
 int VAR_0 ;
 struct mlxsw_sp_acl_ruleset* FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,int ,int ,int *) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*) ;

void FUNC_3(struct mlxsw_sp *VAR_1,
       struct mlxsw_sp_acl_block *VAR_2,
       struct flow_cls_offload *VAR_3)
{
 struct mlxsw_sp_acl_ruleset *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2,
        VAR_3->common.chain_index,
        VAR_0, ((void*)0));
 if (FUNC_0(VAR_4))
  return;

 FUNC_2(VAR_1, VAR_4);
 FUNC_2(VAR_1, VAR_4);
}
