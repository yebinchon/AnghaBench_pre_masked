
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_offset {scalar_t__ core_dll_status; scalar_t__ core_vendor_spec; } ;
struct sdhci_msm_host {int use_cdclp533; int clk_rate; int calibration_done; scalar_t__ tuning_done; struct sdhci_msm_offset* offset; } ;
struct sdhci_host {TYPE_1__* mmc; scalar_t__ ioaddr; } ;
struct mmc_ios {scalar_t__ enhanced_strobe; } ;
struct TYPE_2__ {struct mmc_ios ios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int,int,int,int) ;
 struct sdhci_msm_host* FUNC_4 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 () ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct sdhci_host *VAR_7)
{
 struct sdhci_pltfm_host *VAR_8 = FUNC_5(VAR_7);
 struct sdhci_msm_host *VAR_9 = FUNC_4(VAR_8);
 struct mmc_ios VAR_10 = VAR_7->mmc->ios;
 u32 VAR_11, VAR_12;
 int VAR_13;
 const struct sdhci_msm_offset *VAR_14 =
     VAR_9->offset;


 VAR_11 = FUNC_2(VAR_7->ioaddr + VAR_14->core_vendor_spec);
 VAR_11 &= ~VAR_3;
 VAR_11 |= VAR_2;

 FUNC_7(VAR_11, VAR_7->ioaddr + VAR_14->core_vendor_spec);




 if ((VAR_9->tuning_done || VAR_10.enhanced_strobe) &&
     !VAR_9->calibration_done) {
  VAR_11 = FUNC_2(VAR_7->ioaddr +
    VAR_14->core_vendor_spec);
  VAR_11 |= VAR_5;
  VAR_11 |= VAR_4;
  FUNC_7(VAR_11, VAR_7->ioaddr +
    VAR_14->core_vendor_spec);
 }
 if (!VAR_9->clk_rate && !VAR_9->use_cdclp533) {





  VAR_13 = FUNC_3(VAR_7->ioaddr +
      VAR_14->core_dll_status,
      VAR_12,
      (VAR_12 &
      (VAR_1 |
      VAR_0)), 10,
      1000);
  if (VAR_13 == -VAR_6)
   FUNC_1("%s: Unable to get DLL_LOCK/DDR_DLL_LOCK, dll_status: 0x%08x\n",
          FUNC_0(VAR_7->mmc), VAR_12);
 }




 FUNC_6();
}
