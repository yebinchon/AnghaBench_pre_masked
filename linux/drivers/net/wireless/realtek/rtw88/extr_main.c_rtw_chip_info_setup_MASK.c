
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_dev {int dummy; } ;


 int FUNC_0 (struct rtw_dev*) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*) ;
 int FUNC_3 (struct rtw_dev*,char*) ;

int FUNC_4(struct rtw_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0, "failed to setup chip parameters\n");
  goto err_out;
 }

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0, "failed to setup chip efuse info\n");
  goto err_out;
 }

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0, "failed to setup chip board info\n");
  goto err_out;
 }

 return 0;

err_out:
 return VAR_1;
}
