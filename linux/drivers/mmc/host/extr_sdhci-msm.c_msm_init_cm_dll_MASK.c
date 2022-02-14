
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_offset {scalar_t__ core_dll_status; scalar_t__ core_dll_config; scalar_t__ core_dll_config_2; scalar_t__ core_vendor_spec; } ;
struct sdhci_msm_host {scalar_t__ use_14lpp_dll_reset; int xo_clk; struct sdhci_msm_offset* offset; } ;
struct sdhci_host {int clock; int lock; scalar_t__ ioaddr; struct mmc_host* mmc; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,unsigned long) ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct sdhci_host*) ;
 int FUNC_7 (scalar_t__) ;
 struct sdhci_msm_host* FUNC_8 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_9 (struct sdhci_host*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct sdhci_host *VAR_9)
{
 struct mmc_host *VAR_10 = VAR_9->mmc;
 struct sdhci_pltfm_host *VAR_11 = FUNC_9(VAR_9);
 struct sdhci_msm_host *VAR_12 = FUNC_8(VAR_11);
 int VAR_13 = 50;
 unsigned long VAR_14, VAR_15 = 0;
 u32 VAR_16;
 const struct sdhci_msm_offset *VAR_17 =
     VAR_12->offset;

 if (VAR_12->use_14lpp_dll_reset && !FUNC_1(VAR_12->xo_clk))
  VAR_15 = FUNC_2(VAR_12->xo_clk);

 FUNC_10(&VAR_9->lock, VAR_14);






 VAR_16 = FUNC_7(VAR_9->ioaddr + VAR_17->core_vendor_spec);
 VAR_16 &= ~VAR_1;
 FUNC_13(VAR_16, VAR_9->ioaddr + VAR_17->core_vendor_spec);

 if (VAR_12->use_14lpp_dll_reset) {
  VAR_16 = FUNC_7(VAR_9->ioaddr +
    VAR_17->core_dll_config);
  VAR_16 &= ~VAR_0;
  FUNC_13(VAR_16, VAR_9->ioaddr +
    VAR_17->core_dll_config);

  VAR_16 = FUNC_7(VAR_9->ioaddr +
    VAR_17->core_dll_config_2);
  VAR_16 |= VAR_2;
  FUNC_13(VAR_16, VAR_9->ioaddr +
    VAR_17->core_dll_config_2);
 }

 VAR_16 = FUNC_7(VAR_9->ioaddr +
   VAR_17->core_dll_config);
 VAR_16 |= VAR_6;
 FUNC_13(VAR_16, VAR_9->ioaddr +
   VAR_17->core_dll_config);

 VAR_16 = FUNC_7(VAR_9->ioaddr +
   VAR_17->core_dll_config);
 VAR_16 |= VAR_5;
 FUNC_13(VAR_16, VAR_9->ioaddr +
   VAR_17->core_dll_config);
 FUNC_6(VAR_9);

 if (VAR_12->use_14lpp_dll_reset &&
     !FUNC_1(VAR_12->xo_clk)) {
  u32 VAR_18 = 0;

  VAR_16 = FUNC_7(VAR_9->ioaddr +
    VAR_17->core_dll_config_2);
  VAR_16 &= VAR_7;
  if (VAR_16)
   VAR_18 = FUNC_0((VAR_9->clock * 8),
     VAR_15);
  else
   VAR_18 = FUNC_0((VAR_9->clock * 4),
     VAR_15);

  VAR_16 = FUNC_7(VAR_9->ioaddr +
    VAR_17->core_dll_config_2);
  VAR_16 &= ~(0xFF << 10);
  VAR_16 |= VAR_18 << 10;

  FUNC_13(VAR_16, VAR_9->ioaddr +
    VAR_17->core_dll_config_2);

  FUNC_12(5);
 }

 VAR_16 = FUNC_7(VAR_9->ioaddr +
   VAR_17->core_dll_config);
 VAR_16 &= ~VAR_6;
 FUNC_13(VAR_16, VAR_9->ioaddr +
   VAR_17->core_dll_config);

 VAR_16 = FUNC_7(VAR_9->ioaddr +
   VAR_17->core_dll_config);
 VAR_16 &= ~VAR_5;
 FUNC_13(VAR_16, VAR_9->ioaddr +
   VAR_17->core_dll_config);

 if (VAR_12->use_14lpp_dll_reset) {
  FUNC_6(VAR_9);
  VAR_16 = FUNC_7(VAR_9->ioaddr +
    VAR_17->core_dll_config_2);
  VAR_16 &= ~VAR_2;
  FUNC_13(VAR_16, VAR_9->ioaddr +
    VAR_17->core_dll_config_2);
 }

 VAR_16 = FUNC_7(VAR_9->ioaddr +
   VAR_17->core_dll_config);
 VAR_16 |= VAR_3;
 FUNC_13(VAR_16, VAR_9->ioaddr +
   VAR_17->core_dll_config);

 VAR_16 = FUNC_7(VAR_9->ioaddr +
   VAR_17->core_dll_config);
 VAR_16 |= VAR_0;
 FUNC_13(VAR_16, VAR_9->ioaddr +
   VAR_17->core_dll_config);


 while (!(FUNC_7(VAR_9->ioaddr + VAR_17->core_dll_status) &
   VAR_4)) {

  if (--VAR_13 == 0) {
   FUNC_3(FUNC_4(VAR_10), "%s: DLL failed to LOCK\n",
          FUNC_5(VAR_10));
   FUNC_11(&VAR_9->lock, VAR_14);
   return -VAR_8;
  }
  FUNC_12(1);
 }

 FUNC_11(&VAR_9->lock, VAR_14);
 return 0;
}
