
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_ttc_table {int ** tunnel_rules; int ** rules; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mlx5e_ttc_table *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!FUNC_0(VAR_2->rules[VAR_3])) {
   FUNC_1(VAR_2->rules[VAR_3]);
   VAR_2->rules[VAR_3] = ((void*)0);
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (!FUNC_0(VAR_2->tunnel_rules[VAR_3])) {
   FUNC_1(VAR_2->tunnel_rules[VAR_3]);
   VAR_2->tunnel_rules[VAR_3] = ((void*)0);
  }
 }
}
