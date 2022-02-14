
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wmi_tlv_mgmt_rx_ev {int rate; int phy_mode; int snr; int status; int buf_len; int channel; } ;
struct wmi_mgmt_rx_ev_arg {int buf_len; int rate; int phy_mode; int snr; int status; int channel; } ;
struct sk_buff {int len; int const* data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void const**) ;
 int FUNC_1 (void const**) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 void** FUNC_4 (struct ath10k*,int const*,int,int ) ;
 int FUNC_5 (void const**) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_9(struct ath10k *VAR_4,
          struct sk_buff *VAR_5,
          struct wmi_mgmt_rx_ev_arg *VAR_6)
{
 const void **VAR_7;
 const struct wmi_tlv_mgmt_rx_ev *VAR_8;
 const u8 *VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_7 = FUNC_4(VAR_4, VAR_5->data, VAR_5->len, VAR_1);
 if (FUNC_0(VAR_7)) {
  VAR_11 = FUNC_1(VAR_7);
  FUNC_3(VAR_4, "failed to parse tlv: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_8 = VAR_7[VAR_3];
 VAR_9 = VAR_7[VAR_2];

 if (!VAR_8 || !VAR_9) {
  FUNC_5(VAR_7);
  return -VAR_0;
 }

 VAR_6->channel = VAR_8->channel;
 VAR_6->buf_len = VAR_8->buf_len;
 VAR_6->status = VAR_8->status;
 VAR_6->snr = VAR_8->snr;
 VAR_6->phy_mode = VAR_8->phy_mode;
 VAR_6->rate = VAR_8->rate;

 VAR_10 = FUNC_2(VAR_6->buf_len);

 if (VAR_5->len < (VAR_9 - VAR_5->data) + VAR_10) {
  FUNC_5(VAR_7);
  return -VAR_0;
 }


 FUNC_8(VAR_5, 0);
 FUNC_7(VAR_5, VAR_9 - VAR_5->data);
 FUNC_6(VAR_5, VAR_9 - VAR_5->data);
 FUNC_7(VAR_5, VAR_10);

 FUNC_5(VAR_7);
 return 0;
}
