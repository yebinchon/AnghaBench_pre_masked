
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int dummy; } ;
struct goldfish_mmc_host {scalar_t__ dma_done; int dma_in_use; } ;


 int FUNC_0 (struct goldfish_mmc_host*,struct mmc_data*) ;

__attribute__((used)) static void FUNC_1(struct goldfish_mmc_host *VAR_0,
         struct mmc_data *VAR_1)
{
 if (!VAR_0->dma_in_use) {
  FUNC_0(VAR_0, VAR_1);
  return;
 }
 if (VAR_0->dma_done)
  FUNC_0(VAR_0, VAR_1);
}
