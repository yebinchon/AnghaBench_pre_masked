
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sdio_mmc_card {struct mwifiex_adapter* adapter; int fw_done; } ;
struct sdio_func {int num; } ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_adapter {int mfg_mode; int priv_num; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*,int ) ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 int FUNC_2 (struct mwifiex_private*) ;
 struct mwifiex_private* FUNC_3 (struct mwifiex_adapter*,int ) ;
 int FUNC_4 (struct mwifiex_private*,int ) ;
 int FUNC_5 (struct mwifiex_adapter*) ;
 int FUNC_6 (struct mwifiex_adapter*,scalar_t__*) ;
 struct sdio_mmc_card* FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct sdio_func *VAR_4)
{
 struct sdio_mmc_card *VAR_5;
 struct mwifiex_adapter *VAR_6;
 struct mwifiex_private *VAR_7;
 int VAR_8 = 0;
 u16 VAR_9;

 VAR_5 = FUNC_7(VAR_4);
 if (!VAR_5)
  return;

 FUNC_8(&VAR_5->fw_done);

 VAR_6 = VAR_5->adapter;
 if (!VAR_6 || !VAR_6->priv_num)
  return;

 FUNC_0(VAR_6, VAR_1, "info: SDIO func num=%d\n", VAR_4->num);

 VAR_8 = FUNC_6(VAR_6, &VAR_9);
 if (!VAR_8 && VAR_9 == VAR_0 &&
     !VAR_6->mfg_mode) {
  FUNC_1(VAR_6);

  VAR_7 = FUNC_3(VAR_6, VAR_2);
  FUNC_2(VAR_7);
  FUNC_4(VAR_7, VAR_3);
 }

 FUNC_5(VAR_6);
}
