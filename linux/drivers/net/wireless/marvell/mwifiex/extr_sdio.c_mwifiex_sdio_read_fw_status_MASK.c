
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sdio_mmc_card {struct mwifiex_sdio_card_reg* reg; } ;
struct mwifiex_sdio_card_reg {int status_reg_1; int status_reg_0; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;


 scalar_t__ FUNC_0 (struct mwifiex_adapter*,int ,int*) ;

__attribute__((used)) static int
FUNC_1(struct mwifiex_adapter *VAR_0, u16 *VAR_1)
{
 struct sdio_mmc_card *VAR_2 = VAR_0->card;
 const struct mwifiex_sdio_card_reg *VAR_3 = VAR_2->reg;
 u8 VAR_4, VAR_5;

 if (FUNC_0(VAR_0, VAR_3->status_reg_0, &VAR_4))
  return -1;

 if (FUNC_0(VAR_0, VAR_3->status_reg_1, &VAR_5))
  return -1;

 *VAR_1 = (u16)((VAR_5 << 8) | VAR_4);
 return 0;
}
