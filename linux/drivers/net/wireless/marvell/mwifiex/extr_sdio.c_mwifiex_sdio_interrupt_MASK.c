
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_mmc_card {struct mwifiex_adapter* adapter; } ;
struct sdio_func {int dummy; } ;
struct mwifiex_adapter {scalar_t__ ps_state; int pps_uapsd_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mwifiex_adapter*) ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 int FUNC_2 (char*,struct sdio_func*,struct sdio_mmc_card*,struct mwifiex_adapter*) ;
 struct sdio_mmc_card* FUNC_3 (struct sdio_func*) ;

__attribute__((used)) static void
FUNC_4(struct sdio_func *VAR_2)
{
 struct mwifiex_adapter *VAR_3;
 struct sdio_mmc_card *VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (!VAR_4 || !VAR_4->adapter) {
  FUNC_2("int: func=%p card=%p adapter=%p\n",
         VAR_2, VAR_4, VAR_4 ? VAR_4->adapter : ((void*)0));
  return;
 }
 VAR_3 = VAR_4->adapter;

 if (!VAR_3->pps_uapsd_mode && VAR_3->ps_state == VAR_1)
  VAR_3->ps_state = VAR_0;

 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
}
