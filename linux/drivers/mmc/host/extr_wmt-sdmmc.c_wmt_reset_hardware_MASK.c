
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmt_mci_priv {int clk_sdmmc; scalar_t__ sdmmc_base; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,int) ;
 struct wmt_mci_priv* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_19)
{
 struct wmt_mci_priv *VAR_20;
 u32 VAR_21;

 VAR_20 = FUNC_1(VAR_19);


 VAR_21 = FUNC_2(VAR_20->sdmmc_base + VAR_10);
 FUNC_3(VAR_21 | VAR_2, VAR_20->sdmmc_base + VAR_10);


 VAR_21 = FUNC_2(VAR_20->sdmmc_base + VAR_11);
 FUNC_3(VAR_21 | VAR_3, VAR_20->sdmmc_base + VAR_11);


 FUNC_4(VAR_1 | VAR_0, VAR_20->sdmmc_base + VAR_9);


 FUNC_3(0xFF, VAR_20->sdmmc_base + VAR_15);
 FUNC_3(0xFF, VAR_20->sdmmc_base + VAR_16);


 FUNC_3(VAR_4 | VAR_5, VAR_20->sdmmc_base +
        VAR_13);
 FUNC_3(VAR_8 | VAR_7 |
        VAR_6, VAR_20->sdmmc_base + VAR_14);


 FUNC_4(8191, VAR_20->sdmmc_base + VAR_12);


 VAR_21 = FUNC_2(VAR_20->sdmmc_base + VAR_17);
 FUNC_3(VAR_21 | VAR_18, VAR_20->sdmmc_base + VAR_17);


 FUNC_0(VAR_20->clk_sdmmc, 400000);
}
