
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wmi_vdev_spectral_conf_arg {int vdev_id; int scan_count; int scan_chn_mask; int scan_dbm_adj; int scan_bin_scale; int scan_rpt_mode; int scan_pwr_format; int scan_rssi_thr; int scan_rssi_rpt_mode; int scan_wb_rpt_mode; int scan_str_bin_thr; int scan_nb_tone_thr; int scan_init_delay; int scan_noise_floor_ref; int scan_restart_ena; int scan_gc_ena; int scan_fft_size; int scan_priority; int scan_period; } ;
struct ath10k_vif {int vdev_id; int spectral_enabled; } ;
struct TYPE_3__ {int fft_size; int count; } ;
struct TYPE_4__ {int mode; TYPE_1__ config; } ;
struct ath10k {TYPE_2__ spectral; int conf_mutex; } ;
typedef enum ath10k_spectral_mode { ____Placeholder_ath10k_spectral_mode } ath10k_spectral_mode ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct ath10k_vif* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (struct ath10k*,struct wmi_vdev_spectral_conf_arg*) ;
 int FUNC_3 (struct ath10k*,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,int ) ;
 int VAR_22 ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_23,
           enum ath10k_spectral_mode VAR_24)
{
 struct wmi_vdev_spectral_conf_arg VAR_25;
 struct ath10k_vif *VAR_26;
 int VAR_27, VAR_28, VAR_29 = 0;

 FUNC_4(&VAR_23->conf_mutex);

 VAR_26 = FUNC_0(VAR_23);
 if (!VAR_26)
  return -VAR_0;

 VAR_27 = VAR_26->vdev_id;

 VAR_26->spectral_enabled = (VAR_24 != VAR_2);
 VAR_23->spectral.mode = VAR_24;

 VAR_29 = FUNC_3(VAR_23, VAR_27,
           VAR_20,
           VAR_7);
 if (VAR_29 < 0) {
  FUNC_1(VAR_23, "failed to enable spectral scan: %d\n", VAR_29);
  return VAR_29;
 }

 if (VAR_24 == VAR_2)
  return 0;

 if (VAR_24 == VAR_1)
  VAR_28 = VAR_5;
 else
  VAR_28 = FUNC_5(VAR_22, 1, VAR_23->spectral.config.count);

 VAR_25.vdev_id = VAR_27;
 VAR_25.scan_count = VAR_28;
 VAR_25.scan_period = VAR_12;
 VAR_25.scan_priority = VAR_13;
 VAR_25.scan_fft_size = VAR_23->spectral.config.fft_size;
 VAR_25.scan_gc_ena = VAR_8;
 VAR_25.scan_restart_ena = VAR_15;
 VAR_25.scan_noise_floor_ref = VAR_11;
 VAR_25.scan_init_delay = VAR_9;
 VAR_25.scan_nb_tone_thr = VAR_10;
 VAR_25.scan_str_bin_thr = VAR_19;
 VAR_25.scan_wb_rpt_mode = VAR_21;
 VAR_25.scan_rssi_rpt_mode = VAR_17;
 VAR_25.scan_rssi_thr = VAR_18;
 VAR_25.scan_pwr_format = VAR_14;
 VAR_25.scan_rpt_mode = VAR_16;
 VAR_25.scan_bin_scale = VAR_3;
 VAR_25.scan_dbm_adj = VAR_6;
 VAR_25.scan_chn_mask = VAR_4;

 VAR_29 = FUNC_2(VAR_23, &VAR_25);
 if (VAR_29 < 0) {
  FUNC_1(VAR_23, "failed to configure spectral scan: %d\n", VAR_29);
  return VAR_29;
 }

 return 0;
}
