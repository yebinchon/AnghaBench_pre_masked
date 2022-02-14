
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_host {TYPE_1__* bulk_clks; } ;
struct sdhci_host {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {struct clk* clk; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct clk*,int ) ;
 struct sdhci_msm_host* FUNC_1 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_2 (struct sdhci_host*) ;

__attribute__((used)) static unsigned int FUNC_3(struct sdhci_host *VAR_1)
{
 struct sdhci_pltfm_host *VAR_2 = FUNC_2(VAR_1);
 struct sdhci_msm_host *VAR_3 = FUNC_1(VAR_2);
 struct clk *VAR_4 = VAR_3->bulk_clks[0].clk;

 return FUNC_0(VAR_4, VAR_0);
}
