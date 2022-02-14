
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_mmc_card {int func; int * adapter; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct mwifiex_adapter *VAR_0)
{
 struct sdio_mmc_card *VAR_1 = VAR_0->card;

 if (VAR_0->card) {
  VAR_1->adapter = ((void*)0);
  FUNC_0(VAR_1->func);
  FUNC_1(VAR_1->func);
  FUNC_2(VAR_1->func);
 }
}
