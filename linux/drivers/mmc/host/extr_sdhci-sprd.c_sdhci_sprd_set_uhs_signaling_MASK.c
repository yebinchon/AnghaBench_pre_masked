
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sdhci_sprd_host {int * phy_delay; } ;
struct sdhci_host {unsigned int timing; struct mmc_host* mmc; } ;
struct TYPE_2__ {int enhanced_strobe; } ;
struct mmc_host {TYPE_1__ ios; } ;
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
 struct sdhci_sprd_host* FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*,int ) ;
 int FUNC_2 (struct sdhci_host*,int ,int ) ;
 int FUNC_3 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sdhci_host *VAR_10,
      unsigned int VAR_11)
{
 struct sdhci_sprd_host *VAR_12 = FUNC_0(VAR_10);
 struct mmc_host *VAR_13 = VAR_10->mmc;
 u32 *VAR_14 = VAR_12->phy_delay;
 u16 VAR_15;

 if (VAR_11 == VAR_10->timing)
  return;

 VAR_15 = FUNC_1(VAR_10, VAR_6);

 VAR_15 &= ~VAR_1;
 switch (VAR_11) {
 case 130:
  VAR_15 |= VAR_3;
  break;
 case 136:
 case 133:
 case 129:
  VAR_15 |= VAR_4;
  break;
 case 128:
  VAR_15 |= VAR_5;
  break;
 case 131:
  VAR_15 |= VAR_2;
  break;
 case 132:
 case 137:
  VAR_15 |= VAR_0;
  break;
 case 135:
  VAR_15 |= VAR_7;
  break;
 case 134:
  VAR_15 |= VAR_8;
  break;
 default:
  break;
 }

 FUNC_3(VAR_10, VAR_15, VAR_6);

 if (!VAR_13->ios.enhanced_strobe)
  FUNC_2(VAR_10, VAR_14[VAR_11], VAR_9);
}
