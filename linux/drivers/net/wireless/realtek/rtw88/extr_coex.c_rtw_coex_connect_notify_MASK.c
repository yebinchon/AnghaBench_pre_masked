
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_coex_stat {int wl_hi_pri_task1; int* cnt_wl; } ;
struct rtw_coex {int freeze; int defreeze_work; scalar_t__ stop_dm; struct rtw_coex_stat stat; } ;
struct rtw_dev {int hw; struct rtw_coex coex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,int,int ) ;
 int FUNC_3 (struct rtw_dev*,int,int) ;

void FUNC_4(struct rtw_dev *VAR_14, u8 VAR_15)
{
 struct rtw_coex *VAR_16 = &VAR_14->coex;
 struct rtw_coex_stat *VAR_17 = &VAR_16->stat;

 if (VAR_16->stop_dm)
  return;

 FUNC_3(VAR_14, VAR_8 | VAR_10 |
       VAR_9, 1);

 if (VAR_15 == VAR_1) {
  FUNC_2(VAR_14, 1, VAR_12);
  FUNC_1(VAR_14, VAR_7);
 } else if (VAR_15 == VAR_0) {
  FUNC_2(VAR_14, 1, VAR_12);
  FUNC_1(VAR_14, VAR_6);
 } else if (VAR_15 == VAR_2) {
  VAR_17->wl_hi_pri_task1 = 1;
  VAR_17->cnt_wl[VAR_3] = 2;


  FUNC_2(VAR_14, 1, VAR_11);

  FUNC_1(VAR_14, VAR_5);




  VAR_16->freeze = 1;
  FUNC_0(VAR_14->hw, &VAR_16->defreeze_work,
          5 * VAR_13);
 } else {
  VAR_17->wl_hi_pri_task1 = 0;
  VAR_16->freeze = 0;

  FUNC_1(VAR_14, VAR_4);
 }
}
