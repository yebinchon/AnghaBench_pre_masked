
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct mlxsw_sp_acl_profile_ops* ops; } ;
struct mlxsw_sp_acl_ruleset {int priv; TYPE_1__ ht_key; } ;
struct mlxsw_sp_acl_profile_ops {int (* ruleset_group_id ) (int ) ;} ;


 int FUNC_0 (int ) ;

u16 FUNC_1(struct mlxsw_sp_acl_ruleset *VAR_0)
{
 const struct mlxsw_sp_acl_profile_ops *VAR_1 = VAR_0->ht_key.ops;

 return VAR_1->ruleset_group_id(VAR_0->priv);
}
