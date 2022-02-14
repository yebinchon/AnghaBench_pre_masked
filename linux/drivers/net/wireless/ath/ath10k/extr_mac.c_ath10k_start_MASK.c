
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct wmi_bb_timing_cfg_arg {int member_0; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct TYPE_8__ {int svc_map; TYPE_1__* pdev_param; } ;
struct ath10k {int state; int ani_enabled; int conf_mutex; int radar_conf_state; scalar_t__ num_started_vdevs; TYPE_4__ wmi; int dev_flags; TYPE_3__* running_fw; int cfg_rx_chainmask; int cfg_tx_chainmask; int mac_addr; int normal_mode_fw; } ;
struct TYPE_6__ {int fw_features; } ;
struct TYPE_7__ {TYPE_2__ fw_file; } ;
struct TYPE_5__ {int enable_btcoex; int peer_stats_update_period; int ani_enable; int arp_ac_override; int idle_ps_config; int burst_enable; int dynamic_bw; int pmf_qos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct ath10k*,struct wmi_bb_timing_cfg_arg*) ;
 int FUNC_2 (struct ath10k*,int ,int ) ;
 int FUNC_3 (struct ath10k*,int ,int *) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*,char*,int) ;
 int FUNC_7 (struct ath10k*) ;
 int FUNC_8 (struct ath10k*,int ) ;
 scalar_t__ FUNC_9 (struct ath10k*) ;
 int FUNC_10 (struct ath10k*) ;
 int FUNC_11 (struct ath10k*) ;
 int FUNC_12 (struct ath10k*) ;
 int FUNC_13 (struct ath10k*,char*,int) ;
 int FUNC_14 (struct ath10k*,int) ;
 int FUNC_15 (struct ath10k*,struct wmi_bb_timing_cfg_arg*) ;
 int FUNC_16 (struct ath10k*,int,int ,int ) ;
 int FUNC_17 (struct ath10k*,int ,int) ;
 int FUNC_18 (struct ath10k*,int ) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int ,int ) ;

__attribute__((used)) static int FUNC_23(struct ieee80211_hw *VAR_16)
{
 struct ath10k *VAR_17 = VAR_16->priv;
 u32 VAR_18;
 int VAR_19 = 0;
 struct wmi_bb_timing_cfg_arg VAR_20 = {0};






 FUNC_5(VAR_17);

 FUNC_20(&VAR_17->conf_mutex);

 switch (VAR_17->state) {
 case 133:
  VAR_17->state = 132;
  break;
 case 130:
  VAR_17->state = 131;
  break;
 case 132:
 case 131:
 case 128:
  FUNC_0(1);
  VAR_19 = -VAR_6;
  goto err;
 case 129:
  VAR_19 = -VAR_5;
  goto err;
 }

 VAR_19 = FUNC_8(VAR_17, VAR_0);
 if (VAR_19) {
  FUNC_6(VAR_17, "Could not init hif: %d\n", VAR_19);
  goto err_off;
 }

 VAR_19 = FUNC_3(VAR_17, VAR_0,
    &VAR_17->normal_mode_fw);
 if (VAR_19) {
  FUNC_6(VAR_17, "Could not init core: %d\n", VAR_19);
  goto err_power_down;
 }

 VAR_18 = VAR_17->wmi.pdev_param->pmf_qos;
 VAR_19 = FUNC_17(VAR_17, VAR_18, 1);
 if (VAR_19) {
  FUNC_13(VAR_17, "failed to enable PMF QOS: %d\n", VAR_19);
  goto err_core_stop;
 }

 VAR_18 = VAR_17->wmi.pdev_param->dynamic_bw;
 VAR_19 = FUNC_17(VAR_17, VAR_18, 1);
 if (VAR_19) {
  FUNC_13(VAR_17, "failed to enable dynamic BW: %d\n", VAR_19);
  goto err_core_stop;
 }

 if (FUNC_22(VAR_15, VAR_17->wmi.svc_map)) {
  VAR_19 = FUNC_18(VAR_17, VAR_17->mac_addr);
  if (VAR_19) {
   FUNC_6(VAR_17, "failed to set prob req oui: %i\n", VAR_19);
   goto err_core_stop;
  }
 }

 if (FUNC_22(VAR_11, VAR_17->wmi.svc_map)) {
  VAR_19 = FUNC_14(VAR_17, 1);
  if (VAR_19) {
   FUNC_13(VAR_17, "failed to enable adaptive qcs: %d\n",
        VAR_19);
   goto err_core_stop;
  }
 }

 if (FUNC_22(VAR_13, VAR_17->wmi.svc_map)) {
  VAR_18 = VAR_17->wmi.pdev_param->burst_enable;
  VAR_19 = FUNC_17(VAR_17, VAR_18, 0);
  if (VAR_19) {
   FUNC_13(VAR_17, "failed to disable burst: %d\n", VAR_19);
   goto err_core_stop;
  }
 }

 VAR_18 = VAR_17->wmi.pdev_param->idle_ps_config;
 VAR_19 = FUNC_17(VAR_17, VAR_18, 1);
 if (VAR_19 && VAR_19 != -VAR_7) {
  FUNC_13(VAR_17, "failed to enable idle_ps_config: %d\n", VAR_19);
  goto err_core_stop;
 }

 FUNC_2(VAR_17, VAR_17->cfg_tx_chainmask, VAR_17->cfg_rx_chainmask);
 VAR_18 = VAR_17->wmi.pdev_param->arp_ac_override;
 VAR_19 = FUNC_17(VAR_17, VAR_18, 0);
 if (VAR_19) {
  FUNC_13(VAR_17, "failed to set arp ac override parameter: %d\n",
       VAR_19);
  goto err_core_stop;
 }

 if (FUNC_22(VAR_3,
       VAR_17->running_fw->fw_file.fw_features)) {
  VAR_19 = FUNC_16(VAR_17, 1,
         VAR_9,
         VAR_10);
  if (VAR_19) {
   FUNC_13(VAR_17, "failed to enable adaptive cca: %d\n",
        VAR_19);
   goto err_core_stop;
  }
 }

 VAR_18 = VAR_17->wmi.pdev_param->ani_enable;
 VAR_19 = FUNC_17(VAR_17, VAR_18, 1);
 if (VAR_19) {
  FUNC_13(VAR_17, "failed to enable ani by default: %d\n",
       VAR_19);
  goto err_core_stop;
 }

 VAR_17->ani_enabled = 1;

 if (FUNC_9(VAR_17)) {
  VAR_18 = VAR_17->wmi.pdev_param->peer_stats_update_period;
  VAR_19 = FUNC_17(VAR_17, VAR_18,
      VAR_8);
  if (VAR_19) {
   FUNC_13(VAR_17,
        "failed to set peer stats period : %d\n",
        VAR_19);
   goto err_core_stop;
  }
 }

 VAR_18 = VAR_17->wmi.pdev_param->enable_btcoex;
 if (FUNC_22(VAR_14, VAR_17->wmi.svc_map) &&
     FUNC_22(VAR_2,
       VAR_17->running_fw->fw_file.fw_features)) {
  VAR_19 = FUNC_17(VAR_17, VAR_18, 0);
  if (VAR_19) {
   FUNC_13(VAR_17,
        "failed to set btcoex param: %d\n", VAR_19);
   goto err_core_stop;
  }
  FUNC_19(VAR_1, &VAR_17->dev_flags);
 }

 if (FUNC_22(VAR_12, VAR_17->wmi.svc_map)) {
  VAR_19 = FUNC_1(VAR_17, &VAR_20);
  if (!VAR_19) {
   VAR_19 = FUNC_15(VAR_17, &VAR_20);
   if (VAR_19) {
    FUNC_13(VAR_17,
         "failed to set bb timings: %d\n",
         VAR_19);
    goto err_core_stop;
   }
  }
 }

 VAR_17->num_started_vdevs = 0;
 FUNC_10(VAR_17);

 FUNC_11(VAR_17);
 FUNC_12(VAR_17);

 VAR_17->radar_conf_state = VAR_4;

 FUNC_21(&VAR_17->conf_mutex);
 return 0;

err_core_stop:
 FUNC_4(VAR_17);

err_power_down:
 FUNC_7(VAR_17);

err_off:
 VAR_17->state = 133;

err:
 FUNC_21(&VAR_17->conf_mutex);
 return VAR_19;
}
