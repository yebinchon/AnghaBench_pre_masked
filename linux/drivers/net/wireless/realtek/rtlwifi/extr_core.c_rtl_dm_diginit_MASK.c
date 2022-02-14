
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dm_initialgain_enable; } ;
struct dig_t {int dig_enable_flag; int pre_cck_cca_thres; int cur_cck_cca_thres; int dig_min_0; int dig_min_1; int media_connect_0; int media_connect_1; int bt30_cur_igi; scalar_t__ cur_cck_fa_state; scalar_t__ pre_cck_fa_state; int cur_cck_pd_state; int pre_cck_pd_state; scalar_t__ recover_cnt; scalar_t__ large_fa_hit; void* forbidden_igi; int back_range_min; int back_range_max; int back_val; void* rx_gain_min; int rx_gain_max; int fa_highthresh; int fa_lowthresh; int rssi_highthresh; int rssi_lowthresh; int curmultista_cstate; void* presta_cstate; void* cur_sta_cstate; scalar_t__ pre_igvalue; int cur_igvalue; int dig_ext_port_stage; } ;
struct rtl_priv {TYPE_1__ dm; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

void FUNC_1(struct ieee80211_hw *VAR_14, u32 VAR_15)
{
 struct rtl_priv *VAR_16 = FUNC_0(VAR_14);
 struct dig_t *VAR_17 = &VAR_16->dm_digtable;

 VAR_17->dig_enable_flag = 1;
 VAR_17->dig_ext_port_stage = VAR_2;
 VAR_17->cur_igvalue = VAR_15;
 VAR_17->pre_igvalue = 0;
 VAR_17->cur_sta_cstate = VAR_4;
 VAR_17->presta_cstate = VAR_4;
 VAR_17->curmultista_cstate = VAR_3;
 VAR_17->rssi_lowthresh = VAR_11;
 VAR_17->rssi_highthresh = VAR_10;
 VAR_17->fa_lowthresh = VAR_13;
 VAR_17->fa_highthresh = VAR_12;
 VAR_17->rx_gain_max = VAR_8;
 VAR_17->rx_gain_min = VAR_9;
 VAR_17->back_val = VAR_5;
 VAR_17->back_range_max = VAR_6;
 VAR_17->back_range_min = VAR_7;
 VAR_17->pre_cck_cca_thres = 0xff;
 VAR_17->cur_cck_cca_thres = 0x83;
 VAR_17->forbidden_igi = VAR_9;
 VAR_17->large_fa_hit = 0;
 VAR_17->recover_cnt = 0;
 VAR_17->dig_min_0 = 0x25;
 VAR_17->dig_min_1 = 0x25;
 VAR_17->media_connect_0 = 0;
 VAR_17->media_connect_1 = 0;
 VAR_16->dm.dm_initialgain_enable = 1;
 VAR_17->bt30_cur_igi = 0x32;
 VAR_17->pre_cck_pd_state = VAR_1;
 VAR_17->cur_cck_pd_state = VAR_0;
 VAR_17->pre_cck_fa_state = 0;
 VAR_17->cur_cck_fa_state = 0;
}
