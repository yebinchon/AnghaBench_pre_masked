
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_vdev_spectral_conf_cmd {void* scan_chn_mask; void* scan_dbm_adj; void* scan_bin_scale; void* scan_rpt_mode; void* scan_pwr_format; void* scan_rssi_thr; void* scan_rssi_rpt_mode; void* scan_wb_rpt_mode; void* scan_str_bin_thr; void* scan_nb_tone_thr; void* scan_init_delay; void* scan_noise_floor_ref; void* scan_restart_ena; void* scan_gc_ena; void* scan_fft_size; void* scan_priority; void* scan_period; void* scan_count; void* vdev_id; } ;
struct wmi_vdev_spectral_conf_arg {int scan_chn_mask; int scan_dbm_adj; int scan_bin_scale; int scan_rpt_mode; int scan_pwr_format; int scan_rssi_thr; int scan_rssi_rpt_mode; int scan_wb_rpt_mode; int scan_str_bin_thr; int scan_nb_tone_thr; int scan_init_delay; int scan_noise_floor_ref; int scan_restart_ena; int scan_gc_ena; int scan_fft_size; int scan_priority; int scan_period; int scan_count; int vdev_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_3(struct ath10k *VAR_1,
         const struct wmi_vdev_spectral_conf_arg *VAR_2)
{
 struct wmi_vdev_spectral_conf_cmd *VAR_3;
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_2(VAR_1, sizeof(*VAR_3));
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_3 = (struct wmi_vdev_spectral_conf_cmd *)VAR_4->data;
 VAR_3->vdev_id = FUNC_1(VAR_2->vdev_id);
 VAR_3->scan_count = FUNC_1(VAR_2->scan_count);
 VAR_3->scan_period = FUNC_1(VAR_2->scan_period);
 VAR_3->scan_priority = FUNC_1(VAR_2->scan_priority);
 VAR_3->scan_fft_size = FUNC_1(VAR_2->scan_fft_size);
 VAR_3->scan_gc_ena = FUNC_1(VAR_2->scan_gc_ena);
 VAR_3->scan_restart_ena = FUNC_1(VAR_2->scan_restart_ena);
 VAR_3->scan_noise_floor_ref = FUNC_1(VAR_2->scan_noise_floor_ref);
 VAR_3->scan_init_delay = FUNC_1(VAR_2->scan_init_delay);
 VAR_3->scan_nb_tone_thr = FUNC_1(VAR_2->scan_nb_tone_thr);
 VAR_3->scan_str_bin_thr = FUNC_1(VAR_2->scan_str_bin_thr);
 VAR_3->scan_wb_rpt_mode = FUNC_1(VAR_2->scan_wb_rpt_mode);
 VAR_3->scan_rssi_rpt_mode = FUNC_1(VAR_2->scan_rssi_rpt_mode);
 VAR_3->scan_rssi_thr = FUNC_1(VAR_2->scan_rssi_thr);
 VAR_3->scan_pwr_format = FUNC_1(VAR_2->scan_pwr_format);
 VAR_3->scan_rpt_mode = FUNC_1(VAR_2->scan_rpt_mode);
 VAR_3->scan_bin_scale = FUNC_1(VAR_2->scan_bin_scale);
 VAR_3->scan_dbm_adj = FUNC_1(VAR_2->scan_dbm_adj);
 VAR_3->scan_chn_mask = FUNC_1(VAR_2->scan_chn_mask);

 return VAR_4;
}
