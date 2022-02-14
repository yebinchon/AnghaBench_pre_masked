
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int addr; } ;
struct wmi_tdls_peer_event {TYPE_1__ peer_macaddr; int peer_reason; int peer_status; int vdev_id; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k_vif {int vif; } ;
struct ath10k_peer {int dummy; } ;
struct ath10k {int data_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*,int,...) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 struct ath10k_vif* FUNC_3 (struct ath10k*,int) ;
 struct ath10k_peer* FUNC_4 (struct ath10k*,int,int) ;
 int FUNC_5 (struct ath10k*,char*,int) ;
 int FUNC_6 (int ,int,int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct ath10k *VAR_5, struct sk_buff *VAR_6)
{
 struct wmi_tdls_peer_event *VAR_7;
 struct ath10k_peer *VAR_8;
 struct ath10k_vif *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 u8 VAR_13;

 if (VAR_6->len < sizeof(*VAR_7)) {
  FUNC_2(VAR_5, "received tdls peer event with invalid size (%d bytes)\n",
      VAR_6->len);
  return;
 }

 VAR_7 = (struct wmi_tdls_peer_event *)VAR_6->data;
 VAR_10 = FUNC_0(VAR_7->vdev_id);
 VAR_11 = FUNC_0(VAR_7->peer_status);
 VAR_12 = FUNC_0(VAR_7->peer_reason);

 FUNC_7(&VAR_5->data_lock);
 VAR_8 = FUNC_4(VAR_5, VAR_10, VAR_7->peer_macaddr.addr);
 FUNC_8(&VAR_5->data_lock);

 if (!VAR_8) {
  FUNC_5(VAR_5, "failed to find peer entry for %pM\n",
       VAR_7->peer_macaddr.addr);
  return;
 }

 switch (VAR_11) {
 case 131:
  switch (VAR_12) {
  case 129:
  case 130:
  case 128:
   VAR_13 = VAR_3;
   break;
  default:
   VAR_13 = VAR_4;
   break;
  }

  VAR_9 = FUNC_3(VAR_5, VAR_10);
  if (!VAR_9) {
   FUNC_5(VAR_5, "received tdls peer event for invalid vdev id %u\n",
        VAR_10);
   return;
  }

  FUNC_6(VAR_9->vif, VAR_7->peer_macaddr.addr,
         VAR_2, VAR_13,
         VAR_1);

  FUNC_1(VAR_5, VAR_0,
      "received tdls teardown event for peer %pM reason %u\n",
      VAR_7->peer_macaddr.addr, VAR_12);
  break;
 default:
  FUNC_1(VAR_5, VAR_0,
      "received unknown tdls peer event %u\n",
      VAR_11);
  break;
 }
}
