
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_omap_host {unsigned int bus_mode; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdhci_omap_host*,int ) ;
 int FUNC_1 (struct sdhci_omap_host*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sdhci_omap_host *VAR_3,
        unsigned int VAR_4)
{
 u32 VAR_5;

 if (VAR_3->bus_mode == VAR_4)
  return;

 VAR_5 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4 == VAR_1)
  VAR_5 |= VAR_0;
 else
  VAR_5 &= ~VAR_0;
 FUNC_1(VAR_3, VAR_2, VAR_5);

 VAR_3->bus_mode = VAR_4;
}
