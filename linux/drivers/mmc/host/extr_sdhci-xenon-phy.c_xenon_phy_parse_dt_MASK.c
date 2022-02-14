
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,char const**) ;
 int FUNC_1 (struct device_node*,struct sdhci_host*,char const*) ;

int FUNC_2(struct device_node *VAR_0, struct sdhci_host *VAR_1)
{
 const char *VAR_2 = ((void*)0);

 if (!FUNC_0(VAR_0, "marvell,xenon-phy-type", &VAR_2))
  return FUNC_1(VAR_0, VAR_1, VAR_2);

 return FUNC_1(VAR_0, VAR_1, "emmc 5.1 phy");
}
