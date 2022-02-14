
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iftype; struct net_device* netdev; int wiphy; } ;
struct TYPE_4__ {struct net_device* dev; TYPE_1__ wdev; } ;
struct wilc_vif {int iftype; size_t idx; scalar_t__ mac_opened; struct wilc* wilc; TYPE_2__ priv; struct net_device* ndev; } ;
struct wilc {size_t vif_num; struct wilc_vif** vif; int wiphy; } ;
struct net_device {int needs_free_netdev; int * netdev_ops; struct wilc_vif* ml_priv; int name; TYPE_1__* ieee80211_ptr; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 struct wilc_vif* FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (struct net_device*) ;
 struct wilc_vif* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,char const*) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;

struct wilc_vif *FUNC_9(struct wilc *VAR_3, const char *VAR_4,
          int VAR_5, enum nl80211_iftype VAR_6,
          bool VAR_7)
{
 struct net_device *VAR_8;
 struct wilc_vif *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(sizeof(*VAR_9));
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_9 = FUNC_4(VAR_8);
 VAR_8->ieee80211_ptr = &VAR_9->priv.wdev;
 FUNC_7(VAR_8->name, VAR_4);
 VAR_9->wilc = VAR_3;
 VAR_9->ndev = VAR_8;
 VAR_8->ml_priv = VAR_9;

 VAR_8->netdev_ops = &VAR_2;

 FUNC_1(VAR_8, FUNC_8(VAR_3->wiphy));

 VAR_9->priv.wdev.wiphy = VAR_3->wiphy;
 VAR_9->priv.wdev.netdev = VAR_8;
 VAR_9->priv.wdev.iftype = VAR_6;
 VAR_9->priv.dev = VAR_8;

 if (VAR_7)
  VAR_10 = FUNC_6(VAR_8);
 else
  VAR_10 = FUNC_5(VAR_8);

 if (VAR_10) {
  FUNC_3(VAR_8);
  return FUNC_0(-VAR_0);
 }

 VAR_8->needs_free_netdev = 1;
 VAR_9->iftype = VAR_5;
 VAR_9->wilc->vif[VAR_3->vif_num] = VAR_9;
 VAR_9->idx = VAR_3->vif_num;
 VAR_3->vif_num += 1;
 VAR_9->mac_opened = 0;
 return VAR_9;
}
