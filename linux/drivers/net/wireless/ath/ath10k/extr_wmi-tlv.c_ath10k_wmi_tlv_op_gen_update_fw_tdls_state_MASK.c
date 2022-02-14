
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct wmi_tdls_set_state_cmd {void* tdls_puapsd_rx_frame_threshold; void* tdls_puapsd_inactivity_time_ms; void* tdls_puapsd_mask; void* tdls_peer_traffic_response_timeout_ms; void* tdls_peer_traffic_ind_window; void* tdls_options; void* rssi_delta; void* rssi_teardown_threshold; void* tx_teardown_threshold; void* tx_discovery_threshold; void* notification_interval_ms; void* state; void* vdev_id; } ;
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
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ath10k*,int ,char*,int,int) ;
 struct sk_buff* FUNC_4 (struct ath10k*,size_t) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_6(struct ath10k *VAR_7, u32 VAR_8,
        enum wmi_tdls_state VAR_9)
{
 struct wmi_tdls_set_state_cmd *VAR_10;
 struct wmi_tlv *VAR_11;
 struct sk_buff *VAR_12;
 void *VAR_13;
 size_t VAR_14;



 u32 VAR_15 = 0;

 if (FUNC_5(VAR_2, VAR_7->wmi.svc_map))
  VAR_15 |= VAR_6;




 if (VAR_9 == VAR_3)
  VAR_9 = VAR_4;

 VAR_14 = sizeof(*VAR_11) + sizeof(*VAR_10);
 VAR_12 = FUNC_4(VAR_7, VAR_14);
 if (!VAR_12)
  return FUNC_0(-VAR_1);

 VAR_13 = (void *)VAR_12->data;
 VAR_11 = VAR_13;
 VAR_11->tag = FUNC_1(VAR_5);
 VAR_11->len = FUNC_1(sizeof(*VAR_10));

 VAR_10 = (void *)VAR_11->value;
 VAR_10->vdev_id = FUNC_2(VAR_8);
 VAR_10->state = FUNC_2(VAR_9);
 VAR_10->notification_interval_ms = FUNC_2(5000);
 VAR_10->tx_discovery_threshold = FUNC_2(100);
 VAR_10->tx_teardown_threshold = FUNC_2(5);
 VAR_10->rssi_teardown_threshold = FUNC_2(-75);
 VAR_10->rssi_delta = FUNC_2(-20);
 VAR_10->tdls_options = FUNC_2(VAR_15);
 VAR_10->tdls_peer_traffic_ind_window = FUNC_2(2);
 VAR_10->tdls_peer_traffic_response_timeout_ms = FUNC_2(5000);
 VAR_10->tdls_puapsd_mask = FUNC_2(0xf);
 VAR_10->tdls_puapsd_inactivity_time_ms = FUNC_2(0);
 VAR_10->tdls_puapsd_rx_frame_threshold = FUNC_2(10);

 VAR_13 += sizeof(*VAR_11);
 VAR_13 += sizeof(*VAR_10);

 FUNC_3(VAR_7, VAR_0, "wmi tlv update fw tdls state %d for vdev %i\n",
     VAR_9, VAR_8);
 return VAR_12;
}
