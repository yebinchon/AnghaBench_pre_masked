
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sdhci_tegra_soc_data {int nvquirks; } ;
struct sdhci_tegra {struct sdhci_tegra_soc_data* soc_data; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct mmc_request {TYPE_1__* cmd; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mmc_host*) ;
 struct sdhci_tegra* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_2,
      struct mmc_request *VAR_3, u64 *VAR_4)
{
 struct sdhci_pltfm_host *VAR_5 = FUNC_3(FUNC_1(VAR_2));
 struct sdhci_tegra *VAR_6 = FUNC_2(VAR_5);
 const struct sdhci_tegra_soc_data *VAR_7 = VAR_6->soc_data;

 if (VAR_7->nvquirks & VAR_1 &&
     VAR_3->cmd->flags & VAR_0)
  *VAR_4 |= FUNC_0(1);
}
