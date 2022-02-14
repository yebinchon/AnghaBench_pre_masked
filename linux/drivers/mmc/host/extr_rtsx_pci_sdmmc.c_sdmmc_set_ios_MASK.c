
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int pcr_mutex; } ;
struct realtek_pci_sdmmc {int vpclk; int double_clk; int initial_mode; int clock; int ssc_depth; struct rtsx_pcr* pcr; scalar_t__ eject; } ;
struct mmc_ios {int clock; int timing; int power_mode; int bus_width; } ;
struct mmc_host {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct realtek_pci_sdmmc* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct rtsx_pcr*,int ) ;
 int FUNC_4 (struct rtsx_pcr*) ;
 int FUNC_5 (struct rtsx_pcr*,int,int ,int,int,int) ;
 int FUNC_6 (struct realtek_pci_sdmmc*,int ) ;
 int FUNC_7 (struct realtek_pci_sdmmc*,int ) ;
 int FUNC_8 (struct realtek_pci_sdmmc*,int ) ;

__attribute__((used)) static void FUNC_9(struct mmc_host *VAR_4, struct mmc_ios *VAR_5)
{
 struct realtek_pci_sdmmc *VAR_6 = FUNC_0(VAR_4);
 struct rtsx_pcr *VAR_7 = VAR_6->pcr;

 if (VAR_6->eject)
  return;

 if (FUNC_3(VAR_6->pcr, VAR_0))
  return;

 FUNC_1(&VAR_7->pcr_mutex);

 FUNC_4(VAR_7);

 FUNC_6(VAR_6, VAR_5->bus_width);
 FUNC_7(VAR_6, VAR_5->power_mode);
 FUNC_8(VAR_6, VAR_5->timing);

 VAR_6->vpclk = 0;
 VAR_6->double_clk = 1;

 switch (VAR_5->timing) {
 case 130:
 case 128:
  VAR_6->ssc_depth = VAR_2;
  VAR_6->vpclk = 1;
  VAR_6->double_clk = 0;
  break;
 case 132:
 case 131:
 case 129:
  VAR_6->ssc_depth = VAR_1;
  break;
 default:
  VAR_6->ssc_depth = VAR_3;
  break;
 }

 VAR_6->initial_mode = (VAR_5->clock <= 1000000) ? 1 : 0;

 VAR_6->clock = VAR_5->clock;
 FUNC_5(VAR_7, VAR_5->clock, VAR_6->ssc_depth,
   VAR_6->initial_mode, VAR_6->double_clk, VAR_6->vpclk);

 FUNC_2(&VAR_7->pcr_mutex);
}
