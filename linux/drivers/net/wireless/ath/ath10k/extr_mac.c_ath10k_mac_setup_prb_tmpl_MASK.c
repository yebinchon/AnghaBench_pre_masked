
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct ath10k_vif {scalar_t__ vdev_type; int vdev_id; struct ieee80211_vif* vif; struct ath10k* ar; } ;
struct TYPE_2__ {int svc_map; } ;
struct ath10k {TYPE_1__ wmi; struct ieee80211_hw* hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ath10k*,char*,...) ;
 int FUNC_1 (struct ath10k*,int ,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 scalar_t__ FUNC_3 (struct ieee80211_vif*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ath10k_vif *VAR_3)
{
 struct ath10k *VAR_4 = VAR_3->ar;
 struct ieee80211_hw *VAR_5 = VAR_4->hw;
 struct ieee80211_vif *VAR_6 = VAR_3->vif;
 struct sk_buff *VAR_7;
 int VAR_8;

 if (!FUNC_5(VAR_1, VAR_4->wmi.svc_map))
  return 0;

 if (VAR_3->vdev_type != VAR_2)
  return 0;


 if (FUNC_3(VAR_6))
  return 0;

 VAR_7 = FUNC_2(VAR_5, VAR_6);
 if (!VAR_7) {
  FUNC_0(VAR_4, "failed to get probe resp template from mac80211\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_4, VAR_3->vdev_id, VAR_7);
 FUNC_4(VAR_7);

 if (VAR_8) {
  FUNC_0(VAR_4, "failed to submit probe resp template command: %d\n",
       VAR_8);
  return VAR_8;
 }

 return 0;
}
