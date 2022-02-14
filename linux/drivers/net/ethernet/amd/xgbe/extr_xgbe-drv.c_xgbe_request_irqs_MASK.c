
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {char* ecc_name; unsigned int channel_count; char* dma_irq_name; int queue_index; int dev_irq; int dev; int ecc_irq; TYPE_1__* vdata; int dma_irq; struct xgbe_prv_data** channel; int affinity_mask; int per_channel_irq; int tasklet_ecc; int tasklet_dev; struct net_device* netdev; } ;
struct xgbe_channel {char* ecc_name; unsigned int channel_count; char* dma_irq_name; int queue_index; int dev_irq; int dev; int ecc_irq; TYPE_1__* vdata; int dma_irq; struct xgbe_channel** channel; int affinity_mask; int per_channel_irq; int tasklet_ecc; int tasklet_dev; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ ecc_support; } ;


 int FUNC_0 (int ,int ,struct xgbe_prv_data*) ;
 int FUNC_1 (int ,int ,int ,int ,char*,struct xgbe_prv_data*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct net_device*,char*,int ) ;
 char* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,int,char*,char*,int) ;
 int FUNC_6 (int *,int ,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct xgbe_prv_data *VAR_5)
{
 struct xgbe_channel *VAR_6;
 struct net_device *VAR_7 = VAR_5->netdev;
 unsigned int VAR_8;
 int VAR_9;

 FUNC_6(&VAR_5->tasklet_dev, VAR_4, (unsigned long)VAR_5);
 FUNC_6(&VAR_5->tasklet_ecc, VAR_2,
       (unsigned long)VAR_5);

 VAR_9 = FUNC_1(VAR_5->dev, VAR_5->dev_irq, VAR_3, 0,
          FUNC_4(VAR_7), VAR_5);
 if (VAR_9) {
  FUNC_3(VAR_7, "error requesting irq %d\n",
        VAR_5->dev_irq);
  return VAR_9;
 }

 if (VAR_5->vdata->ecc_support && (VAR_5->dev_irq != VAR_5->ecc_irq)) {
  VAR_9 = FUNC_1(VAR_5->dev, VAR_5->ecc_irq, VAR_1,
           0, VAR_5->ecc_name, VAR_5);
  if (VAR_9) {
   FUNC_3(VAR_7, "error requesting ecc irq %d\n",
         VAR_5->ecc_irq);
   goto err_dev_irq;
  }
 }

 if (!VAR_5->per_channel_irq)
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_5->channel_count; VAR_8++) {
  VAR_6 = VAR_5->channel[VAR_8];
  FUNC_5(VAR_6->dma_irq_name,
    sizeof(VAR_6->dma_irq_name) - 1,
    "%s-TxRx-%u", FUNC_4(VAR_7),
    VAR_6->queue_index);

  VAR_9 = FUNC_1(VAR_5->dev, VAR_6->dma_irq,
           VAR_0, 0,
           VAR_6->dma_irq_name, VAR_6);
  if (VAR_9) {
   FUNC_3(VAR_7, "error requesting irq %d\n",
         VAR_6->dma_irq);
   goto err_dma_irq;
  }

  FUNC_2(VAR_6->dma_irq,
          &VAR_6->affinity_mask);
 }

 return 0;

err_dma_irq:

 for (VAR_8--; VAR_8 < VAR_5->channel_count; VAR_8--) {
  VAR_6 = VAR_5->channel[VAR_8];

  FUNC_2(VAR_6->dma_irq, ((void*)0));
  FUNC_0(VAR_5->dev, VAR_6->dma_irq, VAR_6);
 }

 if (VAR_5->vdata->ecc_support && (VAR_5->dev_irq != VAR_5->ecc_irq))
  FUNC_0(VAR_5->dev, VAR_5->ecc_irq, VAR_5);

err_dev_irq:
 FUNC_0(VAR_5->dev, VAR_5->dev_irq, VAR_5);

 return VAR_9;
}
