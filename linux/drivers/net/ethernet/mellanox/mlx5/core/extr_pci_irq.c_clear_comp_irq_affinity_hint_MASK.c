
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_irq {int mask; } ;
struct mlx5_core_dev {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int *) ;
 struct mlx5_irq* FUNC_2 (struct mlx5_core_dev*,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct mlx5_core_dev *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0 + VAR_2;
 struct mlx5_irq *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_3);
 VAR_5 = FUNC_3(VAR_1->pdev, VAR_3);
 FUNC_1(VAR_5, ((void*)0));
 FUNC_0(VAR_4->mask);
}
