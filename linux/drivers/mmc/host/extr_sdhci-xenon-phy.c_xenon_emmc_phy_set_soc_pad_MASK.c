
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenon_priv {struct xenon_emmc_phy_params* phy_params; } ;
struct TYPE_2__ {int (* set_soc_pad ) (struct sdhci_host*,unsigned char) ;int reg; } ;
struct xenon_emmc_phy_params {TYPE_1__ pad_ctrl; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;


 struct xenon_priv* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,unsigned char) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_0,
           unsigned char VAR_1)
{
 struct sdhci_pltfm_host *VAR_2 = FUNC_1(VAR_0);
 struct xenon_priv *VAR_3 = FUNC_0(VAR_2);
 struct xenon_emmc_phy_params *VAR_4 = VAR_3->phy_params;

 if (!VAR_4->pad_ctrl.reg)
  return;

 if (VAR_4->pad_ctrl.set_soc_pad)
  VAR_4->pad_ctrl.set_soc_pad(VAR_0, VAR_1);
}
