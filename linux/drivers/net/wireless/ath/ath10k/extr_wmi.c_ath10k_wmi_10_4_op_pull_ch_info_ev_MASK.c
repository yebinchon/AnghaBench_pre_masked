
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_ch_info_ev_arg {int rx_frame_count; int chan_tx_pwr_tp; int chan_tx_pwr_range; int cycle_count; int rx_clear_count; int noise_floor; int cmd_flags; int freq; int err_code; } ;
struct wmi_10_4_chan_info_event {int rx_frame_count; int chan_tx_pwr_tp; int chan_tx_pwr_range; int cycle_count; int rx_clear_count; int noise_floor; int cmd_flags; int freq; int err_code; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_1(struct ath10k *VAR_1,
           struct sk_buff *VAR_2,
           struct wmi_ch_info_ev_arg *VAR_3)
{
 struct wmi_10_4_chan_info_event *VAR_4 = (void *)VAR_2->data;

 if (VAR_2->len < sizeof(*VAR_4))
  return -VAR_0;

 FUNC_0(VAR_2, sizeof(*VAR_4));
 VAR_3->err_code = VAR_4->err_code;
 VAR_3->freq = VAR_4->freq;
 VAR_3->cmd_flags = VAR_4->cmd_flags;
 VAR_3->noise_floor = VAR_4->noise_floor;
 VAR_3->rx_clear_count = VAR_4->rx_clear_count;
 VAR_3->cycle_count = VAR_4->cycle_count;
 VAR_3->chan_tx_pwr_range = VAR_4->chan_tx_pwr_range;
 VAR_3->chan_tx_pwr_tp = VAR_4->chan_tx_pwr_tp;
 VAR_3->rx_frame_count = VAR_4->rx_frame_count;

 return 0;
}
