
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int complete_work; int complete_wq; } ;
struct mmc_request {int dummy; } ;


 int FUNC_0 (struct sdhci_host*,struct mmc_request*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_0, struct mmc_request *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0->complete_wq, &VAR_0->complete_work);
}
