
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct wmi_mgmt_rx_ext_info {int dummy; } ;
struct wmi_mgmt_rx_ev_arg {int ext_info; int buf_len; int status; int rate; int phy_mode; int snr; int channel; } ;
struct wmi_10_4_mgmt_rx_hdr {int rate; int phy_mode; int snr; int status; int buf_len; int channel; } ;
struct wmi_10_4_mgmt_rx_event {struct wmi_10_4_mgmt_rx_hdr hdr; } ;
struct sk_buff {size_t data; size_t len; } ;
struct ath10k {int dummy; } ;


 size_t FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct wmi_mgmt_rx_ext_info*,int) ;
 int FUNC_4 (struct sk_buff*,size_t) ;
 int FUNC_5 (struct sk_buff*,size_t) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_2,
           struct sk_buff *VAR_3,
           struct wmi_mgmt_rx_ev_arg *VAR_4)
{
 struct wmi_10_4_mgmt_rx_event *VAR_5;
 struct wmi_10_4_mgmt_rx_hdr *VAR_6;
 size_t VAR_7;
 u32 VAR_8;
 struct wmi_mgmt_rx_ext_info *VAR_9;
 u32 VAR_10;

 VAR_5 = (struct wmi_10_4_mgmt_rx_event *)VAR_3->data;
 VAR_6 = &VAR_5->hdr;
 VAR_7 = sizeof(*VAR_5);

 if (VAR_3->len < VAR_7)
  return -VAR_0;

 FUNC_4(VAR_3, VAR_7);
 VAR_4->channel = VAR_6->channel;
 VAR_4->buf_len = VAR_6->buf_len;
 VAR_4->status = VAR_6->status;
 VAR_4->snr = VAR_6->snr;
 VAR_4->phy_mode = VAR_6->phy_mode;
 VAR_4->rate = VAR_6->rate;

 VAR_8 = FUNC_1(VAR_4->buf_len);
 if (VAR_3->len < VAR_8)
  return -VAR_0;

 if (FUNC_2(VAR_4->status) & VAR_1) {
  VAR_10 = FUNC_0(FUNC_2(VAR_4->buf_len), 4);
  VAR_9 = (struct wmi_mgmt_rx_ext_info *)(VAR_3->data + VAR_10);
  FUNC_3(&VAR_4->ext_info, VAR_9,
         sizeof(struct wmi_mgmt_rx_ext_info));
 }


 FUNC_5(VAR_3, VAR_8);

 return 0;
}
