
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;
struct pltfm_imx_data {TYPE_1__* socdata; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (struct pltfm_imx_data*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct pltfm_imx_data* FUNC_3 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static u16 FUNC_6(struct sdhci_host *VAR_19, int VAR_20)
{
 struct sdhci_pltfm_host *VAR_21 = FUNC_4(VAR_19);
 struct pltfm_imx_data *VAR_22 = FUNC_3(VAR_21);
 u16 VAR_23 = 0;
 u32 VAR_24;

 if (FUNC_5(VAR_20 == VAR_15)) {
  VAR_20 ^= 2;
  if (FUNC_0(VAR_22)) {




   return VAR_16;
  }
 }

 if (FUNC_5(VAR_20 == VAR_14)) {
  VAR_24 = FUNC_1(VAR_19->ioaddr + VAR_7);
  if (VAR_24 & VAR_8)
   VAR_23 |= VAR_13;

  if (FUNC_0(VAR_22)) {
   if (VAR_22->socdata->flags & VAR_0)
    VAR_24 = FUNC_1(VAR_19->ioaddr + VAR_2);
   else if (VAR_22->socdata->flags & VAR_1)

    VAR_24 = FUNC_1(VAR_19->ioaddr + VAR_9);
  }

  if (VAR_24 & VAR_4)
   VAR_23 |= VAR_10;
  if (VAR_24 & VAR_6)
   VAR_23 |= VAR_12;

  VAR_23 &= ~VAR_11;

  return VAR_23;
 }

 if (FUNC_5(VAR_20 == VAR_17)) {
  if (FUNC_0(VAR_22)) {
   u32 VAR_25 = FUNC_1(VAR_19->ioaddr + VAR_2);
   VAR_23 = VAR_25 & VAR_5;

   if (VAR_25 & VAR_3) {
    VAR_23 &= ~VAR_3;
    VAR_23 |= VAR_18;
   }
  } else {
   VAR_23 = FUNC_2(VAR_19->ioaddr + VAR_17);
  }

  return VAR_23;
 }

 return FUNC_2(VAR_19->ioaddr + VAR_20);
}
