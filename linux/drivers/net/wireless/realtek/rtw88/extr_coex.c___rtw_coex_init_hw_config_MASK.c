
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_coex {int stop_dm; int freeze; scalar_t__ wl_rf_off; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtw_dev*) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*) ;
 int FUNC_3 (struct rtw_dev*,int,int ) ;
 int FUNC_4 (struct rtw_dev*) ;
 int FUNC_5 (struct rtw_dev*) ;
 int FUNC_6 (struct rtw_dev*,int ,int) ;
 int FUNC_7 (struct rtw_dev*,int ) ;
 int FUNC_8 (struct rtw_dev*,int,int ) ;
 int FUNC_9 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void FUNC_10(struct rtw_dev *VAR_9, bool VAR_10)
{
 struct rtw_coex *VAR_11 = &VAR_9->coex;

 FUNC_0(VAR_9);
 FUNC_1(VAR_9);
 FUNC_5(VAR_9);
 FUNC_4(VAR_9);


 FUNC_6(VAR_9, VAR_8, 1);


 FUNC_6(VAR_9, VAR_6, 1);


 FUNC_6(VAR_9, VAR_7, 1);


 if (VAR_11->wl_rf_off) {
  FUNC_3(VAR_9, 1, VAR_4);
  FUNC_9(VAR_9, VAR_1, 0);
  VAR_11->stop_dm = 1;
 } else if (VAR_10) {
  FUNC_3(VAR_9, 1, VAR_5);
  FUNC_9(VAR_9, VAR_0 | VAR_2,
        1);
  VAR_11->stop_dm = 1;
 } else {
  FUNC_3(VAR_9, 1, VAR_3);
  FUNC_9(VAR_9, VAR_0 | VAR_2,
        1);
  VAR_11->stop_dm = 0;
  VAR_11->freeze = 1;
 }


 FUNC_7(VAR_9, 0);
 FUNC_8(VAR_9, 1, 0);
 FUNC_2(VAR_9);
}
