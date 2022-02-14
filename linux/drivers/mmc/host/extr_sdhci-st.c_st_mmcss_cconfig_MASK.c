
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pltfm_host {int clk; } ;
struct sdhci_host {scalar_t__ ioaddr; struct mmc_host* mmc; } ;
struct mmc_host {int f_max; int caps; } ;
struct device_node {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct device_node*,char*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct device_node *VAR_25, struct sdhci_host *VAR_26)
{
 struct sdhci_pltfm_host *VAR_27 = FUNC_3(VAR_26);
 struct mmc_host *VAR_28 = VAR_26->mmc;
 u32 VAR_29, VAR_30, VAR_31, VAR_32;

 if (!FUNC_2(VAR_25, "st,sdhci-stih407"))
  return;

 VAR_29 = VAR_9;
 VAR_30 = VAR_10;
 VAR_31 = VAR_11;
 VAR_32 = VAR_12;

 FUNC_4(VAR_8,
   VAR_26->ioaddr + VAR_15);




 switch (VAR_28->f_max) {
 case 200000000:
  FUNC_0(VAR_27->clk, VAR_28->f_max);
  VAR_29 |= VAR_1;
  break;
 case 100000000:
  FUNC_0(VAR_27->clk, VAR_28->f_max);
  VAR_29 |= VAR_0;
  break;
 default:
  FUNC_0(VAR_27->clk, 50000000);
  VAR_29 |= VAR_2;
 }

 FUNC_4(VAR_29, VAR_26->ioaddr + VAR_16);

 if (!FUNC_1(VAR_28))
  VAR_30 |= VAR_14;
 else

  FUNC_4(VAR_24,
    VAR_26->ioaddr + VAR_23);

 if (VAR_28->caps & VAR_5) {

  VAR_30 |= VAR_7;
  VAR_31 |= VAR_21;

  VAR_32 |= VAR_22;

  VAR_32 |= VAR_6;
 }

 if (VAR_28->caps & VAR_4) {




  VAR_30 |= VAR_7;
  VAR_31 |= VAR_20;

  VAR_32 |= VAR_6;
 }

 if (VAR_28->caps & VAR_3)
  VAR_31 |= VAR_13;

 FUNC_4(VAR_30, VAR_26->ioaddr + VAR_17);
 FUNC_4(VAR_31, VAR_26->ioaddr + VAR_18);
 FUNC_4(VAR_32, VAR_26->ioaddr + VAR_19);
}
