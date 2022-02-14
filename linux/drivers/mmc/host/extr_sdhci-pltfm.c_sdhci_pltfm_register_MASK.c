
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_data {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct platform_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 struct sdhci_host* FUNC_5 (struct platform_device*,struct sdhci_pltfm_data const*,size_t) ;

int FUNC_6(struct platform_device *VAR_0,
   const struct sdhci_pltfm_data *VAR_1,
   size_t VAR_2)
{
 struct sdhci_host *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_5(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_3(VAR_0);

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  FUNC_4(VAR_0);

 return VAR_4;
}
