
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_tegra {unsigned long curr_clk_rate; int pad_calib_required; scalar_t__ ddr_signaling; } ;
struct sdhci_pltfm_host {int clk; } ;
struct sdhci_host {unsigned long max_clk; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 struct sdhci_tegra* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;
 void FUNC_4 (struct sdhci_host*,unsigned int) ;
 int FUNC_5 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_6(struct sdhci_host *VAR_0, unsigned int VAR_1)
{
 struct sdhci_pltfm_host *VAR_2 = FUNC_3(VAR_0);
 struct sdhci_tegra *VAR_3 = FUNC_2(VAR_2);
 unsigned long VAR_4;

 if (!VAR_1)
  return FUNC_4(VAR_0, VAR_1);
 VAR_4 = VAR_3->ddr_signaling ? VAR_1 * 2 : VAR_1;
 FUNC_1(VAR_2->clk, VAR_4);
 VAR_3->curr_clk_rate = VAR_4;
 if (VAR_3->ddr_signaling)
  VAR_0->max_clk = VAR_4;
 else
  VAR_0->max_clk = FUNC_0(VAR_2->clk);

 FUNC_4(VAR_0, VAR_1);

 if (VAR_3->pad_calib_required) {
  FUNC_5(VAR_0);
  VAR_3->pad_calib_required = 0;
 }
}
