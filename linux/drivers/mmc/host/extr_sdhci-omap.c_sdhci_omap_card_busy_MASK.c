
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_omap_host {int dummy; } ;
struct sdhci_host {int ier; int irq; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sdhci_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct sdhci_omap_host*,int ) ;
 int FUNC_4 (struct sdhci_omap_host*,int ,int) ;
 struct sdhci_omap_host* FUNC_5 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_6 (struct sdhci_host*) ;
 int FUNC_7 (struct sdhci_host*,int,int ) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct mmc_host *VAR_11)
{
 u32 VAR_12, VAR_13;
 int VAR_14 = 0;
 struct sdhci_host *VAR_15 = FUNC_2(VAR_11);
 struct sdhci_pltfm_host *VAR_16;
 struct sdhci_omap_host *VAR_17;
 u32 VAR_18 = VAR_15->ier;

 VAR_16 = FUNC_6(VAR_15);
 VAR_17 = FUNC_5(VAR_16);

 VAR_12 = FUNC_3(VAR_17, VAR_8);
 VAR_13 = FUNC_3(VAR_17, VAR_7);
 VAR_12 &= ~VAR_1;
 if (VAR_13 & VAR_0)
  VAR_12 |= VAR_1;
 VAR_12 |= VAR_2;
 FUNC_4(VAR_17, VAR_8, VAR_12);

 FUNC_0(VAR_15->irq);
 VAR_18 |= VAR_5;
 FUNC_7(VAR_15, VAR_18, VAR_6);
 FUNC_7(VAR_15, VAR_18, VAR_10);





 FUNC_8(50, 100);
 VAR_12 = FUNC_3(VAR_17, VAR_9);
 if ((VAR_12 & VAR_3) || !(VAR_12 & VAR_4))
  VAR_14 = 1;

 VAR_12 = FUNC_3(VAR_17, VAR_8);
 VAR_12 &= ~(VAR_1 | VAR_2);
 FUNC_4(VAR_17, VAR_8, VAR_12);

 FUNC_7(VAR_15, VAR_15->ier, VAR_6);
 FUNC_7(VAR_15, VAR_15->ier, VAR_10);
 FUNC_1(VAR_15->irq);

 return VAR_14;
}
