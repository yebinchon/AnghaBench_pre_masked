
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct realtek_pci_sdmmc {int cookie_sg_count; } ;
struct mmc_request {struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {scalar_t__ host_cookie; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 struct realtek_pci_sdmmc* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct realtek_pci_sdmmc*,struct mmc_data*,int) ;
 int FUNC_4 (struct realtek_pci_sdmmc*) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_0, struct mmc_request *VAR_1)
{
 struct realtek_pci_sdmmc *VAR_2 = FUNC_2(VAR_0);
 struct mmc_data *VAR_3 = VAR_1->data;

 if (VAR_3->host_cookie) {
  FUNC_1(FUNC_4(VAR_2),
   "error: reset data->host_cookie = %d\n",
   VAR_3->host_cookie);
  VAR_3->host_cookie = 0;
 }

 FUNC_3(VAR_2, VAR_3, 1);
 FUNC_0(FUNC_4(VAR_2), "pre dma sg: %d\n", VAR_2->cookie_sg_count);
}
