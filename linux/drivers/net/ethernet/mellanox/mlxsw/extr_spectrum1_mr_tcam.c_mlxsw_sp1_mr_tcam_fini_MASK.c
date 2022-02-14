
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp1_mr_tcam_region {int dummy; } ;
struct mlxsw_sp1_mr_tcam {struct mlxsw_sp1_mr_tcam_region* tcam_regions; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct mlxsw_sp1_mr_tcam_region*) ;

__attribute__((used)) static void FUNC_1(void *VAR_2)
{
 struct mlxsw_sp1_mr_tcam *VAR_3 = VAR_2;
 struct mlxsw_sp1_mr_tcam_region *VAR_4 = &VAR_3->tcam_regions[0];

 FUNC_0(&VAR_4[VAR_1]);
 FUNC_0(&VAR_4[VAR_0]);
}
