
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wmt_mci_priv {TYPE_1__* cmd; scalar_t__ sdmmc_base; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int * resp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct wmt_mci_priv* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_1)
{
 struct wmt_mci_priv *VAR_2;
 int VAR_3, VAR_4;
 u8 VAR_5;
 u32 VAR_6;

 VAR_2 = FUNC_1(VAR_1);

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_6 = 0;
  for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
   if ((VAR_3 == 3) && (VAR_4 == 3))
    VAR_5 = FUNC_2(VAR_2->sdmmc_base + VAR_0);
   else
    VAR_5 = FUNC_2(VAR_2->sdmmc_base + VAR_0 +
       (VAR_3*4) + VAR_4 + 1);
   VAR_6 |= (VAR_5 << (VAR_4 * 8));
  }
  VAR_2->cmd->resp[VAR_3] = FUNC_0(VAR_6);
 }
}
