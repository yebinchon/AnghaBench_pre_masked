
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sdhci_tegra_autocal_offsets {int pull_down_sdr104; int pull_up_sdr104; int pull_down_hs400; int pull_up_hs400; int pull_down_1v8; int pull_up_1v8; int pull_down_3v3; int pull_up_3v3; } ;
struct sdhci_tegra {struct sdhci_tegra_autocal_offsets autocal_offsets; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {TYPE_1__* mmc; scalar_t__ ioaddr; } ;
struct mmc_ios {int timing; int signal_voltage; } ;
struct TYPE_2__ {struct mmc_ios ios; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int,int,int,int) ;
 struct sdhci_tegra* FUNC_3 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*,int ) ;
 int FUNC_6 (struct sdhci_host*,int,int ) ;
 int FUNC_7 (struct sdhci_host*,int) ;
 int FUNC_8 (struct sdhci_host*,int) ;
 int FUNC_9 (struct sdhci_host*,int) ;
 int FUNC_10 (struct sdhci_host*,int ,int) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static void FUNC_12(struct sdhci_host *VAR_6)
{
 struct sdhci_pltfm_host *VAR_7 = FUNC_4(VAR_6);
 struct sdhci_tegra *VAR_8 = FUNC_3(VAR_7);
 struct sdhci_tegra_autocal_offsets VAR_9 =
   VAR_8->autocal_offsets;
 struct mmc_ios *VAR_10 = &VAR_6->mmc->ios;
 bool VAR_11;
 u16 VAR_12;
 u32 VAR_13;
 int VAR_14;

 switch (VAR_10->timing) {
 case 128:
  VAR_12 = VAR_9.pull_down_sdr104 << 8 | VAR_9.pull_up_sdr104;
  break;
 case 129:
  VAR_12 = VAR_9.pull_down_hs400 << 8 | VAR_9.pull_up_hs400;
  break;
 default:
  if (VAR_10->signal_voltage == VAR_0)
   VAR_12 = VAR_9.pull_down_1v8 << 8 | VAR_9.pull_up_1v8;
  else
   VAR_12 = VAR_9.pull_down_3v3 << 8 | VAR_9.pull_up_3v3;
 }


 FUNC_9(VAR_6, VAR_12);

 VAR_11 = FUNC_8(VAR_6, 0);

 FUNC_7(VAR_6, 1);

 VAR_13 = FUNC_5(VAR_6, VAR_4);
 VAR_13 |= VAR_1 | VAR_2;
 FUNC_6(VAR_6, VAR_13, VAR_4);

 FUNC_11(1, 2);

 VAR_14 = FUNC_2(VAR_6->ioaddr + VAR_5,
     VAR_13, !(VAR_13 & VAR_3),
     1000, 10000);

 FUNC_7(VAR_6, 0);

 FUNC_8(VAR_6, VAR_11);

 if (VAR_14) {
  FUNC_0(FUNC_1(VAR_6->mmc), "Pad autocal timed out\n");


  VAR_13 = FUNC_5(VAR_6, VAR_4);
  VAR_13 &= ~VAR_1;
  FUNC_6(VAR_6, VAR_13, VAR_4);

  VAR_14 = FUNC_10(VAR_6, VAR_10->signal_voltage, 0);
  if (VAR_14 < 0)
   FUNC_0(FUNC_1(VAR_6->mmc),
    "Setting drive strengths failed: %d\n", VAR_14);
 }
}
