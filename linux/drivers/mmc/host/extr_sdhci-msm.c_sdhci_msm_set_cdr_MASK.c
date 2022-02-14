
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_msm_offset {scalar_t__ core_dll_config; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct sdhci_msm_offset* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_2, bool VAR_3)
{
 const struct sdhci_msm_offset *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5, VAR_6 = FUNC_0(VAR_2->ioaddr +
           VAR_4->core_dll_config);

 VAR_5 = VAR_6;
 if (VAR_3) {
  VAR_5 |= VAR_0;
  VAR_5 &= ~VAR_1;
 } else {
  VAR_5 &= ~VAR_0;
  VAR_5 |= VAR_1;
 }

 if (VAR_5 != VAR_6) {
  FUNC_2(VAR_5, VAR_2->ioaddr +
          VAR_4->core_dll_config);
 }
}
