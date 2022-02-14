
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenon_priv {scalar_t__ phy_type; int * emmc_phy_regs; struct xenon_emmc_phy_params* phy_params; } ;
struct xenon_emmc_phy_params {int dummy; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int mmc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xenon_emmc_phy_params* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 struct xenon_priv* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct sdhci_host *VAR_5)
{
 struct sdhci_pltfm_host *VAR_6 = FUNC_3(VAR_5);
 struct xenon_priv *VAR_7 = FUNC_2(VAR_6);
 struct xenon_emmc_phy_params *VAR_8;

 VAR_8 = FUNC_0(FUNC_1(VAR_5->mmc), sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_7->phy_params = VAR_8;
 if (VAR_7->phy_type == VAR_0)
  VAR_7->emmc_phy_regs = &VAR_3;
 else
  VAR_7->emmc_phy_regs = &VAR_4;

 return 0;
}
