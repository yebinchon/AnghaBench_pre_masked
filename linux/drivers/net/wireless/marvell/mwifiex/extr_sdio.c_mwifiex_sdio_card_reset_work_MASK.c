
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_mmc_card {int work_flags; struct sdio_func* func; } ;
struct sdio_func {int dev; TYPE_1__* card; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mwifiex_adapter*) ;
 int FUNC_4 (struct mwifiex_adapter*) ;
 int FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*) ;

__attribute__((used)) static void FUNC_7(struct mwifiex_adapter *VAR_2)
{
 struct sdio_mmc_card *VAR_3 = VAR_2->card;
 struct sdio_func *VAR_4 = VAR_3->func;
 int VAR_5;

 FUNC_4(VAR_2);


 FUNC_5(VAR_4);
 FUNC_2(VAR_4->card->host);
 FUNC_6(VAR_4);




 FUNC_0(VAR_1, &VAR_3->work_flags);
 FUNC_0(VAR_0, &VAR_3->work_flags);

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5)
  FUNC_1(&VAR_4->dev, "reinit failed: %d\n", VAR_5);
}
