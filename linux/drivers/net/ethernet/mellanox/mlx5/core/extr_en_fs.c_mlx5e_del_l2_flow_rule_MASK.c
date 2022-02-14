
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int dummy; } ;
struct mlx5e_l2_rule {int * rule; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mlx5e_priv *VAR_0,
       struct mlx5e_l2_rule *VAR_1)
{
 if (!FUNC_0(VAR_1->rule)) {
  FUNC_1(VAR_1->rule);
  VAR_1->rule = ((void*)0);
 }
}
