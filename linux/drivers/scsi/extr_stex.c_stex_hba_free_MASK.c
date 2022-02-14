
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_hba {int dma_handle; int dma_mem; int dma_size; TYPE_1__* pdev; int ccb; int mmio_base; int work_q; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct st_hba*) ;

__attribute__((used)) static void FUNC_6(struct st_hba *VAR_0)
{
 FUNC_5(VAR_0);

 FUNC_0(VAR_0->work_q);

 FUNC_2(VAR_0->mmio_base);

 FUNC_4(VAR_0->pdev);

 FUNC_3(VAR_0->ccb);

 FUNC_1(&VAR_0->pdev->dev, VAR_0->dma_size,
     VAR_0->dma_mem, VAR_0->dma_handle);
}
