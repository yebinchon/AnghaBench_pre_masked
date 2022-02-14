
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_route_key {int proto; } ;
struct mlxsw_sp_acl_ruleset {int dummy; } ;
struct mlxsw_sp_acl_rule {int dummy; } ;
struct mlxsw_sp2_mr_tcam {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 struct mlxsw_sp_acl_ruleset* FUNC_1 (struct mlxsw_sp2_mr_tcam*,int ) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_rule*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_acl_rule*) ;
 struct mlxsw_sp_acl_rule* FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct mlxsw_sp *VAR_0, void *VAR_1,
    void *VAR_2,
    struct mlxsw_sp_mr_route_key *VAR_3)
{
 struct mlxsw_sp2_mr_tcam *VAR_4 = VAR_1;
 struct mlxsw_sp_acl_ruleset *VAR_5;
 struct mlxsw_sp_acl_rule *VAR_6;

 VAR_5 = FUNC_1(VAR_4, VAR_3->proto);
 if (FUNC_0(!VAR_5))
  return;

 VAR_6 = FUNC_4(VAR_0, VAR_5,
     (unsigned long) VAR_2);
 if (FUNC_0(!VAR_6))
  return;

 FUNC_2(VAR_0, VAR_6);
 FUNC_3(VAR_0, VAR_6);
}
