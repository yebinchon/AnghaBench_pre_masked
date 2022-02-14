
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {unsigned int channel_count; int dma_irq; int dev; struct xlgmac_pdata* channel_head; int per_channel_irq; int dev_irq; } ;
struct xlgmac_channel {unsigned int channel_count; int dma_irq; int dev; struct xlgmac_channel* channel_head; int per_channel_irq; int dev_irq; } ;


 int FUNC_0 (int ,int ,struct xlgmac_pdata*) ;

__attribute__((used)) static void FUNC_1(struct xlgmac_pdata *VAR_0)
{
 struct xlgmac_channel *VAR_1;
 unsigned int VAR_2;

 FUNC_0(VAR_0->dev, VAR_0->dev_irq, VAR_0);

 if (!VAR_0->per_channel_irq)
  return;

 VAR_1 = VAR_0->channel_head;
 for (VAR_2 = 0; VAR_2 < VAR_0->channel_count; VAR_2++, VAR_1++)
  FUNC_0(VAR_0->dev, VAR_1->dma_irq, VAR_1);
}
