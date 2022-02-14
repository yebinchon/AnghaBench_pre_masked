
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_mmc_card {TYPE_1__* reg; struct sdio_func* func; } ;
struct sdio_func {int dummy; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;
struct TYPE_2__ {int host_int_mask_reg; } ;


 int FUNC_0 (struct sdio_func*,int ,int ) ;
 int FUNC_1 (struct sdio_func*) ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*) ;

__attribute__((used)) static void FUNC_4(struct mwifiex_adapter *VAR_0)
{
 struct sdio_mmc_card *VAR_1 = VAR_0->card;
 struct sdio_func *VAR_2 = VAR_1->func;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2, VAR_1->reg->host_int_mask_reg, 0);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
}
