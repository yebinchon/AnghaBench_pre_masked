
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_mmc_card {int dummy; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;


 int FUNC_0 (struct sdio_mmc_card*) ;
 int FUNC_1 (struct sdio_mmc_card*) ;

__attribute__((used)) static void FUNC_2(struct mwifiex_adapter *VAR_0)
{
 struct sdio_mmc_card *VAR_1 = VAR_0->card;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
