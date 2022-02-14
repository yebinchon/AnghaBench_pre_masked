
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_offset {int core_pwrctl_ctl; int core_pwrctl_mask; int core_pwrctl_status; } ;
struct sdhci_msm_host {struct sdhci_msm_offset* offset; } ;
struct sdhci_host {int mmc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sdhci_msm_host*,struct sdhci_host*,int ) ;
 int FUNC_2 (char*,int ,int ,int ,int ) ;
 struct sdhci_msm_host* FUNC_3 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_0)
{
 struct sdhci_pltfm_host *VAR_1 = FUNC_4(VAR_0);
 struct sdhci_msm_host *VAR_2 = FUNC_3(VAR_1);
 const struct sdhci_msm_offset *VAR_3 =
     VAR_2->offset;

 FUNC_2("%s: PWRCTL_STATUS: 0x%08x | PWRCTL_MASK: 0x%08x | PWRCTL_CTL: 0x%08x\n",
  FUNC_0(VAR_0->mmc),
  FUNC_1(VAR_2, VAR_0, VAR_3->core_pwrctl_status),
  FUNC_1(VAR_2, VAR_0, VAR_3->core_pwrctl_mask),
  FUNC_1(VAR_2, VAR_0, VAR_3->core_pwrctl_ctl));
}
