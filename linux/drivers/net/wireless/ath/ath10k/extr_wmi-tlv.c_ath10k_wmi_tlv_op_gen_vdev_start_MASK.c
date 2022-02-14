
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmi_vdev_start_request_arg {int ssid_len; int vdev_id; int bcn_intval; int dtim_period; int bcn_tx_rate; int bcn_tx_power; int disable_hw_ack; int channel; int ssid; scalar_t__ pmf_enabled; scalar_t__ hidden_ssid; } ;
struct TYPE_2__ {int ssid; void* ssid_len; } ;
struct wmi_tlv_vdev_start_cmd {TYPE_1__ ssid; void* disable_hw_ack; void* bcn_tx_power; void* bcn_tx_rate; void* flags; void* dtim_period; void* bcn_intval; void* vdev_id; } ;
struct wmi_tlv {void* len; void* tag; scalar_t__ value; } ;
struct wmi_channel {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_5 (struct ath10k*,size_t) ;
 int FUNC_6 (struct wmi_channel*,int *) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_8(struct ath10k *VAR_8,
     const struct wmi_vdev_start_request_arg *VAR_9,
     bool VAR_10)
{
 struct wmi_tlv_vdev_start_cmd *VAR_11;
 struct wmi_channel *VAR_12;
 struct wmi_tlv *VAR_13;
 struct sk_buff *VAR_14;
 size_t VAR_15;
 void *VAR_16;
 u32 VAR_17 = 0;

 if (FUNC_1(VAR_9->hidden_ssid && !VAR_9->ssid))
  return FUNC_0(-VAR_1);
 if (FUNC_1(VAR_9->ssid_len > sizeof(VAR_11->ssid.ssid)))
  return FUNC_0(-VAR_1);

 VAR_15 = (sizeof(*VAR_13) + sizeof(*VAR_11)) +
       (sizeof(*VAR_13) + sizeof(*VAR_12)) +
       (sizeof(*VAR_13) + 0);
 VAR_14 = FUNC_5(VAR_8, VAR_15);
 if (!VAR_14)
  return FUNC_0(-VAR_2);

 if (VAR_9->hidden_ssid)
  VAR_17 |= VAR_6;
 if (VAR_9->pmf_enabled)
  VAR_17 |= VAR_7;

 VAR_16 = (void *)VAR_14->data;

 VAR_13 = VAR_16;
 VAR_13->tag = FUNC_2(VAR_5);
 VAR_13->len = FUNC_2(sizeof(*VAR_11));
 VAR_11 = (void *)VAR_13->value;
 VAR_11->vdev_id = FUNC_3(VAR_9->vdev_id);
 VAR_11->bcn_intval = FUNC_3(VAR_9->bcn_intval);
 VAR_11->dtim_period = FUNC_3(VAR_9->dtim_period);
 VAR_11->flags = FUNC_3(VAR_17);
 VAR_11->bcn_tx_rate = FUNC_3(VAR_9->bcn_tx_rate);
 VAR_11->bcn_tx_power = FUNC_3(VAR_9->bcn_tx_power);
 VAR_11->disable_hw_ack = FUNC_3(VAR_9->disable_hw_ack);

 if (VAR_9->ssid) {
  VAR_11->ssid.ssid_len = FUNC_3(VAR_9->ssid_len);
  FUNC_7(VAR_11->ssid.ssid, VAR_9->ssid, VAR_9->ssid_len);
 }

 VAR_16 += sizeof(*VAR_13);
 VAR_16 += sizeof(*VAR_11);

 VAR_13 = VAR_16;
 VAR_13->tag = FUNC_2(VAR_4);
 VAR_13->len = FUNC_2(sizeof(*VAR_12));
 VAR_12 = (void *)VAR_13->value;
 FUNC_6(VAR_12, &VAR_9->channel);

 VAR_16 += sizeof(*VAR_13);
 VAR_16 += sizeof(*VAR_12);

 VAR_13 = VAR_16;
 VAR_13->tag = FUNC_2(VAR_3);
 VAR_13->len = 0;





 VAR_16 += sizeof(*VAR_13);
 VAR_16 += 0;

 FUNC_4(VAR_8, VAR_0, "wmi tlv vdev start\n");
 return VAR_14;
}
