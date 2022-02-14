
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_rule_info {int action_created; struct mlxsw_afa_block* act_block; } ;
struct mlxsw_sp_acl {TYPE_1__* mlxsw_sp; } ;
struct mlxsw_afa_block {int dummy; } ;
struct TYPE_2__ {int afa; } ;


 struct mlxsw_sp_acl_rule_info* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mlxsw_afa_block*) ;
 int FUNC_2 (struct mlxsw_afa_block*) ;
 int FUNC_3 (struct mlxsw_sp_acl_rule_info*) ;
 struct mlxsw_sp_acl_rule_info* FUNC_4 (int,int ) ;
 struct mlxsw_afa_block* FUNC_5 (int ) ;

struct mlxsw_sp_acl_rule_info *
FUNC_6(struct mlxsw_sp_acl *VAR_1,
     struct mlxsw_afa_block *VAR_2)
{
 struct mlxsw_sp_acl_rule_info *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 if (VAR_2) {
  VAR_3->act_block = VAR_2;
  return VAR_3;
 }

 VAR_3->act_block = FUNC_5(VAR_1->mlxsw_sp->afa);
 if (FUNC_1(VAR_3->act_block)) {
  VAR_4 = FUNC_2(VAR_3->act_block);
  goto err_afa_block_create;
 }
 VAR_3->action_created = 1;
 return VAR_3;

err_afa_block_create:
 FUNC_3(VAR_3);
 return FUNC_0(VAR_4);
}
