
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct wmi_tlv_tdls_peer_event {int vdev_id; TYPE_1__ peer_macaddr; int peer_reason; } ;
struct sk_buff {int len; int data; } ;
struct ieee80211_sta {int addr; } ;
struct ath10k_vif {int vif; } ;
struct ath10k {int hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void const**) ;
 int VAR_1 ;
 int VAR_2 ;



 size_t VAR_3 ;
 int FUNC_1 (int ) ;
 struct ath10k_vif* FUNC_2 (struct ath10k*,int) ;
 int FUNC_3 (struct ath10k*,char*) ;
 void** FUNC_4 (struct ath10k*,int ,int ,int ) ;
 struct ieee80211_sta* FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (void const**) ;

__attribute__((used)) static void FUNC_8(struct ath10k *VAR_4, struct sk_buff *VAR_5)
{
 struct ieee80211_sta *VAR_6;
 const struct wmi_tlv_tdls_peer_event *VAR_7;
 const void **VAR_8;
 struct ath10k_vif *VAR_9;

 VAR_8 = FUNC_4(VAR_4, VAR_5->data, VAR_5->len, VAR_0);
 if (FUNC_0(VAR_8)) {
  FUNC_3(VAR_4, "tdls peer failed to parse tlv");
  return;
 }
 VAR_7 = VAR_8[VAR_3];
 if (!VAR_7) {
  FUNC_7(VAR_8);
  FUNC_3(VAR_4, "tdls peer NULL event");
  return;
 }

 switch (FUNC_1(VAR_7->peer_reason)) {
 case 128:
 case 129:
 case 130:
  VAR_6 = FUNC_5(VAR_4->hw,
             VAR_7->peer_macaddr.addr,
             ((void*)0));
  if (!VAR_6) {
   FUNC_3(VAR_4, "did not find station from tdls peer event");
   FUNC_7(VAR_8);
   return;
  }
  VAR_9 = FUNC_2(VAR_4, FUNC_1(VAR_7->vdev_id));
  FUNC_6(
     VAR_9->vif, VAR_6->addr,
     VAR_1,
     VAR_2,
     VAR_0
     );
  break;
 }
 FUNC_7(VAR_8);
}
