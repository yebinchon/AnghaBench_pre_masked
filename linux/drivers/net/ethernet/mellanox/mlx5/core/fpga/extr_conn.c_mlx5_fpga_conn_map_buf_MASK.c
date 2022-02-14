
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5_fpga_dma_buf {int dma_dir; TYPE_3__* sg; } ;
struct mlx5_fpga_conn {TYPE_4__* fdev; } ;
struct device {int dummy; } ;
struct TYPE_8__ {TYPE_2__* mdev; } ;
struct TYPE_7__ {int size; void* dma_addr; int data; } ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 void* FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (struct device*,void*) ;
 int FUNC_2 (struct device*,void*,int ,int ) ;
 int FUNC_3 (TYPE_4__*,char*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct mlx5_fpga_conn *VAR_1,
      struct mlx5_fpga_dma_buf *VAR_2)
{
 struct device *VAR_3;
 int VAR_4 = 0;

 if (FUNC_4(!VAR_2->sg[0].data))
  goto out;

 VAR_3 = &VAR_1->fdev->mdev->pdev->dev;
 VAR_2->sg[0].dma_addr = FUNC_0(VAR_3, VAR_2->sg[0].data,
          VAR_2->sg[0].size, VAR_2->dma_dir);
 VAR_4 = FUNC_1(VAR_3, VAR_2->sg[0].dma_addr);
 if (FUNC_4(VAR_4)) {
  FUNC_3(VAR_1->fdev, "DMA error on sg 0: %d\n", VAR_4);
  VAR_4 = -VAR_0;
  goto out;
 }

 if (!VAR_2->sg[1].data)
  goto out;

 VAR_2->sg[1].dma_addr = FUNC_0(VAR_3, VAR_2->sg[1].data,
          VAR_2->sg[1].size, VAR_2->dma_dir);
 VAR_4 = FUNC_1(VAR_3, VAR_2->sg[1].dma_addr);
 if (FUNC_4(VAR_4)) {
  FUNC_3(VAR_1->fdev, "DMA error on sg 1: %d\n", VAR_4);
  FUNC_2(VAR_3, VAR_2->sg[0].dma_addr,
     VAR_2->sg[0].size, VAR_2->dma_dir);
  VAR_4 = -VAR_0;
 }

out:
 return VAR_4;
}
