
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {int dummy; } ;
struct TYPE_2__ {int dma_dataend; } ;
struct renesas_sdhi {TYPE_1__ dma_priv; } ;


 int FUNC_0 (int *) ;
 struct renesas_sdhi* FUNC_1 (struct tmio_mmc_host*) ;

__attribute__((used)) static void FUNC_2(struct tmio_mmc_host *VAR_0)
{
 struct renesas_sdhi *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->dma_priv.dma_dataend);
}
