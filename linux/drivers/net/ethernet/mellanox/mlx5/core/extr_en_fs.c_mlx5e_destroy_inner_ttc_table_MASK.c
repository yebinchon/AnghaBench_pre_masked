
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_ttc_table {int ft; } ;
struct mlx5e_priv {int mdev; } ;


 int FUNC_0 (struct mlx5e_ttc_table*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct mlx5e_priv *VAR_0,
       struct mlx5e_ttc_table *VAR_1)
{
 if (!FUNC_2(VAR_0->mdev))
  return;

 FUNC_0(VAR_1);
 FUNC_1(&VAR_1->ft);
}
