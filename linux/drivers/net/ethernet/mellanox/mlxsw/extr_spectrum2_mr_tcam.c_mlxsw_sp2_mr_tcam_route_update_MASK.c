
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_route_key {int proto; } ;
struct mlxsw_sp_acl_ruleset {int dummy; } ;
struct mlxsw_sp_acl_rule {int dummy; } ;
struct mlxsw_sp2_mr_tcam {int dummy; } ;
struct mlxsw_sp2_mr_route {struct mlxsw_sp2_mr_tcam* mr_tcam; } ;
struct mlxsw_sp {int dummy; } ;
struct mlxsw_afa_block {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct mlxsw_sp_acl_ruleset* FUNC_1 (struct mlxsw_sp2_mr_tcam*,int ) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_rule*,struct mlxsw_afa_block*) ;
 struct mlxsw_sp_acl_rule* FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct mlxsw_sp *VAR_1,
          void *VAR_2,
          struct mlxsw_sp_mr_route_key *VAR_3,
          struct mlxsw_afa_block *VAR_4)
{
 struct mlxsw_sp2_mr_route *VAR_5 = VAR_2;
 struct mlxsw_sp2_mr_tcam *VAR_6 = VAR_5->mr_tcam;
 struct mlxsw_sp_acl_ruleset *VAR_7;
 struct mlxsw_sp_acl_rule *VAR_8;

 VAR_7 = FUNC_1(VAR_6, VAR_3->proto);
 if (FUNC_0(!VAR_7))
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_1, VAR_7,
     (unsigned long) VAR_2);
 if (FUNC_0(!VAR_8))
  return -VAR_0;

 return FUNC_2(VAR_1, VAR_8, VAR_4);
}
