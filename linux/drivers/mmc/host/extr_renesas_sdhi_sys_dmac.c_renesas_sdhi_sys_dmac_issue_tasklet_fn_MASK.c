
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {int lock; struct dma_chan* chan_tx; struct dma_chan* chan_rx; TYPE_1__* data; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tmio_mmc_host*,int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct tmio_mmc_host *VAR_3 = (struct tmio_mmc_host *)VAR_2;
 struct dma_chan *VAR_4 = ((void*)0);

 FUNC_1(&VAR_3->lock);

 if (VAR_3->data) {
  if (VAR_3->data->flags & VAR_0)
   VAR_4 = VAR_3->chan_rx;
  else
   VAR_4 = VAR_3->chan_tx;
 }

 FUNC_2(&VAR_3->lock);

 FUNC_3(VAR_3, VAR_1);

 if (VAR_4)
  FUNC_0(VAR_4);
}
