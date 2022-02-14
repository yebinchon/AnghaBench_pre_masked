
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_coex_stat {int wl_slot_extend; } ;
struct rtw_coex {scalar_t__ stop_dm; struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct rtw_dev*,int ) ;
 int FUNC_1 (struct rtw_dev*,int,int ) ;
 int FUNC_2 (struct rtw_dev*,int ,int) ;
 int FUNC_3 (struct rtw_dev*,scalar_t__) ;
 int FUNC_4 (struct rtw_dev*,int ,int) ;
 int FUNC_5 (struct rtw_dev*,scalar_t__,scalar_t__*) ;

void FUNC_6(struct rtw_dev *VAR_11, u8 VAR_12)
{
 struct rtw_coex *VAR_13 = &VAR_11->coex;
 struct rtw_coex_stat *VAR_14 = &VAR_13->stat;
 u8 VAR_15[6] = {0};

 if (VAR_13->stop_dm)
  return;

 if (VAR_12 == VAR_2) {
  FUNC_4(VAR_11, VAR_6, 1);

  FUNC_1(VAR_11, 1, VAR_8);
  FUNC_0(VAR_11, VAR_4);
 } else if (VAR_12 == VAR_1) {
  FUNC_4(VAR_11, VAR_6, 1);


  FUNC_1(VAR_11, 1, VAR_7);


  FUNC_2(VAR_11, VAR_9, 1);


  VAR_15[0] = VAR_0;
  VAR_15[1] = VAR_10;
  FUNC_5(VAR_11, VAR_15[0], &VAR_15[1]);
  VAR_14->wl_slot_extend = 1;
  FUNC_0(VAR_11, VAR_3);
 } else {
  FUNC_4(VAR_11, VAR_6, 0);

  FUNC_2(VAR_11, VAR_9, 0);

  FUNC_0(VAR_11, VAR_5);
 }

 FUNC_3(VAR_11, VAR_12);
}
