
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_host {int saved_tuning_phase; } ;
struct sdhci_host {int dummy; } ;


 int FUNC_0 (struct sdhci_host*,int ) ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*) ;
 struct sdhci_msm_host* FUNC_3 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_5(struct sdhci_host *VAR_0)
{
 struct sdhci_pltfm_host *VAR_1 = FUNC_4(VAR_0);
 struct sdhci_msm_host *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;





 if (!FUNC_2(VAR_0))
  return 0;


 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_0(VAR_0, VAR_2->saved_tuning_phase);

 return VAR_3;
}
