
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_pltfm_host {unsigned int clock; } ;
struct sdhci_host {scalar_t__ ioaddr; TYPE_2__* mmc; } ;
struct pltfm_imx_data {scalar_t__ is_ddr; TYPE_1__* socdata; } ;
struct TYPE_4__ {unsigned int actual_clock; } ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (struct pltfm_imx_data*) ;
 scalar_t__ FUNC_3 (struct pltfm_imx_data*) ;
 int FUNC_4 (int) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (scalar_t__) ;
 struct pltfm_imx_data* FUNC_8 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_9 (struct sdhci_host*) ;
 int FUNC_10 (struct sdhci_host*,int ) ;
 int FUNC_11 (struct sdhci_host*,int,int ) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_13(struct sdhci_host *VAR_11,
      unsigned int VAR_12)
{
 struct sdhci_pltfm_host *VAR_13 = FUNC_9(VAR_11);
 struct pltfm_imx_data *VAR_14 = FUNC_8(VAR_13);
 unsigned int VAR_15 = VAR_13->clock;
 int VAR_16 = VAR_14->is_ddr ? 2 : 1;
 int VAR_17 = 1;
 int VAR_18 = 1;
 u32 VAR_19, VAR_20;

 if (FUNC_2(VAR_14)) {
  VAR_20 = FUNC_7(VAR_11->ioaddr + VAR_9);
  FUNC_12(VAR_20 & ~VAR_10,
   VAR_11->ioaddr + VAR_9);
 }

 if (VAR_12 == 0) {
  VAR_11->mmc->actual_clock = 0;
  return;
 }


 if (FUNC_3(VAR_14)) {




  VAR_20 = FUNC_7(VAR_11->ioaddr + VAR_5);
  FUNC_12(VAR_20 | FUNC_0(10), VAR_11->ioaddr + VAR_5);
  VAR_19 = FUNC_7(VAR_11->ioaddr + VAR_5);
  FUNC_12(VAR_20, VAR_11->ioaddr + VAR_5);
  if (VAR_19 & FUNC_0(10))
   VAR_17 = 2;
 }

 VAR_19 = FUNC_10(VAR_11, VAR_8);
 VAR_19 &= ~(VAR_1 | VAR_0 | VAR_3
  | VAR_2);
 FUNC_11(VAR_11, VAR_19, VAR_8);

 if (VAR_14->socdata->flags & VAR_6) {
  unsigned int VAR_21;

  VAR_21 = VAR_14->is_ddr ? 45000000 : 150000000;

  VAR_12 = FUNC_5(VAR_12, VAR_21);
 }

 while (VAR_15 / (16 * VAR_17 * VAR_16) > VAR_12 &&
   VAR_17 < 256)
  VAR_17 *= 2;

 while (VAR_15 / (VAR_18 * VAR_17 * VAR_16) > VAR_12 && VAR_18 < 16)
  VAR_18++;

 VAR_11->mmc->actual_clock = VAR_15 / (VAR_18 * VAR_17 * VAR_16);
 FUNC_1(FUNC_6(VAR_11->mmc), "desired SD clock: %d, actual: %d\n",
  VAR_12, VAR_11->mmc->actual_clock);

 VAR_17 >>= 1;
 VAR_18--;

 VAR_19 = FUNC_10(VAR_11, VAR_8);
 VAR_19 |= (VAR_1 | VAR_0 | VAR_3
  | (VAR_18 << VAR_4)
  | (VAR_17 << VAR_7));
 FUNC_11(VAR_11, VAR_19, VAR_8);

 if (FUNC_2(VAR_14)) {
  VAR_20 = FUNC_7(VAR_11->ioaddr + VAR_9);
  FUNC_12(VAR_20 | VAR_10,
   VAR_11->ioaddr + VAR_9);
 }

 FUNC_4(1);
}
