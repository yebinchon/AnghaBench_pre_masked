
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct realtek_pci_sdmmc {int work; int using_cookie; int host_mutex; struct mmc_request* mrq; } ;
struct mmc_request {int cmd; struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {int dummy; } ;


 struct realtek_pci_sdmmc* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct realtek_pci_sdmmc*,struct mmc_data*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,struct mmc_data*) ;

__attribute__((used)) static void FUNC_7(struct mmc_host *VAR_0, struct mmc_request *VAR_1)
{
 struct realtek_pci_sdmmc *VAR_2 = FUNC_0(VAR_0);
 struct mmc_data *VAR_3 = VAR_1->data;

 FUNC_1(&VAR_2->host_mutex);
 VAR_2->mrq = VAR_1;
 FUNC_2(&VAR_2->host_mutex);

 if (FUNC_5(VAR_1->cmd) || FUNC_6(VAR_1->cmd, VAR_3))
  VAR_2->using_cookie = FUNC_4(VAR_2, VAR_3, 0);

 FUNC_3(&VAR_2->work);
}
