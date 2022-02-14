
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pll_mode; int rf_type; int afe_type; scalar_t__ ps_options; scalar_t__ sifs_tx_enable; scalar_t__ dpd; scalar_t__ enable_ppe; scalar_t__ wireless_mode; } ;
struct rsi_common {int channel; int min_rate; int iface_down; int driver_mode; int ulp_ps_handshake_mode; int obm_ant_sel_val; TYPE_1__ w9116_features; int dtim_cnt; int beacon_interval; scalar_t__ wlan_rf_power_mode; scalar_t__ rf_power_val; scalar_t__ lp_ps_handshake_mode; int endpoint; int fsm_state; int rts_threshold; int channel_width; int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct rsi_common *VAR_7)
{
 VAR_7->band = VAR_4;
 VAR_7->channel_width = VAR_0;
 VAR_7->rts_threshold = VAR_3;
 VAR_7->channel = 1;
 VAR_7->min_rate = 0xffff;
 VAR_7->fsm_state = VAR_2;
 VAR_7->iface_down = 1;
 VAR_7->endpoint = VAR_1;
 VAR_7->driver_mode = 1;
 VAR_7->lp_ps_handshake_mode = 0;
 VAR_7->ulp_ps_handshake_mode = 2;
 VAR_7->rf_power_val = 0;
 VAR_7->wlan_rf_power_mode = 0;
 VAR_7->obm_ant_sel_val = 2;
 VAR_7->beacon_interval = VAR_5;
 VAR_7->dtim_cnt = VAR_6;
 VAR_7->w9116_features.pll_mode = 0x0;
 VAR_7->w9116_features.rf_type = 1;
 VAR_7->w9116_features.wireless_mode = 0;
 VAR_7->w9116_features.enable_ppe = 0;
 VAR_7->w9116_features.afe_type = 1;
 VAR_7->w9116_features.dpd = 0;
 VAR_7->w9116_features.sifs_tx_enable = 0;
 VAR_7->w9116_features.ps_options = 0;
}
