
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int flags; void* callback_param; int (* callback ) (void*) ;} ;
struct tsi721_tx_desc {scalar_t__ sg_len; int desc_node; TYPE_3__ txd; int status; int rio_addr; int destid; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct tsi721_bdma_chan {scalar_t__ regs; int lock; struct tsi721_tx_desc* active_tx; scalar_t__ active; int free_list; int id; TYPE_2__ dchan; scalar_t__ sts_rdptr; scalar_t__ wr_count_next; scalar_t__ wr_count; int sts_size; scalar_t__ sts_phys; scalar_t__ bd_phys; } ;
typedef int (* dma_async_tx_callback ) (void*) ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct tsi721_bdma_chan*,struct tsi721_tx_desc*) ;
 int FUNC_8 (struct tsi721_bdma_chan*) ;
 int FUNC_9 (int ,int *,char*,int ,int) ;
 int FUNC_10 (int *,char*,int ,...) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(unsigned long VAR_22)
{
 struct tsi721_bdma_chan *VAR_23 = (struct tsi721_bdma_chan *)VAR_22;
 u32 VAR_24, VAR_25;

 VAR_24 = FUNC_2(VAR_23->regs + VAR_13);
 FUNC_9(VAR_0, &VAR_23->dchan.dev->device, "DMAC%d_INT = 0x%x",
    VAR_23->id, VAR_24);

 FUNC_3(VAR_24, VAR_23->regs + VAR_13);

 if (VAR_24 & VAR_17) {
  int VAR_26 = 10000;
  struct tsi721_tx_desc *VAR_27;

  VAR_27 = VAR_23->active_tx;
  VAR_25 = FUNC_2(VAR_23->regs + VAR_20);
  FUNC_10(&VAR_23->dchan.dev->device,
   "DMAC%d_STS = 0x%x did=%d raddr=0x%llx",
   VAR_23->id, VAR_25, VAR_27->destid, VAR_27->rio_addr);



  if ((VAR_25 & VAR_21) == 0)
   goto err_out;

  FUNC_8(VAR_23);

  FUNC_5(&VAR_23->lock);


  FUNC_3(VAR_5,
     VAR_23->regs + VAR_4);
  do {
   FUNC_11(1);
   VAR_25 = FUNC_2(VAR_23->regs + VAR_20);
   VAR_26--;
  } while ((VAR_25 & VAR_21) && VAR_26);

  if (VAR_25 & VAR_21) {
   FUNC_10(&VAR_23->dchan.dev->device,
    "Failed to re-initiate DMAC%d", VAR_23->id);
   FUNC_6(&VAR_23->lock);
   goto err_out;
  }


  FUNC_3(((u64)VAR_23->bd_phys >> 32),
   VAR_23->regs + VAR_6);
  FUNC_3(((u64)VAR_23->bd_phys & VAR_8),
   VAR_23->regs + VAR_7);


  FUNC_3(((u64)VAR_23->sts_phys >> 32),
   VAR_23->regs + VAR_9);
  FUNC_3(((u64)VAR_23->sts_phys & VAR_11),
   VAR_23->regs + VAR_10);
  FUNC_3(FUNC_0(VAR_23->sts_size),
   VAR_23->regs + VAR_12);


  FUNC_3(VAR_15,
   VAR_23->regs + VAR_13);

  FUNC_2(VAR_23->regs + VAR_13);

  VAR_23->wr_count = VAR_23->wr_count_next = 0;
  VAR_23->sts_rdptr = 0;
  FUNC_11(10);

  VAR_27 = VAR_23->active_tx;
  VAR_27->status = VAR_2;
  FUNC_1(&VAR_27->txd);
  FUNC_4(&VAR_27->desc_node, &VAR_23->free_list);
  VAR_23->active_tx = ((void*)0);
  if (VAR_23->active)
   FUNC_7(VAR_23, ((void*)0));
  FUNC_6(&VAR_23->lock);
 }

 if (VAR_24 & VAR_19) {
  FUNC_10(&VAR_23->dchan.dev->device,
   "DMAC%d descriptor status FIFO is full",
   VAR_23->id);
 }

 if (VAR_24 & (VAR_16 | VAR_18)) {
  struct tsi721_tx_desc *VAR_28;

  FUNC_8(VAR_23);
  FUNC_5(&VAR_23->lock);
  VAR_28 = VAR_23->active_tx;

  if (VAR_28->sg_len == 0) {
   dma_async_tx_callback VAR_29 = ((void*)0);
   void *VAR_30 = ((void*)0);

   VAR_28->status = VAR_1;
   FUNC_1(&VAR_28->txd);
   if (VAR_28->txd.flags & VAR_3) {
    VAR_29 = VAR_28->txd.callback;
    VAR_30 = VAR_28->txd.callback_param;
   }
   FUNC_4(&VAR_28->desc_node, &VAR_23->free_list);
   VAR_23->active_tx = ((void*)0);
   if (VAR_23->active)
    FUNC_7(VAR_23, ((void*)0));
   FUNC_6(&VAR_23->lock);
   if (VAR_29)
    VAR_29(VAR_30);
  } else {
   if (VAR_23->active)
    FUNC_7(VAR_23,
          VAR_23->active_tx);
   FUNC_6(&VAR_23->lock);
  }
 }
err_out:

 FUNC_3(VAR_15, VAR_23->regs + VAR_14);
}
