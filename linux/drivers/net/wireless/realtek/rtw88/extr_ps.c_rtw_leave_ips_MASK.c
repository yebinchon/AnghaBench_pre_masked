
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int ) ;
 int FUNC_1 (struct rtw_dev*,char*) ;
 int FUNC_2 (struct rtw_dev*) ;
 int FUNC_3 (struct rtw_dev*,int ,struct rtw_dev*) ;
 int VAR_1 ;

int FUNC_4(struct rtw_dev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_2, "failed to leave ips state\n");
  return VAR_3;
 }

 FUNC_3(VAR_2, VAR_1, VAR_2);

 FUNC_0(VAR_2, VAR_0);

 return 0;
}
