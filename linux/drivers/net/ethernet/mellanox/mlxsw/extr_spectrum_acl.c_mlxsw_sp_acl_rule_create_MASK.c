
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {struct mlxsw_sp_acl_profile_ops* ops; } ;
struct mlxsw_sp_acl_ruleset {TYPE_1__ ht_key; } ;
struct mlxsw_sp_acl_rule {unsigned long cookie; int rulei; struct mlxsw_sp_acl_ruleset* ruleset; } ;
struct mlxsw_sp_acl_profile_ops {scalar_t__ rule_priv_size; } ;
struct mlxsw_sp {int acl; } ;
struct mlxsw_afa_block {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_sp_acl_rule* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlxsw_sp_acl_rule*) ;
 struct mlxsw_sp_acl_rule* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,struct mlxsw_afa_block*) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*) ;
 int FUNC_7 (struct mlxsw_sp_acl_ruleset*) ;

struct mlxsw_sp_acl_rule *
FUNC_8(struct mlxsw_sp *VAR_2,
    struct mlxsw_sp_acl_ruleset *VAR_3,
    unsigned long VAR_4,
    struct mlxsw_afa_block *VAR_5,
    struct netlink_ext_ack *VAR_6)
{
 const struct mlxsw_sp_acl_profile_ops *VAR_7 = VAR_3->ht_key.ops;
 struct mlxsw_sp_acl_rule *VAR_8;
 int VAR_9;

 FUNC_7(VAR_3);
 VAR_8 = FUNC_4(sizeof(*VAR_8) + VAR_7->rule_priv_size,
         VAR_1);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto err_alloc;
 }
 VAR_8->cookie = VAR_4;
 VAR_8->ruleset = VAR_3;

 VAR_8->rulei = FUNC_5(VAR_2->acl, VAR_5);
 if (FUNC_1(VAR_8->rulei)) {
  VAR_9 = FUNC_2(VAR_8->rulei);
  goto err_rulei_create;
 }

 return VAR_8;

err_rulei_create:
 FUNC_3(VAR_8);
err_alloc:
 FUNC_6(VAR_2, VAR_3);
 return FUNC_0(VAR_9);
}
