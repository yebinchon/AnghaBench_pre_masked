
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct rtl_ps_ctl {int reg_max_lps_awakeintvl; } ;
struct rtl_mac {TYPE_2__* vif; } ;
struct ieee80211_hw {int dummy; } ;
struct h2c_set_pwrmode_parm {scalar_t__ mode; int smart_ps; int bcn_pass_period; int bcn_pass_cnt; int awake_bcn_itvl; scalar_t__ app_itv; scalar_t__ bcn_to; scalar_t__ bcn_rx_en; scalar_t__ flag_dps_en; scalar_t__ flag_rf_low_snr_en; scalar_t__ flag_lpnav_en; scalar_t__ flag_low_traffic_en; } ;
struct TYPE_3__ {int beacon_int; int dtim_period; } ;
struct TYPE_4__ {TYPE_1__ bss_conf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*,int ,int,int) ;
 int FUNC_1 (struct ieee80211_hw*,int ,scalar_t__*) ;
 struct rtl_mac* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_4 (int ) ;

void FUNC_5(struct ieee80211_hw *VAR_3, u8 VAR_4)
{
 struct rtl_mac *VAR_5 = FUNC_2(FUNC_3(VAR_3));
 struct rtl_ps_ctl *VAR_6 = FUNC_4(FUNC_3(VAR_3));
 struct h2c_set_pwrmode_parm VAR_7;
 u16 VAR_8 = 0;

 VAR_7.mode = VAR_4;
 VAR_7.flag_low_traffic_en = 0;
 VAR_7.flag_lpnav_en = 0;
 VAR_7.flag_rf_low_snr_en = 0;
 VAR_7.flag_dps_en = 0;
 VAR_7.bcn_rx_en = 0;
 VAR_7.bcn_to = 0;
 FUNC_0((u8 *)(&VAR_7) + 8, 0, 16,
   VAR_5->vif->bss_conf.beacon_int);
 VAR_7.app_itv = 0;
 VAR_7.awake_bcn_itvl = VAR_6->reg_max_lps_awakeintvl;
 VAR_7.smart_ps = 1;
 VAR_7.bcn_pass_period = 10;


 if (VAR_7.mode == VAR_2)
  VAR_8 = VAR_5->vif->bss_conf.beacon_int;
 else if (VAR_7.mode == VAR_1)
  VAR_8 = VAR_5->vif->bss_conf.beacon_int *
   VAR_5->vif->bss_conf.dtim_period;

 if (VAR_8 >= 500)
  VAR_7.bcn_pass_cnt = 1;
 else if ((VAR_8 >= 300) && (VAR_8 < 500))
  VAR_7.bcn_pass_cnt = 2;
 else if ((VAR_8 >= 200) && (VAR_8 < 300))
  VAR_7.bcn_pass_cnt = 3;
 else if ((VAR_8 >= 20) && (VAR_8 < 200))
  VAR_7.bcn_pass_cnt = 5;
 else
  VAR_7.bcn_pass_cnt = 1;

 FUNC_1(VAR_3, VAR_0, (u8 *)&VAR_7);

}
