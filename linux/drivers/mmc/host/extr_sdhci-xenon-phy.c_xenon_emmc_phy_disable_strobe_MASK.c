
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xenon_priv {scalar_t__ phy_type; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct xenon_priv* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct sdhci_host *VAR_10)
{
 struct sdhci_pltfm_host *VAR_11 = FUNC_1(VAR_10);
 struct xenon_priv *VAR_12 = FUNC_0(VAR_11);
 u32 VAR_13;


 VAR_13 = FUNC_2(VAR_10, VAR_9);
 VAR_13 &= ~(VAR_7 | VAR_8);
 FUNC_3(VAR_10, VAR_13, VAR_9);


 if (VAR_12->phy_type == VAR_0) {
  VAR_13 = FUNC_2(VAR_10, VAR_5);
  VAR_13 &= ~(VAR_3 | VAR_4);
  FUNC_3(VAR_10, VAR_13, VAR_5);
 } else {
  VAR_13 = FUNC_2(VAR_10, VAR_6);
  VAR_13 &= ~(VAR_1 | VAR_2);
  FUNC_3(VAR_10, VAR_13, VAR_6);
 }
}
