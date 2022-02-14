
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_flower_ruleset {int vgroup; } ;
struct mlxsw_sp_acl_tcam_flower_rule {int ventry; } ;
struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,int *,int *,struct mlxsw_sp_acl_rule_info*) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp *VAR_0,
      void *VAR_1, void *VAR_2,
      struct mlxsw_sp_acl_rule_info *VAR_3)
{
 struct mlxsw_sp_acl_tcam_flower_ruleset *VAR_4 = VAR_1;
 struct mlxsw_sp_acl_tcam_flower_rule *VAR_5 = VAR_2;

 return FUNC_0(VAR_0, &VAR_4->vgroup,
         &VAR_5->ventry, VAR_3);
}
