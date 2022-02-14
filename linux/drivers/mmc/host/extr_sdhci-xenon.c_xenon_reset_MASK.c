
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xenon_priv {int sdhc_id; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;


 struct xenon_priv* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sdhci_host *VAR_0, u8 VAR_1)
{
 struct sdhci_pltfm_host *VAR_2 = FUNC_1(VAR_0);
 struct xenon_priv *VAR_3 = FUNC_0(VAR_2);

 FUNC_2(VAR_0, VAR_1);
 FUNC_3(VAR_0, VAR_3->sdhc_id, VAR_1);
}
