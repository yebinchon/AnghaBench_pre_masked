
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xenon_priv {scalar_t__ phy_type; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ timing; scalar_t__ clock; TYPE_2__* mmc; } ;
struct TYPE_3__ {scalar_t__ enhanced_strobe; } ;
struct TYPE_4__ {TYPE_1__ ios; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 struct xenon_priv* FUNC_3 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*,int ) ;
 int FUNC_6 (struct sdhci_host*,int ,int ) ;
 int FUNC_7 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_8(struct sdhci_host *VAR_12)
{
 struct sdhci_pltfm_host *VAR_13 = FUNC_4(VAR_12);
 struct xenon_priv *VAR_14 = FUNC_3(VAR_13);
 u32 VAR_15;

 if (FUNC_0(VAR_12->timing != VAR_2))
  return;

 if (VAR_12->clock <= VAR_1)
  return;

 FUNC_1(FUNC_2(VAR_12->mmc), "starts HS400 strobe delay adjustment\n");

 FUNC_7(VAR_12);


 VAR_15 = FUNC_5(VAR_12, VAR_11);
 VAR_15 |= VAR_9;







 if (VAR_12->mmc->ios.enhanced_strobe)
  VAR_15 |= VAR_10;
 FUNC_6(VAR_12, VAR_15, VAR_11);


 if (VAR_14->phy_type == VAR_0) {
  VAR_15 = FUNC_5(VAR_12, VAR_7);
  VAR_15 |= VAR_5;
  VAR_15 &= ~VAR_6;
  FUNC_6(VAR_12, VAR_15, VAR_7);
 } else {
  VAR_15 = FUNC_5(VAR_12, VAR_8);
  VAR_15 |= VAR_3;
  VAR_15 &= ~VAR_4;
  FUNC_6(VAR_12, VAR_15, VAR_8);
 }
}
