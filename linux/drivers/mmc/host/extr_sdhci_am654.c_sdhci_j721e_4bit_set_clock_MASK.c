
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct sdhci_am654_data {int otap_del_sel; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct sdhci_am654_data* FUNC_1 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct sdhci_host *VAR_5,
           unsigned int VAR_6)
{
 struct sdhci_pltfm_host *VAR_7 = FUNC_2(VAR_5);
 struct sdhci_am654_data *VAR_8 = FUNC_1(VAR_7);
 int VAR_9, VAR_10;

 VAR_10 = VAR_0 | VAR_2;
 VAR_9 = (1 << VAR_1) |
       (VAR_8->otap_del_sel << VAR_3);
 FUNC_0(VAR_8->base, VAR_4, VAR_10, VAR_9);

 FUNC_3(VAR_5, VAR_6);
}
