
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sdhci_msm_offset {scalar_t__ core_dll_config; } ;
struct sdhci_host {scalar_t__ ioaddr; struct mmc_host* mmc; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (scalar_t__) ;
 struct sdhci_msm_offset* FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static inline int FUNC_6(struct sdhci_host *VAR_2, u8 VAR_3)
{
 u32 VAR_4 = 50;
 u8 VAR_5;
 struct mmc_host *VAR_6 = VAR_2->mmc;
 const struct sdhci_msm_offset *VAR_7 =
     FUNC_4(VAR_2);


 VAR_5 = !!(FUNC_3(VAR_2->ioaddr +
   VAR_7->core_dll_config) & VAR_0);

 while (VAR_5 != VAR_3) {
  if (--VAR_4 == 0) {
   FUNC_0(FUNC_1(VAR_6), "%s: CK_OUT_EN bit is not %d\n",
          FUNC_2(VAR_6), VAR_3);
   return -VAR_1;
  }
  FUNC_5(1);

  VAR_5 = !!(FUNC_3(VAR_2->ioaddr +
   VAR_7->core_dll_config) & VAR_0);
 }

 return 0;
}
