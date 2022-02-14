
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 struct sdhci_host* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct sdhci_host*,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct sdhci_host *VAR_2 = FUNC_0(VAR_0);

 FUNC_4(VAR_2, 1);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_0);

 return 0;
}
