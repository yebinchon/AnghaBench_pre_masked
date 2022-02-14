
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct TYPE_8__ {int iftype; } ;
struct TYPE_6__ {int sta_associated_bss; } ;
struct TYPE_5__ {int local_random; int recv_random; int is_wilc_ie; } ;
struct wilc_priv {TYPE_4__ wdev; TYPE_2__ assoc_stainfo; TYPE_1__ p2p; } ;
struct wilc_vif {int connecting; void* iftype; int idx; int monitor_flag; struct wilc_priv priv; } ;
struct wilc {int initialized; } ;
struct vif_params {int dummy; } ;
struct net_device {TYPE_3__* ieee80211_ptr; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_7__ {int iftype; } ;


 int VAR_0 ;
 int VAR_1 ;




 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 struct wilc_vif* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct wilc_vif*) ;
 int FUNC_4 (struct wilc_vif*,int ,void*,int ) ;
 int FUNC_5 (struct wilc*,int) ;
 struct wilc* FUNC_6 (struct wiphy*) ;

__attribute__((used)) static int FUNC_7(struct wiphy *VAR_7, struct net_device *VAR_8,
          enum nl80211_iftype VAR_9,
          struct vif_params *VAR_10)
{
 struct wilc *VAR_11 = FUNC_6(VAR_7);
 struct wilc_vif *VAR_12 = FUNC_2(VAR_8);
 struct wilc_priv *VAR_13 = &VAR_12->priv;

 VAR_13->p2p.local_random = 0x01;
 VAR_13->p2p.recv_random = 0x00;
 VAR_13->p2p.is_wilc_ie = 0;

 switch (VAR_9) {
 case 128:
  VAR_12->connecting = 0;
  VAR_8->ieee80211_ptr->iftype = VAR_9;
  VAR_13->wdev.iftype = VAR_9;
  VAR_12->monitor_flag = 0;
  if (VAR_12->iftype == VAR_2 || VAR_12->iftype == VAR_4)
   FUNC_5(VAR_11, 1);
  VAR_12->iftype = VAR_6;
  FUNC_4(VAR_12, FUNC_3(VAR_12),
     VAR_6, VAR_12->idx);

  FUNC_0(VAR_13->assoc_stainfo.sta_associated_bss, 0,
         VAR_5 * VAR_1);
  break;

 case 130:
  VAR_12->connecting = 0;
  VAR_8->ieee80211_ptr->iftype = VAR_9;
  VAR_13->wdev.iftype = VAR_9;
  VAR_12->monitor_flag = 0;
  VAR_12->iftype = VAR_3;
  FUNC_4(VAR_12, FUNC_3(VAR_12),
     VAR_6, VAR_12->idx);
  break;

 case 131:
  VAR_8->ieee80211_ptr->iftype = VAR_9;
  VAR_13->wdev.iftype = VAR_9;
  VAR_12->iftype = VAR_2;

  if (VAR_11->initialized)
   FUNC_4(VAR_12, FUNC_3(VAR_12),
      VAR_2, VAR_12->idx);
  break;

 case 129:
  VAR_8->ieee80211_ptr->iftype = VAR_9;
  VAR_13->wdev.iftype = VAR_9;
  VAR_12->iftype = VAR_4;
  FUNC_4(VAR_12, FUNC_3(VAR_12),
     VAR_2, VAR_12->idx);
  break;

 default:
  FUNC_1(VAR_8, "Unknown interface type= %d\n", VAR_9);
  return -VAR_0;
 }

 return 0;
}
