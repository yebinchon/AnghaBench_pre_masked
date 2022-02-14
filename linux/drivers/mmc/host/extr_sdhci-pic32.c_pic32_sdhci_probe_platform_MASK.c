
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int caps; scalar_t__ ioaddr; } ;
struct platform_device {int dummy; } ;
struct pic32_sdhci_priv {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct platform_device*) ;
 struct sdhci_host* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3,
          struct pic32_sdhci_priv *VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6;
 struct sdhci_host *VAR_7 = FUNC_1(VAR_3);


 VAR_7->caps = FUNC_2(VAR_7->ioaddr + VAR_0);
 VAR_6 = (VAR_7->caps & VAR_1) >> 30;
 if (VAR_6 == VAR_2)
  FUNC_0(VAR_3);

 return VAR_5;
}
