
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rsi_hw {struct rsi_common* priv; } ;
struct rsi_common {scalar_t__ iface_down; } ;
struct TYPE_3__ {struct ieee80211_channel* chan; } ;
struct TYPE_4__ {TYPE_1__ chandef; } ;
struct ieee80211_vif {TYPE_2__ bss_conf; } ;
struct ieee80211_channel {int hw_value; } ;


 int VAR_0 ;
 int FUNC_0 (struct rsi_common*,struct ieee80211_channel*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct rsi_common*,struct ieee80211_channel*) ;

__attribute__((used)) static void FUNC_3(struct rsi_hw *VAR_1,
          struct ieee80211_vif *VAR_2)
{
 struct rsi_common *VAR_3 = VAR_1->priv;
 struct ieee80211_channel *VAR_4;

 if (VAR_3->iface_down)
  return;
 if (!VAR_2)
  return;

 VAR_4 = VAR_2->bss_conf.chandef.chan;

 if (!VAR_4)
  return;

 FUNC_0(VAR_3, VAR_4);
 FUNC_2(VAR_3, VAR_4);
 FUNC_1(VAR_0, "Switched to channel - %d\n", VAR_4->hw_value);
}
