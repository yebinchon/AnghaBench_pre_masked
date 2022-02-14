
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_fw_state {int firmware; int completion; } ;
struct rtw_dev {struct rtw_fw_state fw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtw_dev*,struct rtw_fw_state*) ;
 int FUNC_1 (struct rtw_dev*,char*) ;
 int FUNC_2 (struct rtw_dev*) ;
 int FUNC_3 (struct rtw_dev*) ;
 int FUNC_4 (struct rtw_dev*) ;
 int FUNC_5 (struct rtw_dev*,int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct rtw_dev *VAR_3)
{
 struct rtw_fw_state *VAR_4 = &VAR_3->fw;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_3, "failed to setup hci\n");
  goto err;
 }

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_3, "failed to power on mac\n");
  goto err;
 }

 FUNC_5(VAR_3, VAR_2, VAR_0);

 FUNC_6(&VAR_4->completion);
 if (!VAR_4->firmware) {
  VAR_5 = -VAR_1;
  FUNC_1(VAR_3, "failed to load firmware\n");
  goto err;
 }

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_3, "failed to download firmware\n");
  goto err_off;
 }

 return 0;

err_off:
 FUNC_3(VAR_3);

err:
 return VAR_5;
}
