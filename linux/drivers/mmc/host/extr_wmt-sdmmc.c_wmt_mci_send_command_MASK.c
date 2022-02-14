
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wmt_mci_priv {scalar_t__ sdmmc_base; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct wmt_mci_priv* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct wmt_mci_priv*,int ) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct mmc_host *VAR_10, u8 VAR_11, u8 VAR_12,
    u32 VAR_13, u8 VAR_14)
{
 struct wmt_mci_priv *VAR_15;
 u32 VAR_16;

 VAR_15 = FUNC_0(VAR_10);


 FUNC_3(VAR_11, VAR_15->sdmmc_base + VAR_2);
 FUNC_4(VAR_13, VAR_15->sdmmc_base + VAR_1);
 FUNC_3(VAR_14, VAR_15->sdmmc_base + VAR_4);


 VAR_16 = FUNC_1(VAR_15->sdmmc_base + VAR_3);
 FUNC_3(VAR_16 | VAR_0, VAR_15->sdmmc_base + VAR_3);


 FUNC_2(VAR_15, VAR_9);


 FUNC_3(0xFF, VAR_15->sdmmc_base + VAR_5);
 FUNC_3(0xFF, VAR_15->sdmmc_base + VAR_6);
 FUNC_3(0xFF, VAR_15->sdmmc_base + VAR_7);
 FUNC_3(0xFF, VAR_15->sdmmc_base + VAR_8);


 VAR_16 = FUNC_1(VAR_15->sdmmc_base + VAR_3);
 FUNC_3((VAR_16 & 0x0F) | (VAR_12 << 4),
        VAR_15->sdmmc_base + VAR_3);

 return 0;
}
