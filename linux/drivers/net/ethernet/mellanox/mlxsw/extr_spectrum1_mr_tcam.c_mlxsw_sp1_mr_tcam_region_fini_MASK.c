
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp1_mr_tcam_region {int parman; int * parman_prios; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_sp1_mr_tcam_region*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct mlxsw_sp1_mr_tcam_region *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0 + 1; VAR_2++)
  FUNC_3(&VAR_1->parman_prios[VAR_2]);
 FUNC_0(VAR_1->parman_prios);
 FUNC_2(VAR_1->parman);
 FUNC_1(VAR_1);
}
