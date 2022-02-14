
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_tdls_peer_update_cmd_arg {int peer_state; int addr; int vdev_id; } ;
struct wmi_tdls_peer_capab_arg {int is_peer_responder; int peer_uapsd_queues; int peer_max_sp; } ;
struct wmi_channel_arg {int dummy; } ;
struct ieee80211_sta {int tdls_initiator; int uapsd_queues; int max_sp; int addr; } ;
struct ath10k {int conf_mutex; } ;
typedef enum wmi_tdls_peer_state { ____Placeholder_wmi_tdls_peer_state } wmi_tdls_peer_state ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,char*,int ,int ,int) ;
 int FUNC_1 (struct ath10k*,struct wmi_tdls_peer_update_cmd_arg*,struct wmi_tdls_peer_capab_arg*,struct wmi_channel_arg*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_1, u32 VAR_2,
           struct ieee80211_sta *VAR_3,
           enum wmi_tdls_peer_state VAR_4)
{
 int VAR_5;
 struct wmi_tdls_peer_update_cmd_arg VAR_6 = {};
 struct wmi_tdls_peer_capab_arg VAR_7 = {};
 struct wmi_channel_arg VAR_8 = {};

 FUNC_3(&VAR_1->conf_mutex);

 VAR_6.vdev_id = VAR_2;
 VAR_6.peer_state = VAR_4;
 FUNC_2(VAR_6.addr, VAR_3->addr);

 VAR_7.peer_max_sp = VAR_3->max_sp;
 VAR_7.peer_uapsd_queues = VAR_3->uapsd_queues;

 if (VAR_4 == VAR_0 &&
     !VAR_3->tdls_initiator)
  VAR_7.is_peer_responder = 1;

 VAR_5 = FUNC_1(VAR_1, &VAR_6, &VAR_7, &VAR_8);
 if (VAR_5) {
  FUNC_0(VAR_1, "failed to update tdls peer %pM on vdev %i: %i\n",
       VAR_6.addr, VAR_2, VAR_5);
  return VAR_5;
 }

 return 0;
}
