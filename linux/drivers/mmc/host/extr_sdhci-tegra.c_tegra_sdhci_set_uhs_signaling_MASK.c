
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_tegra {int ddr_signaling; int dqs_trim; scalar_t__ default_tap; scalar_t__ tuned_tap_delay; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int tuning_loop_count; } ;
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
 struct sdhci_tegra* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,unsigned int) ;
 int FUNC_4 (struct sdhci_host*,int,int ) ;
 int FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*) ;
 int FUNC_7 (struct sdhci_host*,int ) ;
 int FUNC_8 (struct sdhci_host*,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct sdhci_host *VAR_10,
       unsigned VAR_11)
{
 struct sdhci_pltfm_host *VAR_12 = FUNC_1(VAR_10);
 struct sdhci_tegra *VAR_13 = FUNC_0(VAR_12);
 bool VAR_14 = 0;
 bool VAR_15 = 0;
 bool VAR_16 = 0;
 u8 VAR_17 = VAR_9;
 u32 VAR_18;

 VAR_13->ddr_signaling = 0;
 switch (VAR_11) {
 case 128:
  break;
 case 129:
 case 132:

  VAR_17 = VAR_8;
  break;
 case 131:
  VAR_15 = 1;
  VAR_16 = 1;
  VAR_17 = VAR_8;
  break;
 case 133:
 case 130:
  VAR_13->ddr_signaling = 1;
  VAR_14 = 1;
  break;
 default:
  VAR_14 = 1;
  break;
 }

 VAR_18 = FUNC_2(VAR_10, VAR_1);
 VAR_18 &= ~(VAR_6 |
   VAR_4 |
   VAR_2);
 VAR_18 |= (VAR_17 << VAR_7 |
  0 << VAR_5 |
  1 << VAR_3);
 FUNC_4(VAR_10, VAR_18, VAR_1);
 FUNC_4(VAR_10, 0, VAR_0);

 VAR_10->tuning_loop_count = (VAR_17 == VAR_8) ? 128 : 256;

 FUNC_3(VAR_10, VAR_11);

 FUNC_6(VAR_10);

 if (VAR_13->tuned_tap_delay && !VAR_14)
  FUNC_8(VAR_10, VAR_13->tuned_tap_delay);
 else
  FUNC_8(VAR_10, VAR_13->default_tap);

 if (VAR_15)
  FUNC_7(VAR_10, VAR_13->dqs_trim);

 if (VAR_16)
  FUNC_5(VAR_10);
}
