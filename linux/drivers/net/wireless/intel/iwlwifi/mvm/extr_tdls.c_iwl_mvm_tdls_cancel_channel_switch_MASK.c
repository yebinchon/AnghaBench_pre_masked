
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t sta_id; int * skb; } ;
struct TYPE_6__ {size_t cur_sta_id; scalar_t__ state; int dwork; TYPE_1__ peer; } ;
struct iwl_mvm {TYPE_3__ tdls_cs; int mutex; int * fw_id_to_mac_id; } ;
struct TYPE_5__ {int dtim_period; int beacon_int; } ;
struct ieee80211_vif {TYPE_2__ bss_conf; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int ) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct ieee80211_sta* FUNC_9 (int ,int ) ;

void FUNC_10(struct ieee80211_hw *VAR_2,
     struct ieee80211_vif *VAR_3,
     struct ieee80211_sta *VAR_4)
{
 struct iwl_mvm *VAR_5 = FUNC_1(VAR_2);
 struct ieee80211_sta *VAR_6;
 bool VAR_7 = 0;

 FUNC_7(&VAR_5->mutex);

 FUNC_0(VAR_5, "TDLS cancel channel switch with %pM\n", VAR_4->addr);


 if (VAR_5->tdls_cs.peer.sta_id == VAR_0) {
  FUNC_0(VAR_5, "No ch switch peer - %pM\n", VAR_4->addr);
  goto out;
 }

 VAR_6 = FUNC_9(
    VAR_5->fw_id_to_mac_id[VAR_5->tdls_cs.peer.sta_id],
    FUNC_5(&VAR_5->mutex));

 if (VAR_6 != VAR_4)
  goto out;






 if (VAR_5->tdls_cs.cur_sta_id == VAR_5->tdls_cs.peer.sta_id &&
     VAR_5->tdls_cs.state != VAR_1)
  VAR_7 = 1;

 VAR_5->tdls_cs.peer.sta_id = VAR_0;
 FUNC_3(VAR_5->tdls_cs.peer.skb);
 VAR_5->tdls_cs.peer.skb = ((void*)0);

out:
 FUNC_8(&VAR_5->mutex);


 if (VAR_7)
  FUNC_6(FUNC_2(VAR_3->bss_conf.dtim_period *
    VAR_3->bss_conf.beacon_int));


 FUNC_4(&VAR_5->tdls_cs.dwork);

 FUNC_0(VAR_5, "TDLS ending channel switch with %pM\n", VAR_4->addr);
}
