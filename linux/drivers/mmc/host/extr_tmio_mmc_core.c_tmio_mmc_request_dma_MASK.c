
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {int * chan_rx; int * chan_tx; TYPE_1__* dma_ops; } ;
struct tmio_mmc_data {int dummy; } ;
struct TYPE_2__ {int (* request ) (struct tmio_mmc_host*,struct tmio_mmc_data*) ;} ;


 int FUNC_0 (struct tmio_mmc_host*,struct tmio_mmc_data*) ;

__attribute__((used)) static inline void FUNC_1(struct tmio_mmc_host *VAR_0,
     struct tmio_mmc_data *VAR_1)
{
 if (VAR_0->dma_ops) {
  VAR_0->dma_ops->request(VAR_0, VAR_1);
 } else {
  VAR_0->chan_tx = ((void*)0);
  VAR_0->chan_rx = ((void*)0);
 }
}
