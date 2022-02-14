
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdhci_host {scalar_t__ ioaddr; } ;
struct platform_device {int dummy; } ;
struct pic32_sdhci_priv {int sys_clk; int base_clk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct sdhci_host* FUNC_1 (struct platform_device*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct platform_device*) ;
 struct pic32_sdhci_priv* FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct sdhci_host *VAR_2 = FUNC_1(VAR_1);
 struct pic32_sdhci_priv *VAR_3 = FUNC_4(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_2(VAR_2->ioaddr + VAR_0);
 FUNC_5(VAR_2, VAR_4 == (u32)~0);
 FUNC_0(VAR_3->base_clk);
 FUNC_0(VAR_3->sys_clk);
 FUNC_3(VAR_1);

 return 0;
}
