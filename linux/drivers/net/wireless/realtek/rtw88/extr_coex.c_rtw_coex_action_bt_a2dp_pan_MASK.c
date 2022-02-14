
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_efuse {scalar_t__ share_ant; } ;
struct rtw_coex_stat {scalar_t__ wl_noisy_level; scalar_t__ wl_gl_busy; } ;
struct rtw_coex {struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_chip_info* chip; struct rtw_efuse efuse; struct rtw_coex coex; } ;
struct rtw_chip_info {int * wl_rf_para_rx; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int,int ) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,int) ;
 int FUNC_3 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct rtw_dev *VAR_1)
{
 struct rtw_coex *VAR_2 = &VAR_1->coex;
 struct rtw_coex_stat *VAR_3 = &VAR_2->stat;
 struct rtw_efuse *VAR_4 = &VAR_1->efuse;
 struct rtw_chip_info *VAR_5 = VAR_1->chip;
 u8 VAR_6, VAR_7;

 if (VAR_4->share_ant) {

  if (VAR_3->wl_gl_busy &&
      VAR_3->wl_noisy_level == 0)
   VAR_6 = 14;
  else
   VAR_6 = 10;

  if (VAR_3->wl_gl_busy)
   VAR_7 = 15;
  else
   VAR_7 = 20;
 } else {

  VAR_6 = 112;

  if (VAR_3->wl_gl_busy)
   VAR_7 = 115;
  else
   VAR_7 = 120;
 }

 FUNC_0(VAR_1, 0, VAR_0);
 FUNC_1(VAR_1, VAR_5->wl_rf_para_rx[0]);
 FUNC_2(VAR_1, VAR_6);
 FUNC_3(VAR_1, 0, VAR_7);
}
