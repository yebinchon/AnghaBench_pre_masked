
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int ier; } ;
struct sdhci_esdhc {scalar_t__ quirk_unreliable_pulse_detection; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *,char*) ;
 struct sdhci_esdhc* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*,int) ;
 int FUNC_6 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct sdhci_host *VAR_7, u8 VAR_8)
{
 struct sdhci_pltfm_host *VAR_9 = FUNC_3(VAR_7);
 struct sdhci_esdhc *VAR_10 = FUNC_2(VAR_9);
 u32 VAR_11;

 FUNC_5(VAR_7, VAR_8);

 FUNC_6(VAR_7, VAR_7->ier, VAR_4);
 FUNC_6(VAR_7, VAR_7->ier, VAR_6);

 if (FUNC_1(((void*)0), ((void*)0), "fsl,p2020-esdhc"))
  FUNC_0(5);

 if (VAR_8 & VAR_5) {
  VAR_11 = FUNC_4(VAR_7, VAR_2);
  VAR_11 &= ~VAR_3;
  FUNC_6(VAR_7, VAR_11, VAR_2);

  if (VAR_10->quirk_unreliable_pulse_detection) {
   VAR_11 = FUNC_4(VAR_7, VAR_0);
   VAR_11 &= ~VAR_1;
   FUNC_6(VAR_7, VAR_11, VAR_0);
  }
 }
}
