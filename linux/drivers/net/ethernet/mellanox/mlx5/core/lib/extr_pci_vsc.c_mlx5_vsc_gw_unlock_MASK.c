
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ,int ) ;

int FUNC_2(struct mlx5_core_dev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1, VAR_0);
 FUNC_0(VAR_2->pdev);
 return VAR_3;
}
