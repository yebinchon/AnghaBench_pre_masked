
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int dummy; } ;
struct realtek_pci_sdmmc {struct rtsx_pcr* pcr; } ;
struct mmc_request {struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {int flags; scalar_t__ host_cookie; int sg_len; int sg; } ;


 int VAR_0 ;
 struct realtek_pci_sdmmc* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_1, struct mmc_request *VAR_2,
  int VAR_3)
{
 struct realtek_pci_sdmmc *VAR_4 = FUNC_0(VAR_1);
 struct rtsx_pcr *VAR_5 = VAR_4->pcr;
 struct mmc_data *VAR_6 = VAR_2->data;
 int VAR_7 = VAR_6->flags & VAR_0;

 FUNC_1(VAR_5, VAR_6->sg, VAR_6->sg_len, VAR_7);
 VAR_6->host_cookie = 0;
}
