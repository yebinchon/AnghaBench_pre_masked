
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_icm_chunk {int npages; TYPE_3__* buf; } ;
struct mlx4_dev {TYPE_2__* persist; } ;
struct TYPE_6__ {int dma_addr; int addr; int size; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mlx4_dev *VAR_0, struct mlx4_icm_chunk *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->npages; ++VAR_2)
  FUNC_0(&VAR_0->persist->pdev->dev,
      VAR_1->buf[VAR_2].size,
      VAR_1->buf[VAR_2].addr,
      VAR_1->buf[VAR_2].dma_addr);
}
