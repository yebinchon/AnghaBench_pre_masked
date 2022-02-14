
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdio_mmc_card {TYPE_1__* reg; } ;
struct mwifiex_adapter {int ioport; struct sdio_mmc_card* card; } ;
struct TYPE_2__ {int cmd_cfg_1; int cmd_cfg_0; int card_cfg_2_1_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mwifiex_adapter*,int ,int*) ;
 scalar_t__ FUNC_1 (struct mwifiex_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_adapter *VAR_4)
{
 u8 VAR_5;
 struct sdio_mmc_card *VAR_6 = VAR_4->card;

 VAR_4->ioport = VAR_3;


 if (FUNC_0(VAR_4, VAR_6->reg->card_cfg_2_1_reg, &VAR_5))
  return -1;
 if (FUNC_1(VAR_4, VAR_6->reg->card_cfg_2_1_reg,
         VAR_5 | VAR_0))
  return -1;


 if (FUNC_0(VAR_4, VAR_6->reg->cmd_cfg_0, &VAR_5))
  return -1;
 if (FUNC_1(VAR_4, VAR_6->reg->cmd_cfg_0,
         VAR_5 | VAR_2))
  return -1;




 if (FUNC_0(VAR_4, VAR_6->reg->cmd_cfg_1, &VAR_5))
  return -1;
 if (FUNC_1(VAR_4, VAR_6->reg->cmd_cfg_1,
         VAR_5 | VAR_1))
  return -1;

 return 0;
}
