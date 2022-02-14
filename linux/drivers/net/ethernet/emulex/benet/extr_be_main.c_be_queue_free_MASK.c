
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_dma_mem {int * va; int dma; int size; } ;
struct be_queue_info {struct be_dma_mem dma_mem; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct be_adapter *VAR_0, struct be_queue_info *VAR_1)
{
 struct be_dma_mem *VAR_2 = &VAR_1->dma_mem;

 if (VAR_2->va) {
  FUNC_0(&VAR_0->pdev->dev, VAR_2->size, VAR_2->va,
      VAR_2->dma);
  VAR_2->va = ((void*)0);
 }
}
