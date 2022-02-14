
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_efuse {int share_ant; } ;
struct rtw_coex_dm {int * bt_rssi_state; int * wl_rssi_state; } ;
struct rtw_coex_stat {int bt_a2dp_sink; scalar_t__ wl_gl_busy; } ;
struct rtw_coex {struct rtw_coex_dm dm; struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_efuse efuse; struct rtw_coex coex; } ;
 scalar_t__ FUNC_0 (int ) ;
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

__attribute__((used)) static void FUNC_13(struct rtw_dev *VAR_0)
{
 struct rtw_coex *VAR_1 = &VAR_0->coex;
 struct rtw_coex_stat *VAR_2 = &VAR_1->stat;
 struct rtw_coex_dm *VAR_3 = &VAR_1->dm;
 struct rtw_efuse *VAR_4 = &VAR_0->efuse;
 u8 VAR_5;


 if (!VAR_4->share_ant && VAR_2->wl_gl_busy &&
     FUNC_0(VAR_3->wl_rssi_state[3]) &&
     FUNC_0(VAR_3->bt_rssi_state[0])) {
  FUNC_11(VAR_0);
  return;
 }

 VAR_5 = FUNC_12(VAR_0);

 switch (VAR_5) {
 case 132:
  FUNC_6(VAR_0);
  break;
 case 131:
  FUNC_7(VAR_0);
  break;
 case 136:
  if (VAR_2->bt_a2dp_sink)
   FUNC_5(VAR_0);
  else
   FUNC_1(VAR_0);
  break;
 case 129:
  FUNC_9(VAR_0);
  break;
 case 135:
  FUNC_2(VAR_0);
  break;
 case 134:
  FUNC_3(VAR_0);
  break;
 case 128:
  FUNC_10(VAR_0);
  break;
 case 133:
  FUNC_4(VAR_0);
  break;
 default:
 case 130:
  FUNC_8(VAR_0);
  break;
 }
}
