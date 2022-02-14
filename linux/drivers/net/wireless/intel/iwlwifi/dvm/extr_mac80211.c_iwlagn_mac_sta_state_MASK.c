
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_vif_priv {int ctx; } ;
struct iwl_priv {int mutex; int sta_lock; TYPE_1__* stations; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ drv_priv; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum ieee80211_sta_state { ____Placeholder_ieee80211_sta_state } ieee80211_sta_state ;
struct TYPE_2__ {int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_priv*,char*,int ) ;
 int FUNC_1 (struct iwl_priv*,char*,...) ;
 struct iwl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (struct iwl_priv*) ;
 int FUNC_4 (struct iwl_priv*,struct ieee80211_sta*,size_t) ;
 size_t FUNC_5 (struct ieee80211_sta*) ;
 int FUNC_6 (struct iwl_priv*,int ,struct ieee80211_sta*) ;
 int FUNC_7 (struct ieee80211_hw*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_8 (struct ieee80211_hw*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct ieee80211_hw *VAR_6,
    struct ieee80211_vif *VAR_7,
    struct ieee80211_sta *VAR_8,
    enum ieee80211_sta_state VAR_9,
    enum ieee80211_sta_state VAR_10)
{
 struct iwl_priv *VAR_11 = FUNC_2(VAR_6);
 struct iwl_vif_priv *VAR_12 = (void *)VAR_7->drv_priv;
 enum {
  NONE, ADD, REMOVE, HT_RATE_INIT, ADD_RATE_INIT,
 } VAR_13 = NONE;
 int VAR_14;

 FUNC_1(VAR_11, "station %pM state change %d->%d\n",
      VAR_8->addr, VAR_9, VAR_10);

 FUNC_9(&VAR_11->mutex);
 if (VAR_7->type == VAR_5) {
  if (VAR_9 == VAR_3 &&
      VAR_10 == VAR_2)
   VAR_13 = ADD;
  else if (VAR_9 == VAR_2 &&
    VAR_10 == VAR_3)
   VAR_13 = REMOVE;
  else if (VAR_9 == VAR_1 &&
    VAR_10 == VAR_0)
   VAR_13 = HT_RATE_INIT;
 } else {
  if (VAR_9 == VAR_1 &&
      VAR_10 == VAR_0)
   VAR_13 = ADD_RATE_INIT;
  else if (VAR_9 == VAR_0 &&
    VAR_10 == VAR_1)
   VAR_13 = REMOVE;
 }

 switch (VAR_13) {
 case ADD:
  VAR_14 = FUNC_7(VAR_6, VAR_7, VAR_8);
  if (VAR_14)
   break;






  FUNC_11(&VAR_11->sta_lock);
  VAR_11->stations[FUNC_5(VAR_8)].used &=
   ~VAR_4;
  FUNC_12(&VAR_11->sta_lock);
  break;
 case REMOVE:
  VAR_14 = FUNC_8(VAR_6, VAR_7, VAR_8);
  break;
 case ADD_RATE_INIT:
  VAR_14 = FUNC_7(VAR_6, VAR_7, VAR_8);
  if (VAR_14)
   break;

  FUNC_0(VAR_11,
          "Initializing rate scaling for station %pM\n",
          VAR_8->addr);
  FUNC_4(VAR_11, VAR_8, FUNC_5(VAR_8));
  VAR_14 = 0;
  break;
 case HT_RATE_INIT:

  VAR_14 = FUNC_6(VAR_11, VAR_12->ctx, VAR_8);
  if (VAR_14)
   break;
  FUNC_0(VAR_11,
          "Initializing rate scaling for station %pM\n",
          VAR_8->addr);
  FUNC_4(VAR_11, VAR_8, FUNC_5(VAR_8));
  VAR_14 = 0;
  break;
 default:
  VAR_14 = 0;
  break;
 }





 if (FUNC_3(VAR_11))
  VAR_14 = 0;

 FUNC_10(&VAR_11->mutex);
 FUNC_1(VAR_11, "leave\n");

 return VAR_14;
}
