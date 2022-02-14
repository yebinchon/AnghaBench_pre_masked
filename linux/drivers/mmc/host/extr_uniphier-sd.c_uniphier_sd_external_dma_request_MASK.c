
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_sd_priv {struct dma_chan* chan; } ;
struct tmio_mmc_host {int dma_issue; struct dma_chan* chan_tx; struct dma_chan* chan_rx; int mmc; } ;
struct tmio_mmc_data {int dummy; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ,char*) ;
 struct dma_chan* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,unsigned long) ;
 int VAR_0 ;
 struct uniphier_sd_priv* FUNC_5 (struct tmio_mmc_host*) ;

__attribute__((used)) static void FUNC_6(struct tmio_mmc_host *VAR_1,
          struct tmio_mmc_data *VAR_2)
{
 struct uniphier_sd_priv *VAR_3 = FUNC_5(VAR_1);
 struct dma_chan *VAR_4;

 VAR_4 = FUNC_2(FUNC_3(VAR_1->mmc), "rx-tx");
 if (FUNC_0(VAR_4)) {
  FUNC_1(FUNC_3(VAR_1->mmc),
    "failed to request DMA channel. falling back to PIO\n");
  return;
 }


 VAR_3->chan = VAR_4;
 VAR_1->chan_rx = VAR_4;
 VAR_1->chan_tx = VAR_4;

 FUNC_4(&VAR_1->dma_issue, VAR_0,
       (unsigned long)VAR_1);
}
