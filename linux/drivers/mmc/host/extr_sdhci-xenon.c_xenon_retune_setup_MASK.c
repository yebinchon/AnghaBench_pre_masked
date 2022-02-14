
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xenon_priv {int tuning_count; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int tuning_count; int tuning_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct xenon_priv* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sdhci_host *VAR_6)
{
 struct sdhci_pltfm_host *VAR_7 = FUNC_1(VAR_6);
 struct xenon_priv *VAR_8 = FUNC_0(VAR_7);
 u32 VAR_9;


 VAR_9 = FUNC_2(VAR_6, VAR_5);
 VAR_9 &= ~VAR_4;
 FUNC_3(VAR_6, VAR_9, VAR_5);


 VAR_9 = FUNC_2(VAR_6, VAR_2);
 VAR_9 &= ~VAR_1;
 FUNC_3(VAR_6, VAR_9, VAR_2);
 VAR_9 = FUNC_2(VAR_6, VAR_0);
 VAR_9 &= ~VAR_1;
 FUNC_3(VAR_6, VAR_9, VAR_0);


 VAR_6->tuning_mode = VAR_3;

 VAR_6->tuning_count = 1 << (VAR_8->tuning_count - 1);
}
