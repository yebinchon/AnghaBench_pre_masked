
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct sdhci_esdhc {scalar_t__ vendor_ver; int quirk_ignore_data_inhibit; } ;


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
 scalar_t__ VAR_11 ;
 struct sdhci_esdhc* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;

__attribute__((used)) static u32 FUNC_2(struct sdhci_host *VAR_12,
         int VAR_13, u32 VAR_14)
{
 struct sdhci_pltfm_host *VAR_15 = FUNC_1(VAR_12);
 struct sdhci_esdhc *VAR_16 = FUNC_0(VAR_15);
 u32 VAR_17;
 if ((VAR_13 == VAR_2) && (VAR_14 & VAR_0)) {
  if (VAR_16->vendor_ver > VAR_11) {
   VAR_17 = VAR_14 | VAR_1;
   return VAR_17;
  }
 }







 if (VAR_13 == VAR_7) {
  VAR_17 = VAR_14 & 0x000fffff;
  VAR_17 |= (VAR_14 >> 4) & VAR_6;
  VAR_17 |= (VAR_14 << 1) & VAR_4;
  return VAR_17;
 }






 if (VAR_13 == VAR_3) {
  VAR_17 = VAR_14 & ~(VAR_10 | VAR_9 |
    VAR_8);
  return VAR_17;
 }
 if ((VAR_13 == VAR_7) &&
 (VAR_16->quirk_ignore_data_inhibit == 1)) {
  VAR_17 = VAR_14 & ~VAR_5;
  return VAR_17;
 }

 VAR_17 = VAR_14;
 return VAR_17;
}
