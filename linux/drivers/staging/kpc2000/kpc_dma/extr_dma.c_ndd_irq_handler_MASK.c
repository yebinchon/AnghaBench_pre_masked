
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kpc_dma_device {int irq_work; TYPE_1__* desc_completed; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ MyDMAAddr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kpc_dma_device*) ;
 int FUNC_1 (struct kpc_dma_device*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct kpc_dma_device *VAR_4 = (struct kpc_dma_device *)VAR_3;

 if ((FUNC_1(VAR_4) & VAR_0) || (VAR_4->desc_completed->MyDMAAddr != FUNC_0(VAR_4)))
  FUNC_2(&VAR_4->irq_work);

 return VAR_1;
}
