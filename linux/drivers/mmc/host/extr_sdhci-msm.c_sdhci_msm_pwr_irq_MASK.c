
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_host {int pwr_irq_flag; } ;
struct sdhci_host {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct sdhci_msm_host*) ;
 int FUNC_1 (struct sdhci_host*,int) ;
 struct sdhci_msm_host* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct sdhci_host *VAR_3 = (struct sdhci_host *)VAR_2;
 struct sdhci_pltfm_host *VAR_4 = FUNC_3(VAR_3);
 struct sdhci_msm_host *VAR_5 = FUNC_2(VAR_4);

 FUNC_1(VAR_3, VAR_1);
 VAR_5->pwr_irq_flag = 1;
 FUNC_0(VAR_5);


 return VAR_0;
}
