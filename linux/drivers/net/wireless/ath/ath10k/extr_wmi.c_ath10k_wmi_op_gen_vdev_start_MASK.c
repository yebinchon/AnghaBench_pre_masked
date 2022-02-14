
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int ssid; void* ssid_len; } ;
struct wmi_vdev_start_request_cmd {TYPE_2__ chan; TYPE_1__ ssid; void* bcn_tx_power; void* bcn_tx_rate; void* flags; void* dtim_period; void* beacon_interval; void* disable_hw_ack; void* vdev_id; } ;
struct TYPE_6__ {int max_power; int mode; int freq; } ;
struct wmi_vdev_start_request_arg {int ssid_len; int vdev_id; int disable_hw_ack; int bcn_intval; int dtim_period; int bcn_tx_rate; int bcn_tx_power; TYPE_3__ channel; int ssid; scalar_t__ pmf_enabled; scalar_t__ hidden_ssid; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ath10k*,int ,char*,char const*,int,int,int ,int ,int ,int ) ;
 struct sk_buff* FUNC_4 (struct ath10k*,int) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_7(struct ath10k *VAR_5,
        const struct wmi_vdev_start_request_arg *VAR_6,
        bool VAR_7)
{
 struct wmi_vdev_start_request_cmd *VAR_8;
 struct sk_buff *VAR_9;
 const char *VAR_10;
 u32 VAR_11 = 0;

 if (FUNC_1(VAR_6->hidden_ssid && !VAR_6->ssid))
  return FUNC_0(-VAR_1);
 if (FUNC_1(VAR_6->ssid_len > sizeof(VAR_8->ssid.ssid)))
  return FUNC_0(-VAR_1);

 if (VAR_7)
  VAR_10 = "restart";
 else
  VAR_10 = "start";

 VAR_9 = FUNC_4(VAR_5, sizeof(*VAR_8));
 if (!VAR_9)
  return FUNC_0(-VAR_2);

 if (VAR_6->hidden_ssid)
  VAR_11 |= VAR_3;
 if (VAR_6->pmf_enabled)
  VAR_11 |= VAR_4;

 VAR_8 = (struct wmi_vdev_start_request_cmd *)VAR_9->data;
 VAR_8->vdev_id = FUNC_2(VAR_6->vdev_id);
 VAR_8->disable_hw_ack = FUNC_2(VAR_6->disable_hw_ack);
 VAR_8->beacon_interval = FUNC_2(VAR_6->bcn_intval);
 VAR_8->dtim_period = FUNC_2(VAR_6->dtim_period);
 VAR_8->flags = FUNC_2(VAR_11);
 VAR_8->bcn_tx_rate = FUNC_2(VAR_6->bcn_tx_rate);
 VAR_8->bcn_tx_power = FUNC_2(VAR_6->bcn_tx_power);

 if (VAR_6->ssid) {
  VAR_8->ssid.ssid_len = FUNC_2(VAR_6->ssid_len);
  FUNC_6(VAR_8->ssid.ssid, VAR_6->ssid, VAR_6->ssid_len);
 }

 FUNC_5(&VAR_8->chan, &VAR_6->channel);

 FUNC_3(VAR_5, VAR_0,
     "wmi vdev %s id 0x%x flags: 0x%0X, freq %d, mode %d, ch_flags: 0x%0X, max_power: %d\n",
     VAR_10, VAR_6->vdev_id,
     VAR_11, VAR_6->channel.freq, VAR_6->channel.mode,
     VAR_8->chan.flags, VAR_6->channel.max_power);

 return VAR_9;
}
