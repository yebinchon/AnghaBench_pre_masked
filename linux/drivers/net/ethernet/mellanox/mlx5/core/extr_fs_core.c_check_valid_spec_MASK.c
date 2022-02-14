
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_spec {int* match_value; int* match_criteria; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(const struct mlx5_flow_spec *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->match_value[VAR_2] & ~VAR_1->match_criteria[VAR_2]) {
   FUNC_0("mlx5_core: match_value differs from match_criteria\n");
   return 0;
  }

 return 1;
}
