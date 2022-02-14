
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp2_mr_tcam {int acl_block; } ;


 int FUNC_0 (struct mlxsw_sp2_mr_tcam*) ;
 int FUNC_1 (struct mlxsw_sp2_mr_tcam*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct mlxsw_sp2_mr_tcam *VAR_1 = VAR_0;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1->acl_block);
}
