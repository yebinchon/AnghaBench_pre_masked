
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_offset {scalar_t__ core_vendor_spec; scalar_t__ core_vendor_spec3; } ;
struct sdhci_msm_host {int use_cdclp533; struct sdhci_msm_offset* offset; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 struct sdhci_msm_host* FUNC_1 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_5)
{
 struct sdhci_pltfm_host *VAR_6 = FUNC_2(VAR_5);
 struct sdhci_msm_host *VAR_7 = FUNC_1(VAR_6);
 u32 VAR_8;
 const struct sdhci_msm_offset *VAR_9 =
     VAR_7->offset;

 if (!VAR_7->use_cdclp533) {
  VAR_8 = FUNC_0(VAR_5->ioaddr +
    VAR_9->core_vendor_spec3);
  VAR_8 &= ~VAR_4;
  FUNC_4(VAR_8, VAR_5->ioaddr +
    VAR_9->core_vendor_spec3);
 }

 VAR_8 = FUNC_0(VAR_5->ioaddr + VAR_9->core_vendor_spec);
 VAR_8 &= ~VAR_1;
 VAR_8 |= VAR_0;
 FUNC_4(VAR_8, VAR_5->ioaddr + VAR_9->core_vendor_spec);
 VAR_8 = FUNC_0(VAR_5->ioaddr + VAR_9->core_vendor_spec);
 VAR_8 &= ~VAR_2;
 VAR_8 &= ~VAR_3;
 FUNC_4(VAR_8, VAR_5->ioaddr + VAR_9->core_vendor_spec);





 FUNC_3();
}
