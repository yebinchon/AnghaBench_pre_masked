
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct spear_sdhci {int clk; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct sdhci_host* FUNC_1 (struct platform_device*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sdhci_host*) ;
 struct spear_sdhci* FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct sdhci_host *VAR_2 = FUNC_1(VAR_1);
 struct spear_sdhci *VAR_3 = FUNC_4(VAR_2);
 int VAR_4 = 0;
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_2->ioaddr + VAR_0);
 if (VAR_5 == (u32)-1)
  VAR_4 = 1;

 FUNC_5(VAR_2, VAR_4);
 FUNC_0(VAR_3->clk);
 FUNC_3(VAR_2);

 return 0;
}
