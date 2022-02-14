
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_coex_stat {int wl_under_lps; scalar_t__ wl_force_lps_ctrl; } ;
struct rtw_coex {scalar_t__ stop_dm; struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtw_dev*) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,int ,int) ;

void FUNC_3(struct rtw_dev *VAR_4, u8 VAR_5)
{
 struct rtw_coex *VAR_6 = &VAR_4->coex;
 struct rtw_coex_stat *VAR_7 = &VAR_6->stat;

 if (VAR_6->stop_dm)
  return;

 if (VAR_5 == VAR_1) {
  VAR_7->wl_under_lps = 1;

  if (VAR_7->wl_force_lps_ctrl) {

   FUNC_2(VAR_4, VAR_3, 1);
  } else {

   FUNC_2(VAR_4, VAR_3, 0);

   FUNC_1(VAR_4, VAR_2);
  }
 } else if (VAR_5 == VAR_0) {
  VAR_7->wl_under_lps = 0;


  FUNC_2(VAR_4, VAR_3, 1);

  if (!VAR_7->wl_force_lps_ctrl)
   FUNC_0(VAR_4);
 }
}
