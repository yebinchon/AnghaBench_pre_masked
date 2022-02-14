
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_coex_stat {scalar_t__ wl_connected; scalar_t__ wl_linkscan_proc; scalar_t__ bt_inq_page; scalar_t__ bt_setup_link; scalar_t__ bt_whck_test; int wl_force_lps_ctrl; scalar_t__ wl_under_lps; scalar_t__ bt_disabled; int wl_coex_mode; int * cnt_wl; scalar_t__ wl_under_ips; } ;
struct rtw_coex_dm {scalar_t__ bt_status; int reason; } ;
struct rtw_coex {int freerun; scalar_t__ under_5g; scalar_t__ freeze; scalar_t__ stop_dm; struct rtw_coex_stat stat; struct rtw_coex_dm dm; } ;
struct rtw_dev {int mutex; struct rtw_coex coex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*) ;
 int FUNC_3 (struct rtw_dev*) ;
 int FUNC_4 (struct rtw_dev*) ;
 int FUNC_5 (struct rtw_dev*) ;
 int FUNC_6 (struct rtw_dev*) ;
 int FUNC_7 (struct rtw_dev*) ;
 int FUNC_8 (struct rtw_dev*) ;
 int FUNC_9 (struct rtw_dev*) ;
 int FUNC_10 (struct rtw_dev*) ;
 int FUNC_11 (struct rtw_dev*) ;
 int FUNC_12 (struct rtw_dev*) ;
 int FUNC_13 (struct rtw_dev*) ;
 int FUNC_14 (struct rtw_dev*,int ) ;
 int FUNC_15 (struct rtw_dev*,int ,int) ;

__attribute__((used)) static void FUNC_16(struct rtw_dev *VAR_6, u8 VAR_7)
{
 struct rtw_coex *VAR_8 = &VAR_6->coex;
 struct rtw_coex_dm *VAR_9 = &VAR_8->dm;
 struct rtw_coex_stat *VAR_10 = &VAR_8->stat;

 FUNC_0(&VAR_6->mutex);

 VAR_9->reason = VAR_7;


 FUNC_14(VAR_6, VAR_7);

 FUNC_12(VAR_6);

 if (VAR_8->stop_dm)
  return;

 if (VAR_10->wl_under_ips)
  return;

 if (VAR_8->freeze && !VAR_10->bt_setup_link)
  return;

 VAR_10->cnt_wl[VAR_2]++;
 VAR_8->freerun = 0;


 if (VAR_8->under_5g) {
  VAR_10->wl_coex_mode = VAR_5;
  FUNC_10(VAR_6);
  goto exit;
 }

 VAR_10->wl_coex_mode = VAR_4;
 FUNC_15(VAR_6, VAR_3, 0);
 if (VAR_10->bt_disabled) {
  FUNC_9(VAR_6);
  goto exit;
 }

 if (VAR_10->wl_under_lps && !VAR_10->wl_force_lps_ctrl) {
  FUNC_7(VAR_6);
  goto exit;
 }

 if (VAR_10->bt_whck_test) {
  FUNC_4(VAR_6);
  goto exit;
 }

 if (VAR_10->bt_setup_link) {
  FUNC_3(VAR_6);
  goto exit;
 }

 if (VAR_10->bt_inq_page) {
  FUNC_2(VAR_6);
  goto exit;
 }

 if ((VAR_9->bt_status == VAR_1 ||
      VAR_9->bt_status == VAR_0) &&
      VAR_10->wl_connected) {
  FUNC_1(VAR_6);
  goto exit;
 }

 if (VAR_10->wl_linkscan_proc) {
  FUNC_6(VAR_6);
  goto exit;
 }

 if (VAR_10->wl_connected)
  FUNC_5(VAR_6);
 else
  FUNC_8(VAR_6);

exit:
 FUNC_13(VAR_6);
 FUNC_11(VAR_6);
}
