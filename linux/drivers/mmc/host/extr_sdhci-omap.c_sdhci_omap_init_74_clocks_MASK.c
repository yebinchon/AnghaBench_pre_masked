
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_omap_host {scalar_t__ power_mode; } ;
struct sdhci_host {int irq; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct sdhci_omap_host*,int ) ;
 int FUNC_7 (struct sdhci_omap_host*,int ,int) ;
 struct sdhci_omap_host* FUNC_8 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_9 (struct sdhci_host*) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static void FUNC_11(struct sdhci_host *VAR_7, u8 VAR_8)
{
 u32 VAR_9;
 ktime_t VAR_10;
 struct sdhci_pltfm_host *VAR_11 = FUNC_9(VAR_7);
 struct sdhci_omap_host *VAR_12 = FUNC_8(VAR_11);

 if (VAR_12->power_mode == VAR_8)
  return;

 if (VAR_8 != VAR_2)
  return;

 FUNC_1(VAR_7->irq);

 VAR_9 = FUNC_6(VAR_12, VAR_4);
 VAR_9 |= VAR_0;
 FUNC_7(VAR_12, VAR_4, VAR_9);
 FUNC_7(VAR_12, VAR_3, 0x0);


 VAR_10 = FUNC_3(FUNC_5(), VAR_6);
 while (1) {
  bool VAR_13 = FUNC_4(FUNC_5(), VAR_10);

  if (FUNC_6(VAR_12, VAR_5) & VAR_1)
   break;
  if (FUNC_0(VAR_13))
   return;
  FUNC_10(5, 10);
 }

 VAR_9 = FUNC_6(VAR_12, VAR_4);
 VAR_9 &= ~VAR_0;
 FUNC_7(VAR_12, VAR_4, VAR_9);
 FUNC_7(VAR_12, VAR_5, VAR_1);

 FUNC_2(VAR_7->irq);
}
