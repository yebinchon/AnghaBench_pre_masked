
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdhci_pltfm_host {int clk; } ;
struct sdhci_host {unsigned int max_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct sdhci_host*,int) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_2, unsigned int VAR_3)
{
 struct sdhci_pltfm_host *VAR_4;
 unsigned long VAR_5;
 int VAR_6;
 u16 VAR_7;

 VAR_4 = FUNC_3(VAR_2);
 VAR_5 = FUNC_1(VAR_4->clk);

 FUNC_4(VAR_2, 0, VAR_0);

 if (VAR_3 == 0)
  return;

 if (FUNC_0(VAR_3 > VAR_2->max_clk))
  VAR_3 = VAR_2->max_clk;

 for (VAR_6 = 1; VAR_6 < 256; VAR_6 *= 2) {
  if ((VAR_5 / VAR_6) <= VAR_3)
   break;
 }
 VAR_6 >>= 1;

 VAR_7 = VAR_6 << VAR_1;

 FUNC_2(VAR_2, VAR_7);
}
