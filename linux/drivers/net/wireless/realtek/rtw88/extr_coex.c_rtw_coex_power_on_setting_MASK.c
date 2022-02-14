
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_coex {int stop_dm; int wl_rf_off; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*,int,int ) ;
 int FUNC_3 (struct rtw_dev*) ;
 int FUNC_4 (struct rtw_dev*,int,int) ;
 int FUNC_5 (struct rtw_dev*,int ,int) ;

void FUNC_6(struct rtw_dev *VAR_2)
{
 struct rtw_coex *VAR_3 = &VAR_2->coex;

 VAR_3->stop_dm = 1;
 VAR_3->wl_rf_off = 0;


 FUNC_5(VAR_2, VAR_1, FUNC_0(0) | FUNC_0(1));

 FUNC_1(VAR_2);
 FUNC_3(VAR_2);


 FUNC_2(VAR_2, 1, VAR_0);


 FUNC_4(VAR_2, 0xff1a, 0x0);
}
