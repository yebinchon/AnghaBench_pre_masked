
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xenon_priv {int init_card_type; struct xenon_emmc_phy_regs* emmc_phy_regs; struct xenon_emmc_phy_params* phy_params; } ;
struct xenon_emmc_phy_regs {int timing_adj; } ;
struct xenon_emmc_phy_params {int slow_mode; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ clock; } ;


 scalar_t__ VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 struct xenon_priv* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static bool FUNC_4(struct sdhci_host *VAR_3,
         unsigned char VAR_4)
{
 struct sdhci_pltfm_host *VAR_5 = FUNC_1(VAR_3);
 struct xenon_priv *VAR_6 = FUNC_0(VAR_5);
 struct xenon_emmc_phy_params *VAR_7 = VAR_6->phy_params;
 struct xenon_emmc_phy_regs *VAR_8 = VAR_6->emmc_phy_regs;
 u32 VAR_9;
 int VAR_10;

 if (VAR_3->clock > VAR_0)
  return 0;

 VAR_9 = FUNC_2(VAR_3, VAR_8->timing_adj);



 switch (VAR_4) {
 case 132:




  if (VAR_7->slow_mode) {
   VAR_9 |= VAR_2;
   VAR_10 = 1;
  } else {
   VAR_9 &= ~VAR_2;
   VAR_10 = 0;
  }
  break;
 case 128:
 case 129:
 case 130:
 case 131:
  if ((VAR_6->init_card_type == VAR_1) ||
      VAR_7->slow_mode) {
   VAR_9 |= VAR_2;
   VAR_10 = 1;
   break;
  }

 default:
  VAR_9 &= ~VAR_2;
  VAR_10 = 0;
 }

 FUNC_3(VAR_3, VAR_9, VAR_8->timing_adj);
 return VAR_10;
}
