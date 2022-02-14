
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_coex_stat {int wl_noisy_level; } ;
struct rtw_coex {scalar_t__ freerun; struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_coex coex; } ;
struct coex_rf_para {int bt_lna_lvl; int wl_low_gain_en; scalar_t__ bt_pwr_dec_lvl; int wl_pwr_dec_lvl; } ;


 int FUNC_0 (struct rtw_dev*,int ) ;
 int FUNC_1 (struct rtw_dev*,scalar_t__) ;
 int FUNC_2 (struct rtw_dev*,int ) ;
 int FUNC_3 (struct rtw_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct rtw_dev *VAR_0,
     struct coex_rf_para VAR_1)
{
 struct rtw_coex *VAR_2 = &VAR_0->coex;
 struct rtw_coex_stat *VAR_3 = &VAR_2->stat;
 u8 VAR_4 = 0;

 if (VAR_2->freerun && VAR_3->wl_noisy_level <= 1)
  VAR_4 = 3;

 FUNC_3(VAR_0, VAR_1.wl_pwr_dec_lvl);
 FUNC_1(VAR_0, VAR_1.bt_pwr_dec_lvl + VAR_4);
 FUNC_2(VAR_0, VAR_1.wl_low_gain_en);
 FUNC_0(VAR_0, VAR_1.bt_lna_lvl);
}
