
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenon_priv {struct xenon_emmc_phy_params* phy_params; } ;
struct TYPE_2__ {scalar_t__ pad_type; int reg; } ;
struct xenon_emmc_phy_params {TYPE_1__ pad_ctrl; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct xenon_priv* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_6,
         unsigned char VAR_7)
{
 struct sdhci_pltfm_host *VAR_8 = FUNC_1(VAR_6);
 struct xenon_priv *VAR_9 = FUNC_0(VAR_8);
 struct xenon_emmc_phy_params *VAR_10 = VAR_9->phy_params;

 if (VAR_10->pad_ctrl.pad_type == VAR_4) {
  FUNC_2(VAR_0, VAR_10->pad_ctrl.reg);
 } else if (VAR_10->pad_ctrl.pad_type == VAR_5) {
  if (VAR_7 == VAR_2)
   FUNC_2(VAR_0, VAR_10->pad_ctrl.reg);
  else if (VAR_7 == VAR_3)
   FUNC_2(VAR_1, VAR_10->pad_ctrl.reg);
 }
}
