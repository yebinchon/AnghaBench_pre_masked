
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_ruleset {int dummy; } ;
struct mlxsw_sp_acl_rule {int rulei; struct mlxsw_sp_acl_ruleset* ruleset; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_acl_rule*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*) ;

void FUNC_3(struct mlxsw_sp *VAR_0,
          struct mlxsw_sp_acl_rule *VAR_1)
{
 struct mlxsw_sp_acl_ruleset *VAR_2 = VAR_1->ruleset;

 FUNC_1(VAR_1->rulei);
 FUNC_0(VAR_1);
 FUNC_2(VAR_0, VAR_2);
}
