
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_offset {scalar_t__ core_dll_config; } ;
struct sdhci_msm_host {int calibration_done; struct sdhci_msm_offset* offset; } ;
struct sdhci_host {scalar_t__ clock; struct mmc_host* mmc; scalar_t__ ioaddr; } ;
struct TYPE_2__ {int const timing; } ;
struct mmc_host {TYPE_1__ ios; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,unsigned int,int ) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sdhci_host*,TYPE_1__*) ;
 struct sdhci_msm_host* FUNC_5 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_6 (struct sdhci_host*) ;
 int FUNC_7 (struct sdhci_host*,int ) ;
 int FUNC_8 (struct sdhci_host*,int ,int ) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct sdhci_host *VAR_10,
     unsigned int VAR_11)
{
 struct mmc_host *VAR_12 = VAR_10->mmc;
 struct sdhci_pltfm_host *VAR_13 = FUNC_6(VAR_10);
 struct sdhci_msm_host *VAR_14 = FUNC_5(VAR_13);
 u16 VAR_15;
 u32 VAR_16;
 const struct sdhci_msm_offset *VAR_17 =
     VAR_14->offset;

 VAR_15 = FUNC_7(VAR_10, VAR_9);

 VAR_15 &= ~VAR_4;
 switch (VAR_11) {
 case 130:
  VAR_15 |= VAR_6;
  break;
 case 129:
  VAR_15 |= VAR_7;
  break;
 case 128:
  VAR_15 |= VAR_8;
  break;
 case 133:
 case 134:
 case 131:
  VAR_15 |= VAR_5;
  break;
 case 132:
 case 135:
  VAR_15 |= VAR_3;
  break;
 }







 if (VAR_10->clock <= VAR_2) {
  if (VAR_11 == 133 ||
      VAR_11 == 134 ||
      VAR_11 == 131)
   VAR_15 &= ~VAR_4;




  VAR_16 = FUNC_3(VAR_10->ioaddr +
    VAR_17->core_dll_config);
  VAR_16 |= VAR_1;
  FUNC_9(VAR_16, VAR_10->ioaddr +
    VAR_17->core_dll_config);

  VAR_16 = FUNC_3(VAR_10->ioaddr +
    VAR_17->core_dll_config);
  VAR_16 |= VAR_0;
  FUNC_9(VAR_16, VAR_10->ioaddr +
    VAR_17->core_dll_config);





  VAR_14->calibration_done = 0;
 }

 FUNC_0(FUNC_1(VAR_12), "%s: clock=%u uhs=%u ctrl_2=0x%x\n",
  FUNC_2(VAR_10->mmc), VAR_10->clock, VAR_11, VAR_15);
 FUNC_8(VAR_10, VAR_15, VAR_9);

 if (VAR_12->ios.timing == 133)
  FUNC_4(VAR_10, &VAR_12->ios);
}
