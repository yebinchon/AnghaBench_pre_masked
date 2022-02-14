
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_sd_priv {int caps; } ;
struct tmio_mmc_host {int dma_issue; void* chan_tx; void* chan_rx; } ;
struct tmio_mmc_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned long) ;
 int VAR_1 ;
 struct uniphier_sd_priv* FUNC_1 (struct tmio_mmc_host*) ;

__attribute__((used)) static void FUNC_2(struct tmio_mmc_host *VAR_2,
          struct tmio_mmc_data *VAR_3)
{
 struct uniphier_sd_priv *VAR_4 = FUNC_1(VAR_2);





 if (!(VAR_4->caps & VAR_0))
  VAR_2->chan_rx = (void *)0xdeadbeaf;

 VAR_2->chan_tx = (void *)0xdeadbeaf;

 FUNC_0(&VAR_2->dma_issue, VAR_1,
       (unsigned long)VAR_2);
}
