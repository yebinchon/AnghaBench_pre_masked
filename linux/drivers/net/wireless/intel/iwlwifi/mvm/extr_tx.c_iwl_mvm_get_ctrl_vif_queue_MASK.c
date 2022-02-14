
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm_vif {int cab_queue; } ;
struct iwl_mvm {int probe_queue; int p2p_dev_queue; } ;
struct TYPE_3__ {TYPE_2__* vif; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
typedef int __le16 ;
struct TYPE_4__ {int type; } ;





 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct iwl_mvm_vif* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct iwl_mvm *VAR_0,
          struct ieee80211_tx_info *VAR_1,
          struct ieee80211_hdr *VAR_2)
{
 struct iwl_mvm_vif *VAR_3 =
  FUNC_9(VAR_1->control.vif);
 __le16 VAR_4 = VAR_2->frame_control;

 switch (VAR_1->control.vif->type) {
 case 129:
 case 130:
  if (FUNC_6(VAR_4) &&
      (!FUNC_3(VAR_4) ||
       FUNC_4(VAR_4) || FUNC_5(VAR_4)))
   return VAR_0->probe_queue;

  if (!FUNC_2(VAR_4) && !FUNC_7(VAR_4) &&
      FUNC_8(VAR_2->addr1))
   return VAR_3->cab_queue;

  FUNC_0(VAR_1->control.vif->type != 130,
     "fc=0x%02x", FUNC_10(VAR_4));
  return VAR_0->probe_queue;
 case 128:
  if (FUNC_6(VAR_4))
   return VAR_0->p2p_dev_queue;

  FUNC_1(1);
  return VAR_0->p2p_dev_queue;
 default:
  FUNC_0(1, "Not a ctrl vif, no available queue\n");
  return -1;
 }
}
