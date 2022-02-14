
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sdio_mmc_card {TYPE_1__* reg; } ;
struct mwifiex_adapter {int winner; struct sdio_mmc_card* card; } ;
struct TYPE_2__ {int status_reg_0; } ;


 scalar_t__ FUNC_0 (struct mwifiex_adapter*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_adapter *VAR_0)
{
 int VAR_1 = 0;
 u8 VAR_2 = 0;
 struct sdio_mmc_card *VAR_3 = VAR_0->card;

 if (FUNC_0(VAR_0, VAR_3->reg->status_reg_0, &VAR_2))
  return -1;

 if (VAR_2)
  VAR_0->winner = 0;
 else
  VAR_0->winner = 1;

 return VAR_1;
}
