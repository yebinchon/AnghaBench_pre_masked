
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {unsigned int channel_count; int queue_index; int dev_irq; int dev; int dma_irq; int dma_irq_name; struct xlgmac_pdata* channel_head; int per_channel_irq; struct net_device* netdev; } ;
struct xlgmac_channel {unsigned int channel_count; int queue_index; int dev_irq; int dev; int dma_irq; int dma_irq_name; struct xlgmac_channel* channel_head; int per_channel_irq; struct net_device* netdev; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct xlgmac_pdata*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,struct xlgmac_pdata*) ;
 int FUNC_2 (struct net_device*,char*,int ) ;
 char* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int,char*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct xlgmac_pdata *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 struct xlgmac_channel *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3->dev, VAR_3->dev_irq, VAR_2,
          VAR_0, VAR_4->name, VAR_3);
 if (VAR_7) {
  FUNC_2(VAR_4, "error requesting irq %d\n",
        VAR_3->dev_irq);
  return VAR_7;
 }

 if (!VAR_3->per_channel_irq)
  return 0;

 VAR_5 = VAR_3->channel_head;
 for (VAR_6 = 0; VAR_6 < VAR_3->channel_count; VAR_6++, VAR_5++) {
  FUNC_4(VAR_5->dma_irq_name,
    sizeof(VAR_5->dma_irq_name) - 1,
    "%s-TxRx-%u", FUNC_3(VAR_4),
    VAR_5->queue_index);

  VAR_7 = FUNC_1(VAR_3->dev, VAR_5->dma_irq,
           VAR_1, 0,
           VAR_5->dma_irq_name, VAR_5);
  if (VAR_7) {
   FUNC_2(VAR_4, "error requesting irq %d\n",
         VAR_5->dma_irq);
   goto err_irq;
  }
 }

 return 0;

err_irq:

 for (VAR_6--, VAR_5--; VAR_6 < VAR_3->channel_count; VAR_6--, VAR_5--)
  FUNC_0(VAR_3->dev, VAR_5->dma_irq, VAR_5);

 FUNC_0(VAR_3->dev, VAR_3->dev_irq, VAR_3);

 return VAR_7;
}
