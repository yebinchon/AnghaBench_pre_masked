
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {int dummy; } ;
struct TYPE_2__ {int dma_complete; } ;
struct renesas_sdhi {TYPE_1__ dma_priv; } ;


 struct renesas_sdhi* FUNC_0 (struct tmio_mmc_host*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct tmio_mmc_host *VAR_0) {
 struct renesas_sdhi *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->dma_priv.dma_complete);
}
