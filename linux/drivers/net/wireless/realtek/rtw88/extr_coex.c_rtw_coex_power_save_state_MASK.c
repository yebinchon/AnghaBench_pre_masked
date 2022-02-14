
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_vif {int dummy; } ;
struct rtw_lps_conf {int mode; struct rtw_vif* rtwvif; } ;
struct rtw_coex_stat {int wl_force_lps_ctrl; } ;
struct rtw_coex {struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_lps_conf lps_conf; struct rtw_coex coex; } ;




 int FUNC_0 (struct rtw_dev*,int,int ,int ,int ,int ) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*,struct rtw_vif*) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_0, u8 VAR_1,
          u8 VAR_2, u8 VAR_3)
{
 struct rtw_lps_conf *VAR_4 = &VAR_0->lps_conf;
 struct rtw_vif *VAR_5;
 struct rtw_coex *VAR_6 = &VAR_0->coex;
 struct rtw_coex_stat *VAR_7 = &VAR_6->stat;
 u8 VAR_8 = 0x0;

 VAR_8 = VAR_0->lps_conf.mode;

 switch (VAR_1) {
 case 128:

  VAR_7->wl_force_lps_ctrl = 0;

  VAR_5 = VAR_4->rtwvif;
  if (VAR_5 && FUNC_1(VAR_0))
   FUNC_2(VAR_0, VAR_5);
  break;
 case 129:
  VAR_7->wl_force_lps_ctrl = 1;
  if (VAR_8)
   FUNC_0(VAR_0, 0x8, 0, 0, 0, 0);

  VAR_5 = VAR_4->rtwvif;
  if (VAR_5 && FUNC_1(VAR_0))
   FUNC_2(VAR_0, VAR_5);
  break;
 default:
  break;
 }
}
