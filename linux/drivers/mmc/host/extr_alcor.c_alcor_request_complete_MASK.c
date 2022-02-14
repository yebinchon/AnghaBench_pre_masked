
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int dummy; } ;
struct alcor_sdmmc_host {scalar_t__ dma_on; int * data; int * cmd; struct mmc_request* mrq; int timeout_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct alcor_sdmmc_host*) ;
 int FUNC_2 (int ,struct mmc_request*) ;

__attribute__((used)) static void FUNC_3(struct alcor_sdmmc_host *VAR_0,
       bool VAR_1)
{
 struct mmc_request *VAR_2;





 if (!VAR_0->mrq)
  return;

 if (VAR_1)
  FUNC_0(&VAR_0->timeout_work);

 VAR_2 = VAR_0->mrq;

 VAR_0->mrq = ((void*)0);
 VAR_0->cmd = ((void*)0);
 VAR_0->data = ((void*)0);
 VAR_0->dma_on = 0;

 FUNC_2(FUNC_1(VAR_0), VAR_2);
}
