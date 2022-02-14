
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int max_clk; int flags; TYPE_3__* mmc; } ;
struct sdhci_esdhc {scalar_t__ vendor_ver; int div_ratio; scalar_t__ quirk_limited_clk_division; TYPE_1__* clk_fixup; } ;
typedef int ktime_t ;
struct TYPE_6__ {size_t timing; } ;
struct TYPE_7__ {int actual_clock; TYPE_2__ ios; scalar_t__ card; } ;
struct TYPE_5__ {long sd_dflt_max_clk; long* max_clk; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (struct sdhci_host*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ) ;
 struct sdhci_esdhc* FUNC_10 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_11 (struct sdhci_host*) ;
 int FUNC_12 (struct sdhci_host*,int ) ;
 int FUNC_13 (struct sdhci_host*,int,int ) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct sdhci_host *VAR_25, unsigned int VAR_26)
{
 struct sdhci_pltfm_host *VAR_27 = FUNC_11(VAR_25);
 struct sdhci_esdhc *VAR_28 = FUNC_10(VAR_27);
 int VAR_29 = 1;
 int VAR_30 = 1;
 int VAR_31;
 ktime_t VAR_32;
 long VAR_33 = 0;
 u32 VAR_34;

 VAR_25->mmc->actual_clock = 0;

 if (VAR_26 == 0) {
  FUNC_1(VAR_25, 0);
  return;
 }


 if (VAR_28->vendor_ver < VAR_24)
  VAR_29 = 2;

 if (VAR_25->mmc->card && FUNC_5(VAR_25->mmc->card) &&
  VAR_28->clk_fixup && VAR_25->mmc->ios.timing == VAR_21)
  VAR_33 = VAR_28->clk_fixup->sd_dflt_max_clk;
 else if (VAR_28->clk_fixup)
  VAR_33 = VAR_28->clk_fixup->max_clk[VAR_25->mmc->ios.timing];

 if (VAR_33 && VAR_26 > VAR_33)
  VAR_26 = VAR_33;

 VAR_34 = FUNC_12(VAR_25, VAR_18);
 VAR_34 &= ~(VAR_4 | VAR_1 | VAR_0 |
    VAR_3 | VAR_2);
 FUNC_13(VAR_25, VAR_34, VAR_18);

 while (VAR_25->max_clk / VAR_29 / 16 > VAR_26 && VAR_29 < 256)
  VAR_29 *= 2;

 while (VAR_25->max_clk / VAR_29 / VAR_30 > VAR_26 && VAR_30 < 16)
  VAR_30++;

 if (VAR_28->quirk_limited_clk_division &&
     VAR_26 == VAR_20 &&
     (VAR_25->mmc->ios.timing == VAR_22 ||
      VAR_25->flags & VAR_23)) {
  VAR_31 = VAR_29 * VAR_30;
  if (VAR_31 <= 4) {
   VAR_29 = 4;
   VAR_30 = 1;
  } else if (VAR_31 <= 8) {
   VAR_29 = 4;
   VAR_30 = 2;
  } else if (VAR_31 <= 12) {
   VAR_29 = 4;
   VAR_30 = 3;
  } else {
   FUNC_9("%s: using unsupported clock division.\n",
    FUNC_7(VAR_25->mmc));
  }
 }

 FUNC_0(FUNC_6(VAR_25->mmc), "desired SD clock: %d, actual: %d\n",
  VAR_26, VAR_25->max_clk / VAR_29 / VAR_30);
 VAR_25->mmc->actual_clock = VAR_25->max_clk / VAR_29 / VAR_30;
 VAR_28->div_ratio = VAR_29 * VAR_30;
 VAR_29 >>= 1;
 VAR_30--;

 VAR_34 = FUNC_12(VAR_25, VAR_18);
 VAR_34 |= (VAR_1 | VAR_0 | VAR_3
  | (VAR_30 << VAR_7)
  | (VAR_29 << VAR_15));
 FUNC_13(VAR_25, VAR_34, VAR_18);

 if (VAR_25->mmc->ios.timing == VAR_22 &&
     VAR_26 == VAR_20) {
  VAR_34 = FUNC_12(VAR_25, VAR_19);
  FUNC_13(VAR_25, VAR_34 | VAR_13, VAR_19);
  VAR_34 = FUNC_12(VAR_25, VAR_17);
  FUNC_13(VAR_25, VAR_34 | VAR_6, VAR_17);
  FUNC_1(VAR_25, 1);

  VAR_34 = FUNC_12(VAR_25, VAR_8);
  VAR_34 |= VAR_9;
  if (VAR_25->mmc->actual_clock == VAR_20)
   VAR_34 |= VAR_10;
  FUNC_13(VAR_25, VAR_34, VAR_8);
  VAR_34 = FUNC_12(VAR_25, VAR_19);
  FUNC_13(VAR_25, VAR_34 | VAR_14, VAR_19);

  FUNC_1(VAR_25, 0);
  VAR_34 = FUNC_12(VAR_25, VAR_11);
  VAR_34 |= VAR_12;
  FUNC_13(VAR_25, VAR_34, VAR_11);
 }


 VAR_32 = FUNC_2(FUNC_4(), 20);
 while (1) {
  bool VAR_35 = FUNC_3(FUNC_4(), VAR_32);

  if (FUNC_12(VAR_25, VAR_16) & VAR_5)
   break;
  if (VAR_35) {
   FUNC_8("%s: Internal clock never stabilised.\n",
    FUNC_7(VAR_25->mmc));
   return;
  }
  FUNC_14(10);
 }

 VAR_34 = FUNC_12(VAR_25, VAR_18);
 VAR_34 |= VAR_4;
 FUNC_13(VAR_25, VAR_34, VAR_18);
}
