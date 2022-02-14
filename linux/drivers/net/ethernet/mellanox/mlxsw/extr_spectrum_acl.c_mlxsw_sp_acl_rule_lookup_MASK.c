
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_ruleset {int rule_ht; } ;
struct mlxsw_sp_acl_rule {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_sp_acl_rule* FUNC_0 (int *,unsigned long*,int ) ;

struct mlxsw_sp_acl_rule *
FUNC_1(struct mlxsw_sp *VAR_1,
    struct mlxsw_sp_acl_ruleset *VAR_2,
    unsigned long VAR_3)
{
 return FUNC_0(&VAR_2->rule_ht, &VAR_3,
           VAR_0);
}
