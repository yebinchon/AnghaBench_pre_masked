
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;
struct pltfm_imx_data {scalar_t__ multiblock_status; int pins_200mhz; int pins_100mhz; TYPE_1__* socdata; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_1 (struct pltfm_imx_data*) ;
 int FUNC_2 (scalar_t__) ;
 struct pltfm_imx_data* FUNC_3 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static u32 FUNC_7(struct sdhci_host *VAR_24, int VAR_25)
{
 struct sdhci_pltfm_host *VAR_26 = FUNC_4(VAR_24);
 struct pltfm_imx_data *VAR_27 = FUNC_3(VAR_26);
 u32 VAR_28 = FUNC_2(VAR_24->ioaddr + VAR_25);

 if (FUNC_5(VAR_25 == VAR_15)) {
  u32 VAR_29 = VAR_28;

  VAR_28 = VAR_29 & 0x000FFFFF;

  VAR_28 |= (VAR_29 & 0x0F000000) >> 4;

  VAR_28 |= (VAR_29 & 0x00800000) << 1;
 }

 if (FUNC_5(VAR_25 == VAR_6)) {

  if (VAR_27->socdata->flags & VAR_0)
   VAR_28 &= 0xffff0000;
  if (VAR_28 & VAR_4) {
   VAR_28 &= ~VAR_4;
   VAR_28 |= VAR_5;
  }
 }

 if (FUNC_5(VAR_25 == VAR_7)) {
  if (FUNC_1(VAR_27)) {
   if (VAR_27->socdata->flags & VAR_0)
    VAR_28 = FUNC_2(VAR_24->ioaddr + VAR_6) & 0xFFFF;
   else

    VAR_28 = VAR_17 | VAR_19
     | VAR_20
     | VAR_22
     | (VAR_21 << VAR_16);

   if (VAR_27->socdata->flags & VAR_1)
    VAR_28 |= VAR_18;





   if (FUNC_0(VAR_27->pins_100mhz) ||
       FUNC_0(VAR_27->pins_200mhz))
    VAR_28 &= ~(VAR_20 | VAR_17
      | VAR_19 | VAR_18);
  }
 }

 if (FUNC_5(VAR_25 == VAR_11) && FUNC_1(VAR_27)) {
  VAR_28 = 0;
  VAR_28 |= 0xFF << VAR_14;
  VAR_28 |= 0xFF << VAR_13;
  VAR_28 |= 0xFF << VAR_12;
 }

 if (FUNC_5(VAR_25 == VAR_10)) {
  if (VAR_28 & VAR_2) {
   VAR_28 &= ~VAR_2;
   VAR_28 |= VAR_8;
  }





  if ((VAR_27->multiblock_status == VAR_23) &&
      ((VAR_28 & VAR_9) == VAR_9)) {
   VAR_28 &= ~VAR_9;
   FUNC_6(VAR_9, VAR_24->ioaddr +
         VAR_10);
   VAR_27->multiblock_status = VAR_3;
  }
 }

 return VAR_28;
}
