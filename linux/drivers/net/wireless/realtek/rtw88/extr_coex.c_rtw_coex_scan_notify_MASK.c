
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_coex_stat {int wl_hi_pri_task2; } ;
struct rtw_coex {int freeze; scalar_t__ stop_dm; struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct rtw_dev*,int ) ;
 int FUNC_1 (struct rtw_dev*,int,int ) ;
 int FUNC_2 (struct rtw_dev*,int,int) ;

void FUNC_3(struct rtw_dev *VAR_12, u8 VAR_13)
{
 struct rtw_coex *VAR_14 = &VAR_12->coex;
 struct rtw_coex_stat *VAR_15 = &VAR_14->stat;

 if (VAR_14->stop_dm)
  return;

 VAR_14->freeze = 0;

 if (VAR_13 != VAR_3)
  FUNC_2(VAR_12, VAR_7 | VAR_9 |
        VAR_8, 1);

 if (VAR_13 == VAR_6) {
  FUNC_1(VAR_12, 1, VAR_11);
  FUNC_0(VAR_12, VAR_1);
 } else if ((VAR_13 == VAR_5) || (VAR_13 == VAR_4)) {
  VAR_15->wl_hi_pri_task2 = 1;


  FUNC_1(VAR_12, 1, VAR_10);
  FUNC_0(VAR_12, VAR_0);
 } else {
  VAR_15->wl_hi_pri_task2 = 0;
  FUNC_0(VAR_12, VAR_2);
 }
}
