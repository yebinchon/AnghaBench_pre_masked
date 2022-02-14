
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct pltfm_imx_data {int dummy; } ;
struct mmc_command {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdhci_host*,int ,int,int ) ;
 scalar_t__ FUNC_1 (struct pltfm_imx_data*) ;
 struct pltfm_imx_data* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_4(struct sdhci_host *VAR_2, struct mmc_command *VAR_3)
{
 struct sdhci_pltfm_host *VAR_4 = FUNC_3(VAR_2);
 struct pltfm_imx_data *VAR_5 = FUNC_2(VAR_4);


 FUNC_0(VAR_2, VAR_0,
   FUNC_1(VAR_5) ? 0xF : 0xE,
   VAR_1);
}
