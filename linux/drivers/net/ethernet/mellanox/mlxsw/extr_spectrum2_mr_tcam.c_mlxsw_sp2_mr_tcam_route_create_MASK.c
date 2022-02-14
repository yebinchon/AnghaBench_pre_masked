
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
typedef enum mlxsw_sp_mr_route_prio { ____Placeholder_mlxsw_sp_mr_route_prio } mlxsw_sp_mr_route_prio ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlxsw_sp_acl_rule*) ;
 int FUNC_1 (struct mlxsw_sp_acl_rule*) ;
 scalar_t__ FUNC_2 (int) ;
 struct mlxsw_sp_acl_ruleset* FUNC_3 (struct mlxsw_sp2_mr_tcam*,int ) ;
 int FUNC_4 (struct mlxsw_sp_acl_rule*,struct mlxsw_sp_mr_route_key*,int) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_acl_rule*) ;
 struct mlxsw_sp_acl_rule* FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*,unsigned long,struct mlxsw_afa_block*,int *) ;
 int FUNC_7 (struct mlxsw_sp*,struct mlxsw_sp_acl_rule*) ;

__attribute__((used)) static int
FUNC_8(struct mlxsw_sp *VAR_1, void *VAR_2,
          void *VAR_3,
          struct mlxsw_sp_mr_route_key *VAR_4,
          struct mlxsw_afa_block *VAR_5,
          enum mlxsw_sp_mr_route_prio VAR_6)
{
 struct mlxsw_sp2_mr_route *VAR_7 = VAR_3;
 struct mlxsw_sp2_mr_tcam *VAR_8 = VAR_2;
 struct mlxsw_sp_acl_ruleset *VAR_9;
 struct mlxsw_sp_acl_rule *VAR_10;
 int VAR_11;

 VAR_7->mr_tcam = VAR_8;
 VAR_9 = FUNC_3(VAR_8, VAR_4->proto);
 if (FUNC_2(!VAR_9))
  return -VAR_0;

 VAR_10 = FUNC_6(VAR_1, VAR_9,
     (unsigned long) VAR_3, VAR_5,
     ((void*)0));
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 FUNC_4(VAR_10, VAR_4, VAR_6);
 VAR_11 = FUNC_5(VAR_1, VAR_10);
 if (VAR_11)
  goto err_rule_add;

 return 0;

err_rule_add:
 FUNC_7(VAR_1, VAR_10);
 return VAR_11;
}
