
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_mmc_card {TYPE_1__* reg; struct sdio_func* func; } ;
struct sdio_func {int dummy; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;
struct TYPE_2__ {int host_int_enable; int host_int_mask_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct sdio_func*,int ,int ) ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*,int ) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*) ;

__attribute__((used)) static int FUNC_6(struct mwifiex_adapter *VAR_2)
{
 struct sdio_mmc_card *VAR_3 = VAR_2->card;
 struct sdio_func *VAR_4 = VAR_3->func;
 int VAR_5;

 FUNC_2(VAR_4);


 VAR_5 = FUNC_3(VAR_4, VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_2, VAR_0,
       "claim irq failed: ret=%d\n", VAR_5);
  goto out;
 }


 VAR_5 = FUNC_1(VAR_4, VAR_3->reg->host_int_mask_reg,
           VAR_3->reg->host_int_enable);
 if (VAR_5) {
  FUNC_0(VAR_2, VAR_0,
       "enable host interrupt failed\n");
  FUNC_5(VAR_4);
 }

out:
 FUNC_4(VAR_4);
 return VAR_5;
}
