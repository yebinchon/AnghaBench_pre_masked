
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {scalar_t__ ioaddr; } ;
struct platform_device {int dummy; } ;
struct f_sdhost_priv {int clk; int clk_iface; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct sdhci_host* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sdhci_host*) ;
 struct f_sdhost_priv* FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct sdhci_host *VAR_2 = FUNC_1(VAR_1);
 struct f_sdhost_priv *VAR_3 = FUNC_5(VAR_2);

 FUNC_6(VAR_2, FUNC_3(VAR_2->ioaddr + VAR_0) ==
     0xffffffff);

 FUNC_0(VAR_3->clk_iface);
 FUNC_0(VAR_3->clk);

 FUNC_4(VAR_2);
 FUNC_2(VAR_1, ((void*)0));

 return 0;
}
