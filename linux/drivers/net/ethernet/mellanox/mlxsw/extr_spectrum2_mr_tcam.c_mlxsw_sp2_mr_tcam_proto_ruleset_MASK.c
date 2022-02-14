
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_ruleset {int dummy; } ;
struct mlxsw_sp2_mr_tcam {struct mlxsw_sp_acl_ruleset* ruleset6; struct mlxsw_sp_acl_ruleset* ruleset4; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;





__attribute__((used)) static struct mlxsw_sp_acl_ruleset *
FUNC_0(struct mlxsw_sp2_mr_tcam *VAR_0,
    enum mlxsw_sp_l3proto VAR_1)
{
 switch (VAR_1) {
 case 129:
  return VAR_0->ruleset4;
 case 128:
  return VAR_0->ruleset6;
 }
 return ((void*)0);
}
