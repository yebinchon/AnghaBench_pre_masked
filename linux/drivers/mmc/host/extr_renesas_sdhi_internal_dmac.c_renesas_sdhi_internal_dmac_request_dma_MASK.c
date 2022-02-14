
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {int dma_issue; void* chan_tx; void* chan_rx; } ;
struct tmio_mmc_data {int dummy; } ;
struct TYPE_2__ {int dma_complete; } ;
struct renesas_sdhi {TYPE_1__ dma_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct renesas_sdhi* FUNC_0 (struct tmio_mmc_host*) ;
 int VAR_4 ;
 int FUNC_1 (struct tmio_mmc_host*,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct tmio_mmc_host *VAR_6,
           struct tmio_mmc_data *VAR_7)
{
 struct renesas_sdhi *VAR_8 = FUNC_0(VAR_6);


 FUNC_1(VAR_6, VAR_0,
         VAR_2);
 FUNC_1(VAR_6, VAR_1,
         VAR_3);


 VAR_6->chan_rx = VAR_6->chan_tx = (void *)0xdeadbeaf;

 FUNC_2(&VAR_8->dma_priv.dma_complete,
       VAR_4,
       (unsigned long)VAR_6);
 FUNC_2(&VAR_6->dma_issue,
       VAR_5,
       (unsigned long)VAR_6);
}
