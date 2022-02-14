
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {scalar_t__ dev_irq; scalar_t__ ecc_irq; unsigned int channel_count; scalar_t__ dma_irq; int dev; struct xgbe_prv_data** channel; int per_channel_irq; TYPE_1__* vdata; } ;
struct xgbe_channel {scalar_t__ dev_irq; scalar_t__ ecc_irq; unsigned int channel_count; scalar_t__ dma_irq; int dev; struct xgbe_channel** channel; int per_channel_irq; TYPE_1__* vdata; } ;
struct TYPE_2__ {scalar_t__ ecc_support; } ;


 int FUNC_0 (int ,scalar_t__,struct xgbe_prv_data*) ;
 int FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_channel *VAR_1;
 unsigned int VAR_2;

 FUNC_0(VAR_0->dev, VAR_0->dev_irq, VAR_0);

 if (VAR_0->vdata->ecc_support && (VAR_0->dev_irq != VAR_0->ecc_irq))
  FUNC_0(VAR_0->dev, VAR_0->ecc_irq, VAR_0);

 if (!VAR_0->per_channel_irq)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->channel_count; VAR_2++) {
  VAR_1 = VAR_0->channel[VAR_2];

  FUNC_1(VAR_1->dma_irq, ((void*)0));
  FUNC_0(VAR_0->dev, VAR_1->dma_irq, VAR_1);
 }
}
