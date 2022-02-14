
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_host {unsigned int clk_rate; } ;
struct sdhci_host {int dummy; } ;


 int FUNC_0 (struct sdhci_host*,unsigned int) ;
 int FUNC_1 (struct sdhci_host*,unsigned int) ;
 int FUNC_2 (struct sdhci_host*) ;
 struct sdhci_msm_host* FUNC_3 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_0, unsigned int VAR_1)
{
 struct sdhci_pltfm_host *VAR_2 = FUNC_4(VAR_0);
 struct sdhci_msm_host *VAR_3 = FUNC_3(VAR_2);

 if (!VAR_1) {
  VAR_3->clk_rate = VAR_1;
  goto out;
 }

 FUNC_2(VAR_0);

 FUNC_1(VAR_0, VAR_1);
out:
 FUNC_0(VAR_0, VAR_1);
}
