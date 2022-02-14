
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct wmi_tdls_peer_update_cmd_arg {int vdev_id; int peer_state; int addr; } ;
struct TYPE_2__ {int addr; } ;
struct wmi_tdls_peer_update_cmd {void* peer_state; TYPE_1__ peer_macaddr; void* vdev_id; } ;
struct wmi_tdls_peer_capab_arg {int peer_chan_len; int buff_sta_support; int off_chan_support; int peer_curr_operclass; int self_curr_operclass; int peer_operclass_len; int is_peer_responder; int pref_offchan_num; int pref_offchan_bw; int * peer_operclass; int peer_max_sp; int peer_uapsd_queues; } ;
struct wmi_tdls_peer_capab {void* pref_offchan_bw; void* pref_offchan_num; void* is_peer_responder; int * peer_operclass; void* peer_operclass_len; void* peer_chan_len; void* self_curr_operclass; void* peer_curr_operclass; void* off_chan_support; void* buff_sta_support; void* peer_qos; } ;
struct wmi_channel_arg {int dummy; } ;
struct wmi_channel {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ath10k*,int ,char*,int,int,int) ;
 struct sk_buff* FUNC_4 (struct ath10k*,int) ;
 int FUNC_5 (struct wmi_channel*,struct wmi_channel_arg const*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_8(struct ath10k *VAR_7,
           const struct wmi_tdls_peer_update_cmd_arg *VAR_8,
           const struct wmi_tdls_peer_capab_arg *VAR_9,
           const struct wmi_channel_arg *VAR_10)
{
 struct wmi_tdls_peer_update_cmd *VAR_11;
 struct wmi_tdls_peer_capab *VAR_12;
 struct wmi_channel *VAR_13;
 struct wmi_tlv *VAR_14;
 struct sk_buff *VAR_15;
 u32 VAR_16;
 void *VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_18 = sizeof(*VAR_14) + sizeof(*VAR_11) +
       sizeof(*VAR_14) + sizeof(*VAR_12) +
       sizeof(*VAR_14) + VAR_9->peer_chan_len * sizeof(*VAR_13);

 VAR_15 = FUNC_4(VAR_7, VAR_18);
 if (!VAR_15)
  return FUNC_0(-VAR_1);

 VAR_17 = (void *)VAR_15->data;
 VAR_14 = VAR_17;
 VAR_14->tag = FUNC_1(VAR_6);
 VAR_14->len = FUNC_1(sizeof(*VAR_11));

 VAR_11 = (void *)VAR_14->value;
 VAR_11->vdev_id = FUNC_2(VAR_8->vdev_id);
 FUNC_7(VAR_11->peer_macaddr.addr, VAR_8->addr);
 VAR_11->peer_state = FUNC_2(VAR_8->peer_state);

 VAR_17 += sizeof(*VAR_14);
 VAR_17 += sizeof(*VAR_11);

 VAR_14 = VAR_17;
 VAR_14->tag = FUNC_1(VAR_5);
 VAR_14->len = FUNC_1(sizeof(*VAR_12));
 VAR_12 = (void *)VAR_14->value;
 VAR_16 = FUNC_6(VAR_9->peer_uapsd_queues,
         VAR_9->peer_max_sp);
 VAR_12->peer_qos = FUNC_2(VAR_16);
 VAR_12->buff_sta_support = FUNC_2(VAR_9->buff_sta_support);
 VAR_12->off_chan_support = FUNC_2(VAR_9->off_chan_support);
 VAR_12->peer_curr_operclass = FUNC_2(VAR_9->peer_curr_operclass);
 VAR_12->self_curr_operclass = FUNC_2(VAR_9->self_curr_operclass);
 VAR_12->peer_chan_len = FUNC_2(VAR_9->peer_chan_len);
 VAR_12->peer_operclass_len = FUNC_2(VAR_9->peer_operclass_len);

 for (VAR_19 = 0; VAR_19 < VAR_2; VAR_19++)
  VAR_12->peer_operclass[VAR_19] = VAR_9->peer_operclass[VAR_19];

 VAR_12->is_peer_responder = FUNC_2(VAR_9->is_peer_responder);
 VAR_12->pref_offchan_num = FUNC_2(VAR_9->pref_offchan_num);
 VAR_12->pref_offchan_bw = FUNC_2(VAR_9->pref_offchan_bw);

 VAR_17 += sizeof(*VAR_14);
 VAR_17 += sizeof(*VAR_12);

 VAR_14 = VAR_17;
 VAR_14->tag = FUNC_1(VAR_3);
 VAR_14->len = FUNC_1(VAR_9->peer_chan_len * sizeof(*VAR_13));

 VAR_17 += sizeof(*VAR_14);

 for (VAR_19 = 0; VAR_19 < VAR_9->peer_chan_len; VAR_19++) {
  VAR_14 = VAR_17;
  VAR_14->tag = FUNC_1(VAR_4);
  VAR_14->len = FUNC_1(sizeof(*VAR_13));
  VAR_13 = (void *)VAR_14->value;
  FUNC_5(VAR_13, &VAR_10[VAR_19]);

  VAR_17 += sizeof(*VAR_14);
  VAR_17 += sizeof(*VAR_13);
 }

 FUNC_3(VAR_7, VAR_0,
     "wmi tlv tdls peer update vdev %i state %d n_chans %u\n",
     VAR_8->vdev_id, VAR_8->peer_state, VAR_9->peer_chan_len);
 return VAR_15;
}
