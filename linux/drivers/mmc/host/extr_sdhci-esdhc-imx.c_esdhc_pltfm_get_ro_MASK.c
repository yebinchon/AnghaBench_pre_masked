
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ ioaddr; int mmc; } ;
struct esdhc_platform_data {int wp_type; } ;
struct pltfm_imx_data {struct esdhc_platform_data boarddata; } ;


 unsigned int VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct pltfm_imx_data* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;

__attribute__((used)) static unsigned int FUNC_4(struct sdhci_host *VAR_3)
{
 struct sdhci_pltfm_host *VAR_4 = FUNC_3(VAR_3);
 struct pltfm_imx_data *VAR_5 = FUNC_2(VAR_4);
 struct esdhc_platform_data *VAR_6 = &VAR_5->boarddata;

 switch (VAR_6->wp_type) {
 case 129:
  return FUNC_0(VAR_3->mmc);
 case 130:
  return !(FUNC_1(VAR_3->ioaddr + VAR_1) &
          VAR_2);
 case 128:
  break;
 }

 return -VAR_0;
}
