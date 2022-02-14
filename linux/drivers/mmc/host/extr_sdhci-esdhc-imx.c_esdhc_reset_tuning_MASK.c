
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;
struct pltfm_imx_data {TYPE_1__* socdata; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct pltfm_imx_data*) ;
 int FUNC_1 (scalar_t__) ;
 struct pltfm_imx_data* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_7)
{
 struct sdhci_pltfm_host *VAR_8 = FUNC_3(VAR_7);
 struct pltfm_imx_data *VAR_9 = FUNC_2(VAR_8);
 u32 VAR_10;


 if (FUNC_0(VAR_9)) {
  if (VAR_9->socdata->flags & VAR_0) {
   VAR_10 = FUNC_1(VAR_7->ioaddr + VAR_2);
   VAR_10 &= ~VAR_4;
   VAR_10 &= ~VAR_3;
   FUNC_4(VAR_10, VAR_7->ioaddr + VAR_2);
   FUNC_4(0, VAR_7->ioaddr + VAR_5);
  } else if (VAR_9->socdata->flags & VAR_1) {
   VAR_10 = FUNC_1(VAR_7->ioaddr + VAR_6);
   VAR_10 &= ~VAR_4;
   FUNC_4(VAR_10, VAR_7->ioaddr + VAR_6);
  }
 }
}
