
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmi_10_4_tdls_set_state_cmd {void* tdls_peer_kickout_threshold; void* teardown_notification_ms; void* tdls_puapsd_rx_frame_threshold; void* tdls_puapsd_inactivity_time_ms; void* tdls_puapsd_mask; void* tdls_peer_traffic_response_timeout_ms; void* tdls_peer_traffic_ind_window; void* tdls_options; void* rssi_delta; void* rssi_teardown_threshold; void* tx_teardown_threshold; void* tx_discovery_threshold; void* notification_interval_ms; void* state; void* vdev_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int svc_map; } ;
struct ath10k {TYPE_1__ wmi; } ;
typedef enum wmi_tdls_state { ____Placeholder_wmi_tdls_state } wmi_tdls_state ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*,int,int) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_7, u32 VAR_8,
      enum wmi_tdls_state VAR_9)
{
 struct wmi_10_4_tdls_set_state_cmd *VAR_10;
 struct sk_buff *VAR_11;
 u32 VAR_12 = 0;

 VAR_11 = FUNC_3(VAR_7, sizeof(*VAR_10));
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 if (FUNC_4(VAR_2, VAR_7->wmi.svc_map) &&
     VAR_9 == VAR_5)
  VAR_9 = VAR_6;

 if (FUNC_4(VAR_3, VAR_7->wmi.svc_map))
  VAR_12 |= VAR_4;

 VAR_10 = (struct wmi_10_4_tdls_set_state_cmd *)VAR_11->data;
 VAR_10->vdev_id = FUNC_1(VAR_8);
 VAR_10->state = FUNC_1(VAR_9);
 VAR_10->notification_interval_ms = FUNC_1(5000);
 VAR_10->tx_discovery_threshold = FUNC_1(100);
 VAR_10->tx_teardown_threshold = FUNC_1(5);
 VAR_10->rssi_teardown_threshold = FUNC_1(-75);
 VAR_10->rssi_delta = FUNC_1(-20);
 VAR_10->tdls_options = FUNC_1(VAR_12);
 VAR_10->tdls_peer_traffic_ind_window = FUNC_1(2);
 VAR_10->tdls_peer_traffic_response_timeout_ms = FUNC_1(5000);
 VAR_10->tdls_puapsd_mask = FUNC_1(0xf);
 VAR_10->tdls_puapsd_inactivity_time_ms = FUNC_1(0);
 VAR_10->tdls_puapsd_rx_frame_threshold = FUNC_1(10);
 VAR_10->teardown_notification_ms = FUNC_1(10);
 VAR_10->tdls_peer_kickout_threshold = FUNC_1(96);

 FUNC_2(VAR_7, VAR_0, "wmi update fw tdls state %d for vdev %i\n",
     VAR_9, VAR_8);
 return VAR_11;
}
