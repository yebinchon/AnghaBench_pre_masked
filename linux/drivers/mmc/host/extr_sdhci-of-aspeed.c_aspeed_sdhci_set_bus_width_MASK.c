
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct aspeed_sdhci {struct aspeed_sdc* parent; } ;
struct aspeed_sdc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aspeed_sdc*,struct aspeed_sdhci*,int) ;
 struct aspeed_sdhci* FUNC_1 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*,int ) ;
 int FUNC_4 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_4, int VAR_5)
{
 struct sdhci_pltfm_host *VAR_6;
 struct aspeed_sdhci *VAR_7;
 struct aspeed_sdc *VAR_8;
 u8 VAR_9;

 VAR_6 = FUNC_2(VAR_4);
 VAR_7 = FUNC_1(VAR_6);
 VAR_8 = VAR_7->parent;


 FUNC_0(VAR_8, VAR_7,
           VAR_5 == VAR_1);


 VAR_9 = FUNC_3(VAR_4, VAR_3);
 if (VAR_5 == VAR_0)
  VAR_9 |= VAR_2;
 else
  VAR_9 &= ~VAR_2;
 FUNC_4(VAR_4, VAR_9, VAR_3);
}
