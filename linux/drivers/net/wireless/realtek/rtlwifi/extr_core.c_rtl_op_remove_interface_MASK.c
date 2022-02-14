
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int conf_mutex; } ;
struct rtl_priv {TYPE_3__ locks; TYPE_2__* cfg; } ;
struct rtl_mac {int beacon_enabled; int opmode; int vendor; int bssid; int link_state; int * vif; scalar_t__ p2p; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_5__ {TYPE_1__* ops; int * maps; } ;
struct TYPE_4__ {int (* set_network_type ) (struct ieee80211_hw*,int ) ;int (* update_interrupt_mask ) (struct ieee80211_hw*,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_6 (struct ieee80211_hw*,int ) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_7,
  struct ieee80211_vif *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_4(VAR_7);
 struct rtl_mac *VAR_10 = FUNC_3(FUNC_4(VAR_7));

 FUNC_1(&VAR_9->locks.conf_mutex);


 if (VAR_8->type == VAR_2 ||
     VAR_8->type == VAR_1 ||
     VAR_8->type == VAR_3) {
  if (VAR_10->beacon_enabled == 1) {
   VAR_10->beacon_enabled = 0;
   VAR_9->cfg->ops->update_interrupt_mask(VAR_7, 0,
     VAR_9->cfg->maps[VAR_6]);
  }
 }





 VAR_10->p2p = 0;
 VAR_10->vif = ((void*)0);
 VAR_10->link_state = VAR_0;
 FUNC_0(VAR_10->bssid);
 VAR_10->vendor = VAR_5;
 VAR_10->opmode = VAR_4;
 VAR_9->cfg->ops->set_network_type(VAR_7, VAR_10->opmode);

 FUNC_2(&VAR_9->locks.conf_mutex);
}
