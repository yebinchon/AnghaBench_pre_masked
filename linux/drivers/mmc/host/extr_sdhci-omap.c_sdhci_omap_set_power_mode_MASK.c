
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_omap_host {scalar_t__ bus_mode; int power_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sdhci_omap_host*) ;

__attribute__((used)) static void FUNC_1(struct sdhci_omap_host *VAR_1,
          u8 VAR_2)
{
 if (VAR_1->bus_mode == VAR_0)
  FUNC_0(VAR_1);
 VAR_1->power_mode = VAR_2;
}
