
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {int chan_rx; int chan_tx; } ;
struct TYPE_2__ {int (* enable ) (struct tmio_mmc_host*,int) ;} ;
struct renesas_sdhi {TYPE_1__ dma_priv; } ;


 struct renesas_sdhi* FUNC_0 (struct tmio_mmc_host*) ;
 int FUNC_1 (struct tmio_mmc_host*,int) ;

__attribute__((used)) static void FUNC_2(struct tmio_mmc_host *VAR_0,
          bool VAR_1)
{
 struct renesas_sdhi *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_0->chan_tx || !VAR_0->chan_rx)
  return;

 if (VAR_2->dma_priv.enable)
  VAR_2->dma_priv.enable(VAR_0, VAR_1);
}
