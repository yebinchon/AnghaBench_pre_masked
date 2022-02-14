
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int extra_caps; } ;
struct realtek_pci_sdmmc {struct rtsx_pcr* pcr; struct mmc_host* mmc; } ;
struct mmc_host {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct realtek_pci_sdmmc*) ;

__attribute__((used)) static void FUNC_2(struct realtek_pci_sdmmc *VAR_10)
{
 struct mmc_host *VAR_11 = VAR_10->mmc;
 struct rtsx_pcr *VAR_12 = VAR_10->pcr;

 FUNC_0(FUNC_1(VAR_10), "pcr->extra_caps = 0x%x\n", VAR_12->extra_caps);

 if (VAR_12->extra_caps & VAR_4)
  VAR_11->caps |= VAR_9;
 if (VAR_12->extra_caps & VAR_3)
  VAR_11->caps |= VAR_8;
 if (VAR_12->extra_caps & VAR_2)
  VAR_11->caps |= VAR_7;
 if (VAR_12->extra_caps & VAR_1)
  VAR_11->caps |= VAR_5;
 if (VAR_12->extra_caps & VAR_0)
  VAR_11->caps |= VAR_6;
}
