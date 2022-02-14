
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int clk; } ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;

__attribute__((used)) static unsigned int FUNC_2(struct sdhci_host *VAR_1)
{
 struct sdhci_pltfm_host *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->clk, VAR_0);
}
