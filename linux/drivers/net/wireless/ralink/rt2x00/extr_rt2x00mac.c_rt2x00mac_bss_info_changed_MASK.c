
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00_intf {int enable_beacon; int beacon_skb_mutex; } ;
struct TYPE_2__ {scalar_t__ count; } ;
struct rt2x00_dev {int intf_beaconing; int intf_associated; TYPE_1__ link; int bcn; int flags; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;
struct ieee80211_bss_conf {scalar_t__ assoc; scalar_t__ enable_beacon; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*,int) ;
 int FUNC_4 (struct rt2x00_dev*,struct rt2x00_intf*,struct ieee80211_bss_conf*,int) ;
 int FUNC_5 (struct rt2x00_dev*,struct rt2x00_intf*,int ,int *,int ) ;
 int FUNC_6 (struct rt2x00_dev*,struct ieee80211_vif*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct rt2x00_dev*,struct ieee80211_vif*) ;
 int FUNC_10 (int ,int *) ;
 struct rt2x00_intf* FUNC_11 (struct ieee80211_vif*) ;

void FUNC_12(struct ieee80211_hw *VAR_10,
    struct ieee80211_vif *VAR_11,
    struct ieee80211_bss_conf *VAR_12,
    u32 VAR_13)
{
 struct rt2x00_dev *VAR_14 = VAR_10->priv;
 struct rt2x00_intf *VAR_15 = FUNC_11(VAR_11);





 if (!FUNC_10(VAR_9, &VAR_14->flags))
  return;




 if (VAR_13 & VAR_4)
  FUNC_5(VAR_14, VAR_15, VAR_11->type, ((void*)0),
          VAR_12->bssid);




 if (VAR_13 & VAR_2) {
  FUNC_0(&VAR_15->beacon_skb_mutex);
  if (!VAR_12->enable_beacon && VAR_15->enable_beacon) {
   VAR_14->intf_beaconing--;
   VAR_15->enable_beacon = 0;

   if (VAR_14->intf_beaconing == 0) {




    FUNC_8(VAR_14->bcn);
   }





   FUNC_6(VAR_14, VAR_11);
  } else if (VAR_12->enable_beacon && !VAR_15->enable_beacon) {
   VAR_14->intf_beaconing++;
   VAR_15->enable_beacon = 1;




   if (FUNC_2(VAR_14))
    FUNC_9(VAR_14, VAR_11);

   if (VAR_14->intf_beaconing == 1) {




    FUNC_7(VAR_14->bcn);
   }
  }
  FUNC_1(&VAR_15->beacon_skb_mutex);
 }







 if (VAR_13 & VAR_0) {
  VAR_14->link.count = 0;

  if (VAR_12->assoc)
   VAR_14->intf_associated++;
  else
   VAR_14->intf_associated--;

  FUNC_3(VAR_14, !!VAR_14->intf_associated);
 }





 if (VAR_13 & (VAR_5 | VAR_6 |
         VAR_7 | VAR_1 |
         VAR_3 | VAR_8))
  FUNC_4(VAR_14, VAR_15, VAR_12, VAR_13);
}
