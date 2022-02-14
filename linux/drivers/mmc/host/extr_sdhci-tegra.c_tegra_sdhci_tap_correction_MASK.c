
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_tegra {int tuned_tap_delay; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int tuning_loop_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 struct sdhci_tegra* FUNC_1 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*,int ) ;
 int FUNC_4 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_4, u8 VAR_5,
           u8 VAR_6, u8 VAR_7)
{
 struct sdhci_pltfm_host *VAR_8 = FUNC_2(VAR_4);
 struct sdhci_tegra *VAR_9 = FUNC_1(VAR_8);
 u32 VAR_10, VAR_11;
 u8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 bool VAR_17;
 bool VAR_18 = 0;
 bool VAR_19 = 0;
 bool VAR_20 = 0;
 bool VAR_21 = 0;
 bool VAR_22 = 0;
 u8 VAR_23 = 0;
 u8 VAR_24 = 0;
 u8 VAR_25 = 0;
 u8 VAR_26 = 0;
 u8 VAR_27 = VAR_4->tuning_loop_count / VAR_3;





 for (VAR_12 = 0; VAR_12 < VAR_27; VAR_12++) {
  VAR_10 = FUNC_3(VAR_4, VAR_1);
  VAR_10 &= ~VAR_2;
  VAR_10 |= VAR_12;
  FUNC_4(VAR_4, VAR_10, VAR_1);
  VAR_11 = FUNC_3(VAR_4, VAR_0);
  VAR_13 = 0;
  while (VAR_13 < VAR_3) {
   VAR_15 = VAR_12 * VAR_3 + VAR_13;
   VAR_17 = VAR_11 & (1 << VAR_13);
   if (!VAR_17 && !VAR_18) {
    VAR_18 = 1;
    if (!VAR_21) {
     VAR_25 = VAR_15;
     VAR_21 = 1;
    }

   } else if (VAR_17 && VAR_18 && !VAR_19) {
    VAR_23 = VAR_15;
    VAR_19 = 1;
    if (!VAR_22) {
     VAR_26 = VAR_15;
     VAR_22 = 1;
    }

   } else if (!VAR_17 && VAR_18 && VAR_19 &&
       !VAR_20) {
    VAR_24 = VAR_15 - 1;
    VAR_20 = 1;
   } else if (VAR_17 && VAR_19 && VAR_18 &&
       VAR_20) {
    VAR_16 = VAR_24 - VAR_23;

    if (VAR_16 >= VAR_5 || VAR_16 < VAR_6) {
     VAR_23 = VAR_15;
     VAR_20 = 0;
    } else {

     VAR_15 = VAR_23 + VAR_16 / 2;
     VAR_9->tuned_tap_delay = VAR_15;
     return;
    }
   }

   VAR_13++;
  }
 }

 if (!VAR_21) {
  FUNC_0(1, "no edge detected, continue with hw tuned delay.\n");
 } else if (VAR_22) {

  VAR_14 = VAR_25 + (VAR_26 - VAR_25) / 2;
  if (VAR_14 - 1 > VAR_7)
   VAR_9->tuned_tap_delay = VAR_14 - VAR_7;
  else
   VAR_9->tuned_tap_delay = VAR_14 + VAR_7;
 }
}
