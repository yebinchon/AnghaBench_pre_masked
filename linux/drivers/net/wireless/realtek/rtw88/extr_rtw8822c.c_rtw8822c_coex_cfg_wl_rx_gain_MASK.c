
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_coex_dm {int cur_wl_rx_low_gain_en; } ;
struct rtw_coex {struct rtw_coex_dm dm; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtw_dev*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_2, bool VAR_3)
{
 struct rtw_coex *VAR_4 = &VAR_2->coex;
 struct rtw_coex_dm *VAR_5 = &VAR_4->dm;

 if (VAR_3 == VAR_5->cur_wl_rx_low_gain_en)
  return;

 VAR_5->cur_wl_rx_low_gain_en = VAR_3;

 if (VAR_5->cur_wl_rx_low_gain_en) {

  FUNC_0(VAR_2, VAR_0, 0xde, 0xfffff, 0x22);
  FUNC_0(VAR_2, VAR_0, 0x1d, 0xfffff, 0x36);
  FUNC_0(VAR_2, VAR_1, 0xde, 0xfffff, 0x22);
  FUNC_0(VAR_2, VAR_1, 0x1d, 0xfffff, 0x36);
 } else {

  FUNC_0(VAR_2, VAR_0, 0xde, 0xfffff, 0x20);
  FUNC_0(VAR_2, VAR_0, 0x1d, 0xfffff, 0x0);
  FUNC_0(VAR_2, VAR_1, 0x1d, 0xfffff, 0x0);
 }
}
