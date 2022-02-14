
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxamci_host {int lock; TYPE_1__* data; int mmc; scalar_t__ base; int dma_cookie; struct dma_chan* dma_chan_tx; struct dma_chan* dma_chan_rx; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
struct TYPE_2__ {int flags; int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct dma_chan*,int ,struct dma_tx_state*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (struct pxamci_host*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(void *VAR_5)
{
 struct pxamci_host *VAR_6 = VAR_5;
 struct dma_tx_state VAR_7;
 enum dma_status VAR_8;
 struct dma_chan *VAR_9;
 unsigned long VAR_10;

 FUNC_5(&VAR_6->lock, VAR_10);

 if (!VAR_6->data)
  goto out_unlock;

 if (VAR_6->data->flags & VAR_3)
  VAR_9 = VAR_6->dma_chan_rx;
 else
  VAR_9 = VAR_6->dma_chan_tx;

 VAR_8 = FUNC_0(VAR_9, VAR_6->dma_cookie, &VAR_7);

 if (FUNC_1(VAR_8 == VAR_1)) {
  FUNC_7(VAR_0, VAR_6->base + VAR_4);
 } else {
  FUNC_3("%s: DMA error on %s channel\n", FUNC_2(VAR_6->mmc),
   VAR_6->data->flags & VAR_3 ? "rx" : "tx");
  VAR_6->data->error = -VAR_2;
  FUNC_4(VAR_6, 0);
 }

out_unlock:
 FUNC_6(&VAR_6->lock, VAR_10);
}
