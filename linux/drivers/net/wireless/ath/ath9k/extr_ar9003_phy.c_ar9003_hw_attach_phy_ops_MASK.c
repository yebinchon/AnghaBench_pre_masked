
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw_private_ops {int fast_chan_change; int set_radar_params; int ani_cache_ini_regs; int do_getnf; int ani_control; int rfbus_done; int rfbus_req; int set_delta_slope; int mark_phy_inactive; int set_rfmode; int process_ini; int init_bb; int set_channel_regs; int compute_pll_control; int spur_mitigate_freq; int rf_set_freq; } ;
struct ath_hw_ops {int tx99_set_txpower; int tx99_stop; int tx99_start; int set_bt_ant_diversity; int spectral_scan_wait; int spectral_scan_trigger; int spectral_scan_config; int antdiv_comb_conf_set; int antdiv_comb_conf_get; } ;
struct ath_hw {int nf_regs; } ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 struct ath_hw_ops* FUNC_6 (struct ath_hw*) ;
 struct ath_hw_private_ops* FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (int ,int const*,int) ;

void FUNC_9(struct ath_hw *VAR_26)
{
 struct ath_hw_private_ops *VAR_27 = FUNC_7(VAR_26);
 struct ath_hw_ops *VAR_28 = FUNC_6(VAR_26);
 static const u32 VAR_29[6] = {
  133,
  132,
  131,
  130,
  129,
  128,
 };

 VAR_27->rf_set_freq = VAR_14;
 VAR_27->spur_mitigate_freq = VAR_22;

 if (FUNC_0(VAR_26) || FUNC_2(VAR_26) || FUNC_1(VAR_26) ||
     FUNC_3(VAR_26))
  VAR_27->compute_pll_control = VAR_5;
 else
  VAR_27->compute_pll_control = VAR_4;

 VAR_27->set_channel_regs = VAR_15;
 VAR_27->init_bb = VAR_8;
 VAR_27->process_ini = VAR_10;
 VAR_27->set_rfmode = VAR_18;
 VAR_27->mark_phy_inactive = VAR_9;
 VAR_27->set_delta_slope = VAR_16;
 VAR_27->rfbus_req = VAR_12;
 VAR_27->rfbus_done = VAR_11;
 VAR_27->ani_control = VAR_1;
 VAR_27->do_getnf = VAR_6;
 VAR_27->ani_cache_ini_regs = VAR_0;
 VAR_27->set_radar_params = VAR_17;
 VAR_27->fast_chan_change = VAR_7;

 VAR_28->antdiv_comb_conf_get = VAR_2;
 VAR_28->antdiv_comb_conf_set = VAR_3;
 VAR_28->spectral_scan_config = VAR_19;
 VAR_28->spectral_scan_trigger = VAR_20;
 VAR_28->spectral_scan_wait = VAR_21;




 VAR_28->tx99_start = VAR_24;
 VAR_28->tx99_stop = VAR_25;
 VAR_28->tx99_set_txpower = VAR_23;

 FUNC_4(VAR_26);
 FUNC_5(VAR_26);
 FUNC_8(VAR_26->nf_regs, VAR_29, sizeof(VAR_26->nf_regs));
}
