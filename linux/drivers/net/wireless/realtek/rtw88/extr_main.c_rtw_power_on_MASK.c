
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtw_fw_state {int firmware; int completion; } ;
struct TYPE_4__ {int btcoex; } ;
struct rtw_dev {TYPE_2__ efuse; struct rtw_fw_state fw; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* phy_set_param ) (struct rtw_dev*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*,struct rtw_fw_state*) ;
 int FUNC_3 (struct rtw_dev*,char*) ;
 int FUNC_4 (struct rtw_dev*) ;
 int FUNC_5 (struct rtw_dev*) ;
 int FUNC_6 (struct rtw_dev*) ;
 int FUNC_7 (struct rtw_dev*) ;
 int FUNC_8 (struct rtw_dev*) ;
 int FUNC_9 (struct rtw_dev*) ;
 int FUNC_10 (struct rtw_dev*) ;
 int FUNC_11 (struct rtw_dev*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct rtw_dev *VAR_1)
{
 struct rtw_chip_info *VAR_2 = VAR_1->chip;
 struct rtw_fw_state *VAR_3 = &VAR_1->fw;
 bool VAR_4;
 int VAR_5;

 VAR_5 = FUNC_6(VAR_1);
 if (VAR_5) {
  FUNC_3(VAR_1, "failed to setup hci\n");
  goto err;
 }


 VAR_5 = FUNC_10(VAR_1);
 if (VAR_5) {
  FUNC_3(VAR_1, "failed to power on mac\n");
  goto err;
 }

 FUNC_12(&VAR_3->completion);
 if (!VAR_3->firmware) {
  VAR_5 = -VAR_0;
  FUNC_3(VAR_1, "failed to load firmware\n");
  goto err;
 }

 VAR_5 = FUNC_2(VAR_1, VAR_3);
 if (VAR_5) {
  FUNC_3(VAR_1, "failed to download firmware\n");
  goto err_off;
 }


 VAR_5 = FUNC_8(VAR_1);
 if (VAR_5) {
  FUNC_3(VAR_1, "failed to configure mac\n");
  goto err_off;
 }

 VAR_2->ops->phy_set_param(VAR_1);

 VAR_5 = FUNC_7(VAR_1);
 if (VAR_5) {
  FUNC_3(VAR_1, "failed to start hci\n");
  goto err_off;
 }


 FUNC_4(VAR_1);
 FUNC_5(VAR_1);

 VAR_4 = !VAR_1->efuse.btcoex;
 FUNC_1(VAR_1);
 FUNC_0(VAR_1, VAR_4);

 return 0;

err_off:
 FUNC_9(VAR_1);

err:
 return VAR_5;
}
