
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_mmc_platform_data {int top_ioaddr; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ clock; int ioaddr; } ;


 scalar_t__ VAR_0 ;
 struct st_mmc_platform_data* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct sdhci_host *VAR_1)
{
 int VAR_2 = 0;
 struct sdhci_pltfm_host *VAR_3 = FUNC_1(VAR_1);
 struct st_mmc_platform_data *VAR_4 = FUNC_0(VAR_3);

 if (VAR_1->clock > VAR_0) {
  FUNC_3(VAR_4->top_ioaddr);
  VAR_2 = FUNC_2(VAR_1->ioaddr);
 }

 return VAR_2;
}
