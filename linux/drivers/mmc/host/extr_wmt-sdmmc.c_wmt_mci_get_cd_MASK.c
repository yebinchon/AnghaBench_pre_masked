
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmt_mci_priv {int cd_inverted; scalar_t__ sdmmc_base; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct wmt_mci_priv* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_2)
{
 struct wmt_mci_priv *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4 = (FUNC_1(VAR_3->sdmmc_base + VAR_0) & VAR_1) >> 3;

 return !(VAR_4 ^ VAR_3->cd_inverted);
}
