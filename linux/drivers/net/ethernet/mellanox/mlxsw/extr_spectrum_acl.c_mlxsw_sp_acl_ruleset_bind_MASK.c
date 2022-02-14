
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mlxsw_sp_acl_profile_ops* ops; } ;
struct mlxsw_sp_acl_ruleset {int priv; TYPE_1__ ht_key; } ;
struct mlxsw_sp_acl_profile_ops {int (* ruleset_bind ) (struct mlxsw_sp*,int ,int ,int ) ;} ;
struct mlxsw_sp_acl_block_binding {int ingress; int mlxsw_sp_port; } ;
struct mlxsw_sp_acl_block {struct mlxsw_sp_acl_ruleset* ruleset_zero; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_acl_block *VAR_1,
     struct mlxsw_sp_acl_block_binding *VAR_2)
{
 struct mlxsw_sp_acl_ruleset *VAR_3 = VAR_1->ruleset_zero;
 const struct mlxsw_sp_acl_profile_ops *VAR_4 = VAR_3->ht_key.ops;

 return VAR_4->ruleset_bind(VAR_0, VAR_3->priv,
     VAR_2->mlxsw_sp_port, VAR_2->ingress);
}
