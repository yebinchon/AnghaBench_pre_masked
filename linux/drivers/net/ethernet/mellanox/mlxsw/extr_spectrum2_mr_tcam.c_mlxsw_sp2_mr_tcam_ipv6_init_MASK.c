
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp2_mr_tcam {int ruleset6; int mlxsw_sp; int acl_block; } ;
struct mlxsw_afk_element_usage {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlxsw_afk_element_usage*,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,int ,int ,struct mlxsw_afk_element_usage*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct mlxsw_sp2_mr_tcam *VAR_4)
{
 struct mlxsw_afk_element_usage VAR_5;
 int VAR_6;


 FUNC_3(&VAR_5,
         VAR_3,
         FUNC_0(VAR_3));
 VAR_4->ruleset6 = FUNC_5(VAR_4->mlxsw_sp,
           VAR_4->acl_block,
           VAR_2,
           VAR_1,
           &VAR_5);

 if (FUNC_1(VAR_4->ruleset6))
  return FUNC_2(VAR_4->ruleset6);


 VAR_6 = FUNC_4(VAR_4->mlxsw_sp,
        VAR_0,
        VAR_4->ruleset6);
 if (VAR_6)
  goto err_bind_group;

 return 0;

err_bind_group:
 FUNC_6(VAR_4->mlxsw_sp, VAR_4->ruleset6);
 return VAR_6;
}
