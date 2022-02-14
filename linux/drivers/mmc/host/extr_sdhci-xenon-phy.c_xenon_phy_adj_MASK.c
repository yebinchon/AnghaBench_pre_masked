
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenon_priv {scalar_t__ clock; scalar_t__ bus_width; scalar_t__ timing; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ clock; } ;
struct mmc_ios {scalar_t__ bus_width; scalar_t__ timing; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct xenon_priv* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,scalar_t__) ;
 int FUNC_3 (struct sdhci_host*) ;

int FUNC_4(struct sdhci_host *VAR_2, struct mmc_ios *VAR_3)
{
 struct sdhci_pltfm_host *VAR_4 = FUNC_1(VAR_2);
 struct xenon_priv *VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = 0;

 if (!VAR_2->clock) {
  VAR_5->clock = 0;
  return 0;
 }






 if ((VAR_2->clock == VAR_5->clock) &&
     (VAR_3->bus_width == VAR_5->bus_width) &&
     (VAR_3->timing == VAR_5->timing))
  return 0;

 FUNC_2(VAR_2, VAR_3->timing);


 VAR_5->bus_width = VAR_3->bus_width;

 VAR_5->timing = VAR_3->timing;
 VAR_5->clock = VAR_2->clock;


 if (VAR_3->timing == VAR_0)
  return 0;

 if (VAR_2->clock > VAR_1)
  VAR_6 = FUNC_3(VAR_2);
 return VAR_6;
}
