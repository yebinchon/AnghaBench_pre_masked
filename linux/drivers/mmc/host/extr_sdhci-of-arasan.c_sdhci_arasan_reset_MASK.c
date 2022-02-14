
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct sdhci_arasan_data {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sdhci_arasan_data* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,int) ;
 int FUNC_4 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_4, u8 VAR_5)
{
 u8 VAR_6;
 struct sdhci_pltfm_host *VAR_7 = FUNC_1(VAR_4);
 struct sdhci_arasan_data *VAR_8 = FUNC_0(VAR_7);

 FUNC_3(VAR_4, VAR_5);

 if (VAR_8->quirks & VAR_0) {
  VAR_6 = FUNC_2(VAR_4, VAR_3);
  VAR_6 |= VAR_2 | VAR_1;
  FUNC_4(VAR_4, VAR_6, VAR_3);
 }
}
