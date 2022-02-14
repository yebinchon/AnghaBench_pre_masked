
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wmi_ch_info_ev_arg {int mac_clk_mhz; int cycle_count; int rx_clear_count; int noise_floor; int cmd_flags; int freq; int err_code; } ;
struct sk_buff {int dummy; } ;
struct chan_info_params {void* cycle_count; void* rx_clear_count; void* noise_floor; void* cmd_flags; void* freq; void* err_code; void* mac_clk_mhz; } ;
struct TYPE_4__ {int state; } ;
struct ath10k {int data_lock; TYPE_3__* running_fw; TYPE_1__ scan; } ;
struct TYPE_5__ {int fw_features; } ;
struct TYPE_6__ {TYPE_2__ fw_file; } ;


 int VAR_0 ;
 int VAR_1 ;




 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*,void*,void*,void*,void*,void*,void*) ;
 int FUNC_2 (struct ath10k*,char*,...) ;
 int FUNC_3 (struct ath10k*,struct chan_info_params*) ;
 int FUNC_4 (struct ath10k*,struct chan_info_params*) ;
 int FUNC_5 (struct ath10k*,struct sk_buff*,struct wmi_ch_info_ev_arg*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int ) ;

void FUNC_9(struct ath10k *VAR_2, struct sk_buff *VAR_3)
{
 struct chan_info_params VAR_4;
 struct wmi_ch_info_ev_arg VAR_5 = {};
 int VAR_6;

 VAR_6 = FUNC_5(VAR_2, VAR_3, &VAR_5);
 if (VAR_6) {
  FUNC_2(VAR_2, "failed to parse chan info event: %d\n", VAR_6);
  return;
 }

 VAR_4.err_code = FUNC_0(VAR_5.err_code);
 VAR_4.freq = FUNC_0(VAR_5.freq);
 VAR_4.cmd_flags = FUNC_0(VAR_5.cmd_flags);
 VAR_4.noise_floor = FUNC_0(VAR_5.noise_floor);
 VAR_4.rx_clear_count = FUNC_0(VAR_5.rx_clear_count);
 VAR_4.cycle_count = FUNC_0(VAR_5.cycle_count);
 VAR_4.mac_clk_mhz = FUNC_0(VAR_5.mac_clk_mhz);

 FUNC_1(VAR_2, VAR_0,
     "chan info err_code %d freq %d cmd_flags %d noise_floor %d rx_clear_count %d cycle_count %d\n",
     VAR_4.err_code, VAR_4.freq, VAR_4.cmd_flags,
     VAR_4.noise_floor, VAR_4.rx_clear_count,
     VAR_4.cycle_count);

 FUNC_6(&VAR_2->data_lock);

 switch (VAR_2->scan.state) {
 case 130:
 case 128:
  FUNC_2(VAR_2, "received chan info event without a scan request, ignoring\n");
  goto exit;
 case 129:
 case 131:
  break;
 }

 if (FUNC_8(VAR_1,
       VAR_2->running_fw->fw_file.fw_features))
  FUNC_4(VAR_2, &VAR_4);
 else
  FUNC_3(VAR_2, &VAR_4);

exit:
 FUNC_7(&VAR_2->data_lock);
}
