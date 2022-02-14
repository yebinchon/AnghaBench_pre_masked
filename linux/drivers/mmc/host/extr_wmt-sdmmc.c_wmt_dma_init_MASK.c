
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmt_mci_priv {scalar_t__ sdmmc_base; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct wmt_mci_priv* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_3)
{
 struct wmt_mci_priv *VAR_4;

 VAR_4 = FUNC_0(VAR_3);

 FUNC_2(VAR_1, VAR_4->sdmmc_base + VAR_2);
 FUNC_2(VAR_0, VAR_4->sdmmc_base + VAR_2);
 if ((FUNC_1(VAR_4->sdmmc_base + VAR_2) & VAR_0) != 0)
  return 0;
 else
  return 1;
}
