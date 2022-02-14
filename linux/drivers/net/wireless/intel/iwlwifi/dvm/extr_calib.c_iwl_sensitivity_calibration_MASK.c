
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct statistics_rx_phy {int plcp_err; int false_alarm_cnt; } ;
struct statistics_rx_non_phy {scalar_t__ interference_data_flag; int beacon_energy_c; int beacon_energy_b; int beacon_energy_a; int beacon_silence_rssi_c; int beacon_silence_rssi_b; int beacon_silence_rssi_a; int channel_load; } ;
struct statistics_general_data {void* beacon_energy_c; void* beacon_energy_b; void* beacon_energy_a; void* beacon_silence_rssi_c; void* beacon_silence_rssi_b; void* beacon_silence_rssi_a; } ;
struct iwl_sensitivity_data {scalar_t__ last_bad_plcp_cnt_cck; scalar_t__ last_bad_plcp_cnt_ofdm; scalar_t__ last_fa_cnt_ofdm; scalar_t__ last_fa_cnt_cck; } ;
struct TYPE_3__ {int lock; struct statistics_rx_phy rx_cck; struct statistics_rx_phy rx_ofdm; struct statistics_rx_non_phy rx_non_phy; } ;
struct iwl_priv {int calib_disabled; TYPE_2__* fw; TYPE_1__ statistics; struct iwl_sensitivity_data sensitivity_data; } ;
struct TYPE_4__ {scalar_t__ enhance_sensitivity_table; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_priv*) ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (struct iwl_priv*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct iwl_priv*,scalar_t__,scalar_t__,struct statistics_general_data*) ;
 int FUNC_5 (struct iwl_priv*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct iwl_priv *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 struct iwl_sensitivity_data *VAR_10 = ((void*)0);
 struct statistics_rx_non_phy *VAR_11;
 struct statistics_rx_phy *VAR_12, *VAR_13;
 struct statistics_general_data VAR_14;

 if (VAR_2->calib_disabled & VAR_1)
  return;

 VAR_10 = &(VAR_2->sensitivity_data);

 if (!FUNC_2(VAR_2)) {
  FUNC_0(VAR_2, "<< - not associated\n");
  return;
 }

 FUNC_7(&VAR_2->statistics.lock);
 VAR_11 = &VAR_2->statistics.rx_non_phy;
 VAR_12 = &VAR_2->statistics.rx_ofdm;
 VAR_13 = &VAR_2->statistics.rx_cck;
 if (VAR_11->interference_data_flag != VAR_0) {
  FUNC_0(VAR_2, "<< invalid data.\n");
  FUNC_8(&VAR_2->statistics.lock);
  return;
 }


 VAR_3 = FUNC_6(VAR_11->channel_load);
 VAR_4 = FUNC_6(VAR_13->false_alarm_cnt);
 VAR_5 = FUNC_6(VAR_12->false_alarm_cnt);
 VAR_6 = FUNC_6(VAR_13->plcp_err);
 VAR_7 = FUNC_6(VAR_12->plcp_err);

 VAR_14.beacon_silence_rssi_a =
   FUNC_6(VAR_11->beacon_silence_rssi_a);
 VAR_14.beacon_silence_rssi_b =
   FUNC_6(VAR_11->beacon_silence_rssi_b);
 VAR_14.beacon_silence_rssi_c =
   FUNC_6(VAR_11->beacon_silence_rssi_c);
 VAR_14.beacon_energy_a =
   FUNC_6(VAR_11->beacon_energy_a);
 VAR_14.beacon_energy_b =
   FUNC_6(VAR_11->beacon_energy_b);
 VAR_14.beacon_energy_c =
   FUNC_6(VAR_11->beacon_energy_c);

 FUNC_8(&VAR_2->statistics.lock);

 FUNC_0(VAR_2, "rx_enable_time = %u usecs\n", VAR_3);

 if (!VAR_3) {
  FUNC_0(VAR_2, "<< RX Enable Time == 0!\n");
  return;
 }




 if (VAR_10->last_bad_plcp_cnt_cck > VAR_6)
  VAR_10->last_bad_plcp_cnt_cck = VAR_6;
 else {
  VAR_6 -= VAR_10->last_bad_plcp_cnt_cck;
  VAR_10->last_bad_plcp_cnt_cck += VAR_6;
 }

 if (VAR_10->last_bad_plcp_cnt_ofdm > VAR_7)
  VAR_10->last_bad_plcp_cnt_ofdm = VAR_7;
 else {
  VAR_7 -= VAR_10->last_bad_plcp_cnt_ofdm;
  VAR_10->last_bad_plcp_cnt_ofdm += VAR_7;
 }

 if (VAR_10->last_fa_cnt_ofdm > VAR_5)
  VAR_10->last_fa_cnt_ofdm = VAR_5;
 else {
  VAR_5 -= VAR_10->last_fa_cnt_ofdm;
  VAR_10->last_fa_cnt_ofdm += VAR_5;
 }

 if (VAR_10->last_fa_cnt_cck > VAR_4)
  VAR_10->last_fa_cnt_cck = VAR_4;
 else {
  VAR_4 -= VAR_10->last_fa_cnt_cck;
  VAR_10->last_fa_cnt_cck += VAR_4;
 }


 VAR_8 = VAR_5 + VAR_7;
 VAR_9 = VAR_4 + VAR_6;

 FUNC_0(VAR_2, "cck: fa %u badp %u  ofdm: fa %u badp %u\n", VAR_4,
   VAR_6, VAR_5, VAR_7);

 FUNC_3(VAR_2, VAR_8, VAR_3);
 FUNC_4(VAR_2, VAR_9, VAR_3, &VAR_14);
 if (VAR_2->fw->enhance_sensitivity_table)
  FUNC_1(VAR_2);
 else
  FUNC_5(VAR_2);
}
