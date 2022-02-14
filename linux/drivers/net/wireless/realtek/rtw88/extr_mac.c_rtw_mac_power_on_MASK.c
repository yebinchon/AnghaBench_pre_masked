
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,char*) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*,int) ;
 int FUNC_3 (struct rtw_dev*) ;

int FUNC_4(struct rtw_dev *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_2(VAR_1, 1);
 if (VAR_2 == -VAR_0) {
  FUNC_2(VAR_1, 0);
  VAR_2 = FUNC_2(VAR_1, 1);
  if (VAR_2)
   goto err;
 } else if (VAR_2) {
  goto err;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  goto err;

 return 0;

err:
 FUNC_0(VAR_1, "mac power on failed");
 return VAR_2;
}
