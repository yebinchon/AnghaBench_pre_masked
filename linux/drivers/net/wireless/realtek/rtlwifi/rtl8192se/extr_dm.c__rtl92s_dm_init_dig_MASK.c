
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dm_type; } ;
struct dig_t {int dig_enable_flag; int backoff_enable_flag; int rssi_val; int backoffval_range_min; void* backoffval_range_max; int rx_gain_min; int rx_gain_max; void* back_val; int rssi_highpower_highthresh; int rssi_highpower_lowthresh; int fa_highthresh; int fa_lowthresh; int rssi_highthresh; int rssi_lowthresh; void* pre_ap_cstate; void* cur_ap_cstate; void* pre_sta_cstate; void* cur_sta_cstate; void* dig_highpwrstate; void* dig_state; scalar_t__ dig_slgorithm_switch; int dig_dbgmode; int dig_ext_port_stage; int dig_twoport_algorithm; int dig_algorithm; } ;
struct rtl_priv {TYPE_1__ dm; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_19)
{
 struct rtl_priv *VAR_20 = FUNC_1(VAR_19);
 struct dig_t *VAR_21 = &VAR_20->dm_digtable;


 VAR_21->dig_enable_flag = 1;
 VAR_21->backoff_enable_flag = 1;

 if ((VAR_20->dm.dm_type == VAR_18) &&
     (FUNC_0(VAR_20) >= 0x3c))
  VAR_21->dig_algorithm = VAR_1;
 else
  VAR_21->dig_algorithm =
    VAR_0;

 VAR_21->dig_twoport_algorithm = VAR_5;
 VAR_21->dig_ext_port_stage = VAR_3;

 VAR_21->dig_dbgmode = VAR_6;
 VAR_21->dig_slgorithm_switch = 0;


 VAR_21->dig_state = VAR_17;
 VAR_21->dig_highpwrstate = VAR_17;

 VAR_21->cur_sta_cstate = VAR_4;
 VAR_21->pre_sta_cstate = VAR_4;
 VAR_21->cur_ap_cstate = VAR_2;
 VAR_21->pre_ap_cstate = VAR_2;

 VAR_21->rssi_lowthresh = VAR_14;
 VAR_21->rssi_highthresh = VAR_13;

 VAR_21->fa_lowthresh = VAR_16;
 VAR_21->fa_highthresh = VAR_15;

 VAR_21->rssi_highpower_lowthresh = VAR_10;
 VAR_21->rssi_highpower_highthresh = VAR_9;


 VAR_21->rssi_val = 50;
 VAR_21->back_val = VAR_7;
 VAR_21->rx_gain_max = VAR_11;

 VAR_21->rx_gain_min = VAR_12;

 VAR_21->backoffval_range_max = VAR_7;
 VAR_21->backoffval_range_min = VAR_8;
}
