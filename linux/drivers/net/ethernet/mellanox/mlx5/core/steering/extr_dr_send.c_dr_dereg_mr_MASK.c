
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_mr {int size; int dma_addr; int mkey; } ;
struct mlx5_core_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct mlx5dr_mr*) ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5_core_dev *VAR_1, struct mlx5dr_mr *VAR_2)
{
 FUNC_2(VAR_1, &VAR_2->mkey);
 FUNC_0(&VAR_1->pdev->dev, VAR_2->dma_addr, VAR_2->size,
    VAR_0);
 FUNC_1(VAR_2);
}
