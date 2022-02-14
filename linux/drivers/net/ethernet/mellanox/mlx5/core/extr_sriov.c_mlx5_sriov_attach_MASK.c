
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int pdev; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct mlx5_core_dev *VAR_0)
{
 if (!FUNC_0(VAR_0) || !FUNC_2(VAR_0->pdev))
  return 0;


 return FUNC_1(VAR_0, FUNC_2(VAR_0->pdev));
}
