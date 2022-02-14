
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_flower_ruleset {int vgroup; } ;
struct mlxsw_sp_acl_tcam {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct mlxsw_afk_element_usage {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam*,int *,int ,int ,struct mlxsw_afk_element_usage*,int) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp *VAR_2,
         struct mlxsw_sp_acl_tcam *VAR_3,
         void *VAR_4,
         struct mlxsw_afk_element_usage *VAR_5)
{
 struct mlxsw_sp_acl_tcam_flower_ruleset *VAR_6 = VAR_4;

 return FUNC_0(VAR_2, VAR_3, &VAR_6->vgroup,
         VAR_1,
         VAR_0,
         VAR_5, 1);
}
