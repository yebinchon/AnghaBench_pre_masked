
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;
struct pltfm_imx_data {scalar_t__ multiblock_status; TYPE_1__* socdata; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct pltfm_imx_data*) ;
 int FUNC_1 (scalar_t__) ;
 struct pltfm_imx_data* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct sdhci_host *VAR_17, u32 VAR_18, int VAR_19)
{
 struct sdhci_pltfm_host *VAR_20 = FUNC_3(VAR_17);
 struct pltfm_imx_data *VAR_21 = FUNC_2(VAR_20);
 u32 VAR_22;

 if (FUNC_4(VAR_19 == VAR_12 || VAR_19 == VAR_14 ||
   VAR_19 == VAR_13)) {
  if ((VAR_18 & VAR_10) && !FUNC_0(VAR_21)) {
   VAR_22 = FUNC_1(VAR_17->ioaddr + VAR_8);
   VAR_22 &= ~VAR_0;
   FUNC_5(VAR_22, VAR_17->ioaddr + VAR_8);
   VAR_22 |= VAR_0;
   FUNC_5(VAR_22, VAR_17->ioaddr + VAR_8);
  }

  if (VAR_18 & VAR_9) {
   VAR_18 &= ~VAR_9;
   VAR_18 |= VAR_2;
  }
 }

 if (FUNC_4((VAR_21->socdata->flags & VAR_1)
    && (VAR_19 == VAR_13)
    && (VAR_18 & VAR_11))) {
   u32 VAR_23;
   VAR_23 = FUNC_1(VAR_17->ioaddr + VAR_3);
   VAR_23 &= ~VAR_4;
   FUNC_5(VAR_23, VAR_17->ioaddr + VAR_3);

   if (VAR_21->multiblock_status == VAR_6)
   {

    VAR_22 = VAR_5 << 24 |
           VAR_7 << 16;
    FUNC_5(VAR_22, VAR_17->ioaddr + VAR_15);
    VAR_21->multiblock_status = VAR_16;
   }
 }

 FUNC_5(VAR_18, VAR_17->ioaddr + VAR_19);
}
