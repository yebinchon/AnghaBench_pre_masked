
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_rule_info {int act_block; scalar_t__ action_created; } ;


 int FUNC_0 (struct mlxsw_sp_acl_rule_info*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct mlxsw_sp_acl_rule_info *VAR_0)
{
 if (VAR_0->action_created)
  FUNC_1(VAR_0->act_block);
 FUNC_0(VAR_0);
}
