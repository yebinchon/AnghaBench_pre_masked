
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;
struct sdhci_at91_priv {int gck; int mainck; int hclock; } ;
struct device {int dummy; } ;


 int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (struct device*,char*) ;
 struct sdhci_host* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_8 (scalar_t__) ;
 struct sdhci_at91_priv* FUNC_9 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_10 (struct sdhci_host*) ;
 int FUNC_11 (unsigned int,scalar_t__) ;
 int FUNC_12 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_15)
{
 struct sdhci_host *VAR_16 = FUNC_6(VAR_15);
 struct sdhci_pltfm_host *VAR_17 = FUNC_10(VAR_16);
 struct sdhci_at91_priv *VAR_18 = FUNC_9(VAR_17);
 int VAR_19;
 unsigned int VAR_20, VAR_21;
 unsigned int VAR_22, VAR_23;
 unsigned int VAR_24, VAR_25;
 unsigned int VAR_26;






 FUNC_3(VAR_18->hclock);
 VAR_20 = FUNC_8(VAR_16->ioaddr + VAR_1);
 VAR_21 = FUNC_8(VAR_16->ioaddr + VAR_2);
 VAR_22 = (VAR_20 & VAR_6) >> VAR_3;
 VAR_23 = (VAR_21 & VAR_4) >> VAR_5;
 VAR_24 = VAR_22 * 1000000 * (VAR_23 + 1);
 VAR_19 = FUNC_4(VAR_18->gck, VAR_24);
 if (VAR_19 < 0) {
  FUNC_5(VAR_15, "failed to set gck");
  FUNC_1(VAR_18->hclock);
  return VAR_19;
 }






 VAR_25 = FUNC_2(VAR_18->gck);
 if (VAR_25 != VAR_24) {
  VAR_23 = VAR_25 / (VAR_22 * 1000000) - 1;
  VAR_21 &= (~VAR_4);
  VAR_21 |= ((VAR_23 << VAR_5) &
     VAR_4);

  FUNC_11(VAR_14 | VAR_13,
         VAR_16->ioaddr + VAR_12);
  FUNC_11(VAR_21, VAR_16->ioaddr + VAR_2);

  FUNC_11(0, VAR_16->ioaddr + VAR_12);
  FUNC_7(VAR_15, "update clk mul to %u as gck rate is %u Hz\n",
    VAR_23, VAR_25);
 }







 VAR_26 = FUNC_0(VAR_25, 24000000) - 1;
 FUNC_12(VAR_0 | VAR_26,
        VAR_16->ioaddr + VAR_9);
 VAR_26 = FUNC_0(VAR_25, 50000000) - 1;
 FUNC_12(VAR_0 | VAR_26,
        VAR_16->ioaddr + VAR_10);
 VAR_26 = FUNC_0(VAR_25, 100000000) - 1;
 FUNC_12(VAR_0 | VAR_26,
        VAR_16->ioaddr + VAR_11);
 VAR_26 = FUNC_0(VAR_25, 120000000) - 1;
 FUNC_12(VAR_0 | VAR_26,
        VAR_16->ioaddr + VAR_8);
 VAR_26 = FUNC_0(VAR_25, 50000000) - 1;
 FUNC_12(VAR_0 | VAR_26,
        VAR_16->ioaddr + VAR_7);

 FUNC_3(VAR_18->mainck);
 FUNC_3(VAR_18->gck);

 return 0;
}
