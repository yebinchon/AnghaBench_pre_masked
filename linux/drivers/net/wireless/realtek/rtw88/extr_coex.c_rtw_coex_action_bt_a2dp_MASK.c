
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_efuse {scalar_t__ share_ant; } ;
struct rtw_coex_dm {int * wl_rssi_state; } ;
struct rtw_coex_stat {scalar_t__ wl_noisy_level; scalar_t__ wl_gl_busy; } ;
struct rtw_coex {struct rtw_coex_dm dm; struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_chip_info* chip; struct rtw_efuse efuse; struct rtw_coex coex; } ;
struct rtw_chip_info {int * wl_rf_para_rx; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtw_dev*,int,int ) ;
 int FUNC_2 (struct rtw_dev*,int ) ;
 int FUNC_3 (struct rtw_dev*,int) ;
 int FUNC_4 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void FUNC_5(struct rtw_dev *VAR_2)
{
 struct rtw_coex *VAR_3 = &VAR_2->coex;
 struct rtw_coex_stat *VAR_4 = &VAR_3->stat;
 struct rtw_coex_dm *VAR_5 = &VAR_3->dm;
 struct rtw_efuse *VAR_6 = &VAR_2->efuse;
 struct rtw_chip_info *VAR_7 = VAR_2->chip;
 u8 VAR_8, VAR_9;
 u32 VAR_10 = 0;

 if (VAR_6->share_ant) {

  if (VAR_4->wl_gl_busy && VAR_4->wl_noisy_level == 0)
   VAR_8 = 10;
  else
   VAR_8 = 9;

  VAR_10 = VAR_1;

  if (VAR_4->wl_gl_busy)
   VAR_9 = 13;
  else
   VAR_9 = 14;
 } else {

  VAR_8 = 112;

  if (FUNC_0(VAR_5->wl_rssi_state[1]))
   VAR_9 = 112;
  else
   VAR_9 = 113;
 }

 FUNC_1(VAR_2, 0, VAR_0);
 FUNC_2(VAR_2, VAR_7->wl_rf_para_rx[0]);
 FUNC_3(VAR_2, VAR_8);
 FUNC_4(VAR_2, 0, VAR_9 | VAR_10);
}
