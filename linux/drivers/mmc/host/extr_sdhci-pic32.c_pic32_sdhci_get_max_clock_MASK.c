
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int dummy; } ;
struct pic32_sdhci_priv {int base_clk; } ;


 unsigned int FUNC_0 (int ) ;
 struct pic32_sdhci_priv* FUNC_1 (struct sdhci_host*) ;

__attribute__((used)) static unsigned int FUNC_2(struct sdhci_host *VAR_0)
{
 struct pic32_sdhci_priv *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->base_clk);
}
