
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_host {unsigned int clk_rate; TYPE_1__* bulk_clks; } ;
struct sdhci_host {TYPE_2__* mmc; } ;
struct mmc_ios {int timing; } ;
struct clk {int dummy; } ;
struct TYPE_4__ {struct mmc_ios ios; } ;
struct TYPE_3__ {struct clk* clk; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*,unsigned int) ;
 int FUNC_2 (TYPE_2__*) ;
 unsigned int FUNC_3 (struct sdhci_host*,unsigned int) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (char*,int ,unsigned int,int ) ;
 struct sdhci_msm_host* FUNC_6 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_7 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_8(struct sdhci_host *VAR_0,
         unsigned int VAR_1)
{
 struct sdhci_pltfm_host *VAR_2 = FUNC_7(VAR_0);
 struct sdhci_msm_host *VAR_3 = FUNC_6(VAR_2);
 struct mmc_ios VAR_4 = VAR_0->mmc->ios;
 struct clk *VAR_5 = VAR_3->bulk_clks[0].clk;
 int VAR_6;

 VAR_1 = FUNC_3(VAR_0, VAR_1);
 VAR_6 = FUNC_1(VAR_5, VAR_1);
 if (VAR_6) {
  FUNC_5("%s: Failed to set clock at rate %u at timing %d\n",
         FUNC_2(VAR_0->mmc), VAR_1,
         VAR_4.timing);
  return;
 }
 VAR_3->clk_rate = VAR_1;
 FUNC_4("%s: Setting clock at rate %lu at timing %d\n",
   FUNC_2(VAR_0->mmc), FUNC_0(VAR_5),
   VAR_4.timing);
}
