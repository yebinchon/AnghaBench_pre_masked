
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct wmt_mci_priv {scalar_t__ sdmmc_base; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct wmt_mci_priv* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_7, u32 VAR_8, u8 VAR_9)
{
 struct wmt_mci_priv *VAR_10;
 u32 VAR_11;

 VAR_10 = FUNC_0(VAR_7);


 FUNC_2(VAR_2, VAR_10->sdmmc_base + VAR_6);


 FUNC_2(VAR_8, VAR_10->sdmmc_base + VAR_5);

 FUNC_2(0x00, VAR_10->sdmmc_base + VAR_4);

 if (VAR_9 == VAR_3) {
  VAR_11 = FUNC_1(VAR_10->sdmmc_base + VAR_4);
  FUNC_2(VAR_11 & VAR_0, VAR_10->sdmmc_base +
         VAR_4);
 } else {
  VAR_11 = FUNC_1(VAR_10->sdmmc_base + VAR_4);
  FUNC_2(VAR_11 | VAR_1, VAR_10->sdmmc_base +
         VAR_4);
 }
}
