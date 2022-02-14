
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_sprd_host {int clk_sdio; } ;
struct sdhci_host {int dummy; } ;


 struct sdhci_sprd_host* FUNC_0 (struct sdhci_host*) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct sdhci_host *VAR_1)
{
 struct sdhci_sprd_host *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_2->clk_sdio, VAR_0);
}
