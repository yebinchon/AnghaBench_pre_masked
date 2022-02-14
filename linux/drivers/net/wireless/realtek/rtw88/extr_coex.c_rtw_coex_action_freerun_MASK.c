
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_efuse {scalar_t__ share_ant; } ;
struct rtw_coex_dm {int * wl_rssi_state; } ;
struct rtw_coex_stat {scalar_t__ wl_tput_dir; scalar_t__ wl_connected; } ;
struct rtw_coex {int freerun; struct rtw_coex_dm dm; struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_chip_info* chip; struct rtw_efuse efuse; struct rtw_coex coex; } ;
struct rtw_chip_info {int wl_rf_para_num; int * wl_rf_para_rx; int * wl_rf_para_tx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct rtw_dev*,int,int ) ;
 int FUNC_2 (struct rtw_dev*,int ) ;
 int FUNC_3 (struct rtw_dev*,int) ;
 int FUNC_4 (struct rtw_dev*,int,int) ;
 int FUNC_5 (struct rtw_dev*,int ) ;
 int FUNC_6 (struct rtw_dev*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct rtw_dev *VAR_4)
{
 struct rtw_coex *VAR_5 = &VAR_4->coex;
 struct rtw_coex_stat *VAR_6 = &VAR_5->stat;
 struct rtw_coex_dm *VAR_7 = &VAR_5->dm;
 struct rtw_efuse *VAR_8 = &VAR_4->efuse;
 struct rtw_chip_info *VAR_9 = VAR_4->chip;
 u8 VAR_10 = 0;

 if (VAR_8->share_ant)
  return;

 VAR_5->freerun = 1;

 if (VAR_6->wl_connected)
  FUNC_5(VAR_4, VAR_0);

 FUNC_1(VAR_4, 0, VAR_2);

 FUNC_6(VAR_4, VAR_1, 0);

 if (FUNC_0(VAR_7->wl_rssi_state[0]))
  VAR_10 = 2;
 else if (FUNC_0(VAR_7->wl_rssi_state[1]))
  VAR_10 = 3;
 else if (FUNC_0(VAR_7->wl_rssi_state[2]))
  VAR_10 = 4;
 else
  VAR_10 = 5;

 if (VAR_10 > VAR_9->wl_rf_para_num - 1)
  VAR_10 = VAR_9->wl_rf_para_num - 1;

 if (VAR_6->wl_tput_dir == VAR_3)
  FUNC_2(VAR_4, VAR_9->wl_rf_para_tx[VAR_10]);
 else
  FUNC_2(VAR_4, VAR_9->wl_rf_para_rx[VAR_10]);

 FUNC_3(VAR_4, 100);
 FUNC_4(VAR_4, 0, 100);
}
