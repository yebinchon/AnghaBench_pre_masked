
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int chancnt; int device_terminate_all; int device_prep_slave_sg; int device_issue_pending; int device_tx_status; int device_free_chan_resources; int device_alloc_chan_resources; int * dev; int cap_mask; int channels; } ;
struct rio_mport {TYPE_3__ dma; } ;
struct tsi721_device {TYPE_2__* pdev; scalar_t__ regs; struct tsi721_bdma_chan* bdma; struct rio_mport mport; } ;
struct TYPE_4__ {int cookie; int chan_id; int device_node; TYPE_3__* device; } ;
struct tsi721_bdma_chan {int id; int active; TYPE_1__ dchan; int tasklet; int free_list; int queue; int * active_tx; int lock; scalar_t__ regs; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,unsigned long) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int *,char*) ;

int FUNC_9(struct tsi721_device *VAR_12)
{
 int VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 struct rio_mport *VAR_16 = &VAR_12->mport;

 FUNC_0(&VAR_16->dma.channels);

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  struct tsi721_bdma_chan *VAR_17 = &VAR_12->bdma[VAR_13];

  if ((VAR_13 == VAR_2) || (VAR_4 & (1 << VAR_13)) == 0)
   continue;

  VAR_17->regs = VAR_12->regs + FUNC_1(VAR_13);

  VAR_17->dchan.device = &VAR_16->dma;
  VAR_17->dchan.cookie = 1;
  VAR_17->dchan.chan_id = VAR_13;
  VAR_17->id = VAR_13;
  VAR_17->active = 0;

  FUNC_6(&VAR_17->lock);

  VAR_17->active_tx = ((void*)0);
  FUNC_0(&VAR_17->queue);
  FUNC_0(&VAR_17->free_list);

  FUNC_7(&VAR_17->tasklet, VAR_6,
        (unsigned long)VAR_17);
  FUNC_5(&VAR_17->dchan.device_node,
         &VAR_16->dma.channels);
  VAR_14++;
 }

 VAR_16->dma.chancnt = VAR_14;
 FUNC_4(VAR_16->dma.cap_mask);
 FUNC_3(VAR_0, VAR_16->dma.cap_mask);
 FUNC_3(VAR_1, VAR_16->dma.cap_mask);

 VAR_16->dma.dev = &VAR_12->pdev->dev;
 VAR_16->dma.device_alloc_chan_resources = VAR_5;
 VAR_16->dma.device_free_chan_resources = VAR_7;
 VAR_16->dma.device_tx_status = VAR_11;
 VAR_16->dma.device_issue_pending = VAR_8;
 VAR_16->dma.device_prep_slave_sg = VAR_9;
 VAR_16->dma.device_terminate_all = VAR_10;

 VAR_15 = FUNC_2(&VAR_16->dma);
 if (VAR_15)
  FUNC_8(&VAR_12->pdev->dev, "Failed to register DMA device");

 return VAR_15;
}
