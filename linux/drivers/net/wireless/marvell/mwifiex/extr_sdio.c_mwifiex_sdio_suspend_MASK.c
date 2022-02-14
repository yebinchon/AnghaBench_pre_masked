
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_mmc_card {struct mwifiex_adapter* adapter; int fw_done; } ;
struct sdio_func {int dummy; } ;
struct mwifiex_adapter {int work_flags; } ;
struct device {int dummy; } ;
typedef int mmc_pm_flag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct sdio_func* FUNC_2 (struct device*) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_4 (struct mwifiex_adapter*) ;
 int FUNC_5 (struct mwifiex_adapter*) ;
 int FUNC_6 (struct mwifiex_adapter*) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (struct sdio_func*) ;
 struct sdio_mmc_card* FUNC_9 (struct sdio_func*) ;
 int FUNC_10 (struct sdio_func*) ;
 int FUNC_11 (struct sdio_func*,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_7)
{
 struct sdio_func *VAR_8 = FUNC_2(VAR_7);
 struct sdio_mmc_card *VAR_9;
 struct mwifiex_adapter *VAR_10;
 mmc_pm_flag_t VAR_11 = 0;
 int VAR_12 = 0;

 VAR_11 = FUNC_10(VAR_8);
 FUNC_7("cmd: %s: suspend: PM flag = 0x%x\n",
   FUNC_8(VAR_8), VAR_11);
 if (!(VAR_11 & VAR_4)) {
  FUNC_1(VAR_7, "%s: cannot remain alive while host is"
   " suspended\n", FUNC_8(VAR_8));
  return -VAR_1;
 }

 VAR_9 = FUNC_9(VAR_8);
 if (!VAR_9) {
  FUNC_1(VAR_7, "suspend: invalid card\n");
  return 0;
 }


 FUNC_13(&VAR_9->fw_done);

 VAR_10 = VAR_9->adapter;
 if (!VAR_10) {
  FUNC_1(VAR_7, "adapter is not valid\n");
  return 0;
 }

 FUNC_6(VAR_10);


 if (!FUNC_5(VAR_10)) {
  FUNC_3(VAR_10, VAR_2,
       "cmd: failed to suspend\n");
  FUNC_0(VAR_5, &VAR_10->work_flags);
  FUNC_4(VAR_10);
  return -VAR_0;
 }

 FUNC_3(VAR_10, VAR_3,
      "cmd: suspend with MMC_PM_KEEP_POWER\n");
 VAR_12 = FUNC_11(VAR_8, VAR_4);


 FUNC_12(VAR_6, &VAR_10->work_flags);
 FUNC_0(VAR_5, &VAR_10->work_flags);

 return VAR_12;
}
