
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pxamci_host {TYPE_2__* mrq; int cmdat; struct mmc_data* data; int dma_dir; struct dma_chan* dma_chan_tx; struct dma_chan* dma_chan_rx; } ;
struct mmc_data {int flags; int bytes_xfered; int blocks; int blksz; int error; int sg_len; int sg; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_4__ {scalar_t__ stop; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct pxamci_host*,int ) ;
 int FUNC_2 (struct pxamci_host*,TYPE_2__*) ;
 int FUNC_3 (struct pxamci_host*,scalar_t__,int ) ;
 int FUNC_4 (struct pxamci_host*) ;

__attribute__((used)) static int FUNC_5(struct pxamci_host *VAR_7, unsigned int VAR_8)
{
 struct mmc_data *VAR_9 = VAR_7->data;
 struct dma_chan *VAR_10;

 if (!VAR_9)
  return 0;

 if (VAR_9->flags & VAR_3)
  VAR_10 = VAR_7->dma_chan_rx;
 else
  VAR_10 = VAR_7->dma_chan_tx;
 FUNC_0(VAR_10->device->dev,
       VAR_9->sg, VAR_9->sg_len, VAR_7->dma_dir);

 if (VAR_8 & VAR_6)
  VAR_9->error = -VAR_2;
 else if (VAR_8 & (VAR_4|VAR_5))
  VAR_9->error = -VAR_1;







 if (!VAR_9->error)
  VAR_9->bytes_xfered = VAR_9->blocks * VAR_9->blksz;
 else
  VAR_9->bytes_xfered = 0;

 FUNC_1(VAR_7, VAR_0);

 VAR_7->data = ((void*)0);
 if (VAR_7->mrq->stop) {
  FUNC_4(VAR_7);
  FUNC_3(VAR_7, VAR_7->mrq->stop, VAR_7->cmdat);
 } else {
  FUNC_2(VAR_7, VAR_7->mrq);
 }

 return 1;
}
