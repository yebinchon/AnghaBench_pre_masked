
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wmi_tlv_chan_info_event {int mac_clk_mhz; int cycle_count; int rx_clear_count; int noise_floor; int cmd_flags; int freq; int err_code; } ;
struct wmi_ch_info_ev_arg {int mac_clk_mhz; int cycle_count; int rx_clear_count; int noise_floor; int cmd_flags; int freq; int err_code; } ;
struct sk_buff {int len; int data; } ;
struct ath10k {TYPE_2__* running_fw; } ;
struct TYPE_3__ {int fw_features; } ;
struct TYPE_4__ {TYPE_1__ fw_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void const**) ;
 int FUNC_1 (void const**) ;
 size_t VAR_3 ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 void** FUNC_3 (struct ath10k*,int ,int ,int ) ;
 int FUNC_4 (void const**) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_4,
          struct sk_buff *VAR_5,
          struct wmi_ch_info_ev_arg *VAR_6)
{
 const void **VAR_7;
 const struct wmi_tlv_chan_info_event *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(VAR_4, VAR_5->data, VAR_5->len, VAR_2);
 if (FUNC_0(VAR_7)) {
  VAR_9 = FUNC_1(VAR_7);
  FUNC_2(VAR_4, "failed to parse tlv: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_8 = VAR_7[VAR_3];
 if (!VAR_8) {
  FUNC_4(VAR_7);
  return -VAR_1;
 }

 VAR_6->err_code = VAR_8->err_code;
 VAR_6->freq = VAR_8->freq;
 VAR_6->cmd_flags = VAR_8->cmd_flags;
 VAR_6->noise_floor = VAR_8->noise_floor;
 VAR_6->rx_clear_count = VAR_8->rx_clear_count;
 VAR_6->cycle_count = VAR_8->cycle_count;
 if (FUNC_5(VAR_0,
       VAR_4->running_fw->fw_file.fw_features))
  VAR_6->mac_clk_mhz = VAR_8->mac_clk_mhz;

 FUNC_4(VAR_7);
 return 0;
}
