
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdhci_pltfm_host {int xfer_mode_shadow; } ;
struct sdhci_host {int const ioaddr; } ;




 struct sdhci_pltfm_host* FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (int,int const) ;
 int FUNC_2 (int,int const) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_0, u16 VAR_1, int VAR_2)
{
 struct sdhci_pltfm_host *VAR_3 = FUNC_0(VAR_0);

 switch (VAR_2) {
 case 128:




  VAR_3->xfer_mode_shadow = VAR_1;
  return;
 case 129:
  FUNC_1((VAR_1 << 16) | VAR_3->xfer_mode_shadow,
   VAR_0->ioaddr + 128);
  return;
 }

 FUNC_2(VAR_1, VAR_0->ioaddr + VAR_2);
}
