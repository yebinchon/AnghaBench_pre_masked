
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xenon_priv {scalar_t__ phy_type; scalar_t__ init_card_type; struct xenon_emmc_phy_regs* emmc_phy_regs; struct xenon_emmc_phy_params* phy_params; } ;
struct xenon_emmc_phy_regs {int logic_timing_val; int logic_timing_adj; int func_ctrl; int pad_ctrl2; int timing_adj; int pad_ctrl; } ;
struct xenon_emmc_phy_params {int znr; int zpr; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int mmc; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;



 scalar_t__ VAR_2 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct xenon_priv* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*,int,int ) ;
 int FUNC_6 (struct sdhci_host*,int,int ) ;
 int FUNC_7 (struct sdhci_host*) ;
 int FUNC_8 (struct sdhci_host*) ;
 scalar_t__ FUNC_9 (struct sdhci_host*,unsigned char) ;

__attribute__((used)) static void FUNC_10(struct sdhci_host *VAR_28,
          unsigned char VAR_29)
{
 u32 VAR_30;
 struct sdhci_pltfm_host *VAR_31 = FUNC_3(VAR_28);
 struct xenon_priv *VAR_32 = FUNC_2(VAR_31);
 struct xenon_emmc_phy_params *VAR_33 = VAR_32->phy_params;
 struct xenon_emmc_phy_regs *VAR_34 = VAR_32->emmc_phy_regs;

 FUNC_0(FUNC_1(VAR_28->mmc), "eMMC PHY setting starts\n");


 VAR_30 = FUNC_4(VAR_28, VAR_34->pad_ctrl);
 VAR_30 |= (VAR_21 | VAR_20 |
  VAR_22 | VAR_23);

 VAR_30 |= VAR_19;
 FUNC_5(VAR_28, VAR_30, VAR_34->pad_ctrl);


 if (VAR_32->phy_type == VAR_0) {
  VAR_30 = FUNC_4(VAR_28, VAR_17);
  VAR_30 |= (VAR_14 | VAR_16);
  VAR_30 &= ~(VAR_13 | VAR_15);
  FUNC_5(VAR_28, VAR_30, VAR_17);
 } else {
  VAR_30 = FUNC_4(VAR_28, VAR_18);
  VAR_30 |= (VAR_10 | VAR_12);
  VAR_30 &= ~(VAR_9 | VAR_11);
  FUNC_5(VAR_28, VAR_30, VAR_18);
 }

 if (VAR_29 == VAR_1) {
  FUNC_9(VAR_28, VAR_29);
  goto phy_init;
 }





 VAR_30 = FUNC_4(VAR_28, VAR_34->timing_adj);
 if (VAR_32->init_card_type == VAR_2)
  VAR_30 |= VAR_24;
 else
  VAR_30 &= ~VAR_24;
 FUNC_5(VAR_28, VAR_30, VAR_34->timing_adj);

 if (FUNC_9(VAR_28, VAR_29))
  goto phy_init;






 VAR_30 = FUNC_4(VAR_28, VAR_34->pad_ctrl2);
 VAR_30 &= ~((VAR_25 << VAR_26) | VAR_27);
 VAR_30 |= ((VAR_33->znr << VAR_26) | VAR_33->zpr);
 FUNC_5(VAR_28, VAR_30, VAR_34->pad_ctrl2);





 VAR_30 = FUNC_4(VAR_28, VAR_4);
 VAR_30 &= ~VAR_3;
 FUNC_6(VAR_28, VAR_30, VAR_4);

 VAR_30 = FUNC_4(VAR_28, VAR_34->func_ctrl);
 switch (VAR_29) {
 case 129:
  VAR_30 |= (VAR_7 << VAR_8) |
         VAR_5;
  VAR_30 &= ~VAR_6;
  break;
 case 128:
 case 130:
  VAR_30 |= (VAR_7 << VAR_8) |
         VAR_5 | VAR_6;
  break;
 default:
  VAR_30 &= ~((VAR_7 << VAR_8) |
    VAR_5);
  VAR_30 |= VAR_6;
 }
 FUNC_5(VAR_28, VAR_30, VAR_34->func_ctrl);


 VAR_30 = FUNC_4(VAR_28, VAR_4);
 VAR_30 |= VAR_3;
 FUNC_6(VAR_28, VAR_30, VAR_4);

 if (VAR_29 == 129)

  FUNC_5(VAR_28, VAR_34->logic_timing_val,
        VAR_34->logic_timing_adj);
 else
  FUNC_7(VAR_28);

phy_init:
 FUNC_8(VAR_28);

 FUNC_0(FUNC_1(VAR_28->mmc), "eMMC PHY setting completes\n");
}
