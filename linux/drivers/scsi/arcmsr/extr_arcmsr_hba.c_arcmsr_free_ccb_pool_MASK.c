
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct AdapterControlBlock {int dma_coherent_handle; int dma_coherent; int uncache_size; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct AdapterControlBlock *VAR_0)
{
 FUNC_0(&VAR_0->pdev->dev, VAR_0->uncache_size, VAR_0->dma_coherent, VAR_0->dma_coherent_handle);
}
