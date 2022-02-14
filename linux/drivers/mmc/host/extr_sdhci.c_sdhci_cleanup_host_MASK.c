
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {int * align_buffer; int * adma_table; int align_addr; scalar_t__ adma_table_sz; scalar_t__ align_buffer_sz; struct mmc_host* mmc; } ;
struct TYPE_2__ {int vqmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int *,int ) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct sdhci_host *VAR_0)
{
 struct mmc_host *VAR_1 = VAR_0->mmc;

 if (!FUNC_0(VAR_1->supply.vqmmc))
  FUNC_3(VAR_1->supply.vqmmc);

 if (VAR_0->align_buffer)
  FUNC_1(FUNC_2(VAR_1), VAR_0->align_buffer_sz +
      VAR_0->adma_table_sz, VAR_0->align_buffer,
      VAR_0->align_addr);
 VAR_0->adma_table = ((void*)0);
 VAR_0->align_buffer = ((void*)0);
}
