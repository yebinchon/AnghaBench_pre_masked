
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int map_dir; } ;
struct mlx5e_rq {TYPE_1__ buff; int pdev; } ;
struct mlx5e_dma_info {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(struct mlx5e_rq *VAR_1, struct mlx5e_dma_info *VAR_2)
{
 FUNC_0(VAR_1->pdev, VAR_2->addr, VAR_0, VAR_1->buff.map_dir);
}
