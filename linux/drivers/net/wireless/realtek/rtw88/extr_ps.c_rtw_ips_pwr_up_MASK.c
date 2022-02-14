
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*) ;
 int FUNC_1 (struct rtw_dev*,char*) ;
 int FUNC_2 (struct rtw_dev*,int ) ;
 int FUNC_3 (struct rtw_dev*) ;

__attribute__((used)) static int FUNC_4(struct rtw_dev *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  FUNC_1(VAR_1, "leave idle state failed\n");

 FUNC_3(VAR_1);
 FUNC_2(VAR_1, VAR_0);

 return VAR_2;
}
