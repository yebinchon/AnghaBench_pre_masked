
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenon_priv {scalar_t__ phy_type; int phy_params; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int mmc; } ;
struct device_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (int ,int ,char const*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 struct xenon_priv* FUNC_3 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*,struct device_node*,int ) ;

__attribute__((used)) static int FUNC_7(struct device_node *VAR_3, struct sdhci_host *VAR_4,
    const char *VAR_5)
{
 struct sdhci_pltfm_host *VAR_6 = FUNC_4(VAR_4);
 struct xenon_priv *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;

 VAR_7->phy_type = FUNC_1(VAR_2, VAR_1, VAR_5);
 if (VAR_7->phy_type < 0) {
  FUNC_0(FUNC_2(VAR_4->mmc),
   "Unable to determine PHY name %s. Use default eMMC 5.1 PHY\n",
   VAR_5);
  VAR_7->phy_type = VAR_0;
 }

 VAR_8 = FUNC_5(VAR_4);
 if (VAR_8)
  return VAR_8;

 return FUNC_6(VAR_4, VAR_3, VAR_7->phy_params);
}
