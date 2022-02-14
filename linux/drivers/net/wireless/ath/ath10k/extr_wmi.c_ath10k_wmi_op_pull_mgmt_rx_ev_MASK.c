
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct wmi_mgmt_rx_hdr_v1 {int rate; int phy_mode; int snr; int status; int buf_len; int channel; } ;
struct wmi_mgmt_rx_ext_info {int dummy; } ;
struct TYPE_6__ {struct wmi_mgmt_rx_hdr_v1 v1; } ;
struct wmi_mgmt_rx_event_v2 {TYPE_3__ hdr; } ;
struct wmi_mgmt_rx_event_v1 {struct wmi_mgmt_rx_hdr_v1 hdr; } ;
struct wmi_mgmt_rx_ev_arg {int ext_info; int buf_len; int status; int rate; int phy_mode; int snr; int channel; } ;
struct sk_buff {size_t data; size_t len; } ;
struct ath10k {TYPE_2__* running_fw; } ;
struct TYPE_4__ {int fw_features; } ;
struct TYPE_5__ {TYPE_1__ fw_file; } ;


 size_t FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct wmi_mgmt_rx_ext_info*,int) ;
 int FUNC_4 (struct sk_buff*,size_t) ;
 int FUNC_5 (struct sk_buff*,size_t) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_3, struct sk_buff *VAR_4,
      struct wmi_mgmt_rx_ev_arg *VAR_5)
{
 struct wmi_mgmt_rx_event_v1 *VAR_6;
 struct wmi_mgmt_rx_event_v2 *VAR_7;
 struct wmi_mgmt_rx_hdr_v1 *VAR_8;
 struct wmi_mgmt_rx_ext_info *VAR_9;
 size_t VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 if (FUNC_6(VAR_0,
       VAR_3->running_fw->fw_file.fw_features)) {
  VAR_7 = (struct wmi_mgmt_rx_event_v2 *)VAR_4->data;
  VAR_8 = &VAR_7->hdr.v1;
  VAR_10 = sizeof(*VAR_7);
 } else {
  VAR_6 = (struct wmi_mgmt_rx_event_v1 *)VAR_4->data;
  VAR_8 = &VAR_6->hdr;
  VAR_10 = sizeof(*VAR_6);
 }

 if (VAR_4->len < VAR_10)
  return -VAR_1;

 FUNC_4(VAR_4, VAR_10);
 VAR_5->channel = VAR_8->channel;
 VAR_5->buf_len = VAR_8->buf_len;
 VAR_5->status = VAR_8->status;
 VAR_5->snr = VAR_8->snr;
 VAR_5->phy_mode = VAR_8->phy_mode;
 VAR_5->rate = VAR_8->rate;

 VAR_11 = FUNC_1(VAR_5->buf_len);
 if (VAR_4->len < VAR_11)
  return -VAR_1;

 if (FUNC_2(VAR_5->status) & VAR_2) {
  VAR_12 = FUNC_0(FUNC_2(VAR_5->buf_len), 4);
  VAR_9 = (struct wmi_mgmt_rx_ext_info *)(VAR_4->data + VAR_12);
  FUNC_3(&VAR_5->ext_info, VAR_9,
         sizeof(struct wmi_mgmt_rx_ext_info));
 }



 FUNC_5(VAR_4, VAR_11);

 return 0;
}
