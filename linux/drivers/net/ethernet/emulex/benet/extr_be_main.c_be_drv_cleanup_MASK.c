
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct be_dma_mem {int dma; scalar_t__ va; int size; } ;
struct be_adapter {struct be_dma_mem stats_cmd; struct be_dma_mem rx_filter; TYPE_1__* pdev; struct be_dma_mem mbox_mem_alloced; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct be_adapter *VAR_0)
{
 struct be_dma_mem *VAR_1 = &VAR_0->mbox_mem_alloced;
 struct device *VAR_2 = &VAR_0->pdev->dev;

 if (VAR_1->va)
  FUNC_0(VAR_2, VAR_1->size, VAR_1->va, VAR_1->dma);

 VAR_1 = &VAR_0->rx_filter;
 if (VAR_1->va)
  FUNC_0(VAR_2, VAR_1->size, VAR_1->va, VAR_1->dma);

 VAR_1 = &VAR_0->stats_cmd;
 if (VAR_1->va)
  FUNC_0(VAR_2, VAR_1->size, VAR_1->va, VAR_1->dma);
}
