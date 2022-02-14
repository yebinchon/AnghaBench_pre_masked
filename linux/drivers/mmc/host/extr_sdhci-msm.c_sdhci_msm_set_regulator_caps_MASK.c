
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_msm_offset {scalar_t__ core_vendor_spec; } ;
struct sdhci_msm_host {int curr_io_level; int caps_0; struct sdhci_msm_offset* offset; struct mmc_host* mmc; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;
struct regulator {int dummy; } ;
struct TYPE_2__ {struct regulator* vqmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct regulator*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mmc_host*) ;
 struct sdhci_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct regulator*,int,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct sdhci_msm_host *VAR_6)
{
 struct mmc_host *VAR_7 = VAR_6->mmc;
 struct regulator *VAR_8 = VAR_7->supply.vqmmc;
 u32 VAR_9 = 0, VAR_10;
 struct sdhci_host *VAR_11 = FUNC_2(VAR_7);
 const struct sdhci_msm_offset *VAR_12 = VAR_6->offset;

 if (!FUNC_0(VAR_7->supply.vqmmc)) {
  if (FUNC_6(VAR_8, 1700000, 1950000))
   VAR_9 |= VAR_0;
  if (FUNC_6(VAR_8, 2700000, 3600000))
   VAR_9 |= VAR_1;

  if (!VAR_9)
   FUNC_4("%s: 1.8/3V not supported for vqmmc\n",
     FUNC_1(VAR_7));
 }

 if (VAR_9) {




  u32 VAR_13 = VAR_6->curr_io_level;

  VAR_10 = FUNC_5(VAR_11->ioaddr +
    VAR_12->core_vendor_spec);
  VAR_10 |= VAR_3;

  if ((VAR_13 & VAR_4) && (VAR_9 & VAR_1))
   VAR_10 &= ~VAR_2;
  else if ((VAR_13 & VAR_5) || (VAR_9 & VAR_0))
   VAR_10 |= VAR_2;

  FUNC_7(VAR_10,
    VAR_11->ioaddr + VAR_12->core_vendor_spec);
 }
 VAR_6->caps_0 |= VAR_9;
 FUNC_3("%s: supported caps: 0x%08x\n", FUNC_1(VAR_7), VAR_9);
}
