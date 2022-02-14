
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct iwl_stored_beacon_notif {int band; int data; int channel; int system_time; int tsf; int byte_count; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int hw; } ;
struct ieee80211_rx_status {int band; int freq; void* device_timestamp; int flag; int mactime; } ;
typedef int rx_status ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *,struct sk_buff*,int *) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct ieee80211_rx_status*,int) ;
 int FUNC_10 (struct ieee80211_rx_status*,int ,int) ;
 struct iwl_rx_packet* FUNC_11 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_12 (struct sk_buff*,int ,scalar_t__) ;

void FUNC_13(struct iwl_mvm *VAR_5,
        struct iwl_rx_cmd_buffer *VAR_6)
{
 struct iwl_rx_packet *VAR_7 = FUNC_11(VAR_6);
 struct iwl_stored_beacon_notif *VAR_8 = (void *)VAR_7->data;
 struct ieee80211_rx_status VAR_9;
 struct sk_buff *VAR_10;
 u32 VAR_11 = FUNC_7(VAR_8->byte_count);

 if (VAR_11 == 0)
  return;

 VAR_10 = FUNC_2(VAR_11, VAR_0);
 if (!VAR_10) {
  FUNC_1(VAR_5, "alloc_skb failed\n");
  return;
 }


 FUNC_10(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.mactime = FUNC_8(VAR_8->tsf);

 VAR_9.flag |= VAR_3;
 VAR_9.device_timestamp = FUNC_7(VAR_8->system_time);
 VAR_9.band =
  (VAR_8->band & FUNC_3(VAR_4)) ?
    VAR_1 : VAR_2;
 VAR_9.freq =
  FUNC_4(FUNC_6(VAR_8->channel),
            VAR_9.band);


 FUNC_12(VAR_10, VAR_8->data, VAR_11);
 FUNC_9(FUNC_0(VAR_10), &VAR_9, sizeof(VAR_9));


 FUNC_5(VAR_5->hw, ((void*)0), VAR_10, ((void*)0));
}
