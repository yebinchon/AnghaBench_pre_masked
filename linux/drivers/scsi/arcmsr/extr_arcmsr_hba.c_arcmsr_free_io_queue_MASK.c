
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct AdapterControlBlock {int adapter_type; int dma_coherent_handle2; int dma_coherent2; int ioqueue_size; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;





 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct AdapterControlBlock *VAR_0)
{
 switch (VAR_0->adapter_type) {
 case 130:
 case 129:
 case 128: {
  FUNC_0(&VAR_0->pdev->dev, VAR_0->ioqueue_size,
   VAR_0->dma_coherent2, VAR_0->dma_coherent_handle2);
  break;
 }
 }
}
