
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmi_tdls_peer_update_cmd_arg {int vdev_id; int peer_state; int addr; } ;
struct wmi_tdls_peer_capabilities {int * peer_chan_list; void* pref_offchan_bw; void* pref_offchan_num; void* is_peer_responder; int * peer_operclass; void* peer_operclass_len; void* peer_chan_len; void* self_curr_operclass; void* peer_curr_operclass; void* off_chan_support; void* buff_sta_support; void* peer_qos; } ;
struct wmi_tdls_peer_capab_arg {int peer_chan_len; int buff_sta_support; int off_chan_support; int peer_curr_operclass; int self_curr_operclass; int peer_operclass_len; int is_peer_responder; int pref_offchan_num; int pref_offchan_bw; int * peer_operclass; int peer_max_sp; int peer_uapsd_queues; } ;
struct wmi_channel_arg {int dummy; } ;
struct wmi_channel {int dummy; } ;
struct TYPE_2__ {int addr; } ;
struct wmi_10_4_tdls_peer_update_cmd {struct wmi_tdls_peer_capabilities peer_capab; void* peer_state; TYPE_1__ peer_macaddr; void* vdev_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*,int,int,int) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct wmi_channel*,struct wmi_channel_arg const*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__,int ,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_8(struct ath10k *VAR_3,
         const struct wmi_tdls_peer_update_cmd_arg *VAR_4,
         const struct wmi_tdls_peer_capab_arg *VAR_5,
         const struct wmi_channel_arg *VAR_6)
{
 struct wmi_10_4_tdls_peer_update_cmd *VAR_7;
 struct wmi_tdls_peer_capabilities *VAR_8;
 struct wmi_channel *VAR_9;
 struct sk_buff *VAR_10;
 u32 VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;


 VAR_13 = VAR_5->peer_chan_len ? (VAR_5->peer_chan_len - 1) : 0;

 VAR_12 = sizeof(*VAR_7) + VAR_13 * sizeof(*VAR_9);

 VAR_10 = FUNC_3(VAR_3, VAR_12);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 FUNC_7(VAR_10->data, 0, sizeof(*VAR_7));

 VAR_7 = (struct wmi_10_4_tdls_peer_update_cmd *)VAR_10->data;
 VAR_7->vdev_id = FUNC_1(VAR_4->vdev_id);
 FUNC_6(VAR_7->peer_macaddr.addr, VAR_4->addr);
 VAR_7->peer_state = FUNC_1(VAR_4->peer_state);

 VAR_11 = FUNC_4(VAR_5->peer_uapsd_queues,
            VAR_5->peer_max_sp);

 VAR_8 = &VAR_7->peer_capab;
 VAR_8->peer_qos = FUNC_1(VAR_11);
 VAR_8->buff_sta_support = FUNC_1(VAR_5->buff_sta_support);
 VAR_8->off_chan_support = FUNC_1(VAR_5->off_chan_support);
 VAR_8->peer_curr_operclass = FUNC_1(VAR_5->peer_curr_operclass);
 VAR_8->self_curr_operclass = FUNC_1(VAR_5->self_curr_operclass);
 VAR_8->peer_chan_len = FUNC_1(VAR_5->peer_chan_len);
 VAR_8->peer_operclass_len = FUNC_1(VAR_5->peer_operclass_len);

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
  VAR_8->peer_operclass[VAR_14] = VAR_5->peer_operclass[VAR_14];

 VAR_8->is_peer_responder = FUNC_1(VAR_5->is_peer_responder);
 VAR_8->pref_offchan_num = FUNC_1(VAR_5->pref_offchan_num);
 VAR_8->pref_offchan_bw = FUNC_1(VAR_5->pref_offchan_bw);

 for (VAR_14 = 0; VAR_14 < VAR_5->peer_chan_len; VAR_14++) {
  VAR_9 = (struct wmi_channel *)&VAR_8->peer_chan_list[VAR_14];
  FUNC_5(VAR_9, &VAR_6[VAR_14]);
 }

 FUNC_2(VAR_3, VAR_0,
     "wmi tdls peer update vdev %i state %d n_chans %u\n",
     VAR_4->vdev_id, VAR_4->peer_state, VAR_5->peer_chan_len);
 return VAR_10;
}
