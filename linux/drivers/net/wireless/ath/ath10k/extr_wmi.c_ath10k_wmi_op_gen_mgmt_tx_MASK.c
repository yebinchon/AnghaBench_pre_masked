
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_2__ peer_macaddr; void* buf_len; scalar_t__ tx_power; scalar_t__ tx_rate; void* vdev_id; } ;
struct wmi_mgmt_tx_cmd {int buf; TYPE_3__ hdr; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath10k_vif {int vdev_id; } ;
struct ath10k_skb_cb {TYPE_1__* vif; } ;
struct ath10k {int dummy; } ;
struct TYPE_4__ {scalar_t__ drv_priv; } ;


 int VAR_0 ;
 struct ath10k_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct ath10k*,int ,char*,struct sk_buff*,int,int,int) ;
 struct sk_buff* FUNC_5 (struct ath10k*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,scalar_t__,int) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (struct ath10k*,scalar_t__,int) ;
 int FUNC_17 (struct ath10k*,scalar_t__,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_18(struct ath10k *VAR_6, struct sk_buff *VAR_7)
{
 struct ath10k_skb_cb *VAR_8 = FUNC_0(VAR_7);
 struct ath10k_vif *VAR_9;
 struct wmi_mgmt_tx_cmd *VAR_10;
 struct ieee80211_hdr *VAR_11;
 struct sk_buff *VAR_12;
 int VAR_13;
 u32 VAR_14;
 u32 VAR_15 = VAR_7->len;
 u16 VAR_16;

 VAR_11 = (struct ieee80211_hdr *)VAR_7->data;
 VAR_16 = FUNC_13(VAR_11->frame_control);

 if (VAR_8->vif) {
  VAR_9 = (void *)VAR_8->vif->drv_priv;
  VAR_14 = VAR_9->vdev_id;
 } else {
  VAR_14 = 0;
 }

 if (FUNC_2(!FUNC_12(VAR_11->frame_control)))
  return FUNC_1(-VAR_1);

 VAR_13 = sizeof(VAR_10->hdr) + VAR_7->len;

 if ((FUNC_9(VAR_11->frame_control) ||
      FUNC_10(VAR_11->frame_control) ||
      FUNC_11(VAR_11->frame_control)) &&
      FUNC_8(VAR_11->frame_control)) {
  VAR_13 += VAR_3;
  VAR_15 += VAR_3;
 }

 VAR_13 = FUNC_15(VAR_13, 4);

 VAR_12 = FUNC_5(VAR_6, VAR_13);
 if (!VAR_12)
  return FUNC_1(-VAR_2);

 VAR_10 = (struct wmi_mgmt_tx_cmd *)VAR_12->data;

 VAR_10->hdr.vdev_id = FUNC_3(VAR_14);
 VAR_10->hdr.tx_rate = 0;
 VAR_10->hdr.tx_power = 0;
 VAR_10->hdr.buf_len = FUNC_3(VAR_15);

 FUNC_6(VAR_10->hdr.peer_macaddr.addr, FUNC_7(VAR_11));
 FUNC_14(VAR_10->buf, VAR_7->data, VAR_7->len);

 FUNC_4(VAR_6, VAR_0, "wmi mgmt tx skb %pK len %d ftype %02x stype %02x\n",
     VAR_7, VAR_12->len, VAR_16 & VAR_4,
     VAR_16 & VAR_5);
 FUNC_16(VAR_6, VAR_12->data, VAR_12->len);
 FUNC_17(VAR_6, VAR_12->data, VAR_12->len);

 return VAR_12;
}
