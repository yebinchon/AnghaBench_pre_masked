
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct iwl_mvm_sta {scalar_t__ sta_id; } ;
struct cfg80211_chan_def {int width; TYPE_1__* chan; } ;
struct TYPE_6__ {scalar_t__ sta_id; int ch_sw_tm_ie; int op_class; int initiator; struct cfg80211_chan_def chandef; int skb; } ;
struct TYPE_8__ {int dwork; TYPE_2__ peer; } ;
struct iwl_mvm {int mutex; TYPE_4__ tdls_cs; } ;
struct TYPE_7__ {int dtim_period; int beacon_int; } ;
struct ieee80211_vif {TYPE_3__ bss_conf; } ;
struct ieee80211_sta {int tdls_initiator; int addr; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_5__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ,...) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 struct iwl_mvm_sta* FUNC_3 (struct ieee80211_sta*) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*,int ,int ,int ,int ,struct cfg80211_chan_def*,int ,int ,int ,struct sk_buff*,int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int VAR_5 ;

int
FUNC_10(struct ieee80211_hw *VAR_6,
       struct ieee80211_vif *VAR_7,
       struct ieee80211_sta *VAR_8, u8 VAR_9,
       struct cfg80211_chan_def *VAR_10,
       struct sk_buff *VAR_11, u32 VAR_12)
{
 struct iwl_mvm *VAR_13 = FUNC_1(VAR_6);
 struct iwl_mvm_sta *VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 FUNC_7(&VAR_13->mutex);

 FUNC_0(VAR_13, "TDLS channel switch with %pM ch %d width %d\n",
         VAR_8->addr, VAR_10->chan->center_freq, VAR_10->width);


 if (VAR_13->tdls_cs.peer.sta_id != VAR_3) {
  FUNC_0(VAR_13,
          "Existing peer. Can't start switch with %pM\n",
          VAR_8->addr);
  VAR_16 = -VAR_0;
  goto out;
 }

 VAR_16 = FUNC_4(VAR_13, VAR_7,
       VAR_4,
       VAR_8->addr, VAR_8->tdls_initiator,
       VAR_9, VAR_10, 0, 0, 0,
       VAR_11, VAR_12);
 if (VAR_16)
  goto out;





 VAR_13->tdls_cs.peer.skb = FUNC_9(VAR_11, VAR_2);
 if (!VAR_13->tdls_cs.peer.skb) {
  VAR_16 = -VAR_1;
  goto out;
 }

 VAR_14 = FUNC_3(VAR_8);
 VAR_13->tdls_cs.peer.sta_id = VAR_14->sta_id;
 VAR_13->tdls_cs.peer.chandef = *VAR_10;
 VAR_13->tdls_cs.peer.initiator = VAR_8->tdls_initiator;
 VAR_13->tdls_cs.peer.op_class = VAR_9;
 VAR_13->tdls_cs.peer.ch_sw_tm_ie = VAR_12;





 VAR_15 = 2 * FUNC_2(VAR_7->bss_conf.dtim_period *
        VAR_7->bss_conf.beacon_int);
 FUNC_5(VAR_5, &VAR_13->tdls_cs.dwork,
    FUNC_6(VAR_15));

out:
 FUNC_8(&VAR_13->mutex);
 return VAR_16;
}
