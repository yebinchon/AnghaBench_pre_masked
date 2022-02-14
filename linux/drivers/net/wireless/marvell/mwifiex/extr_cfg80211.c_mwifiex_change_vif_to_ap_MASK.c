
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vif_params {int dummy; } ;
struct net_device {TYPE_3__* ieee80211_ptr; int name; } ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct TYPE_5__ {scalar_t__ uap_intf; int sta_intf; int p2p_intf; } ;
struct TYPE_4__ {scalar_t__ uap_intf; } ;
struct mwifiex_adapter {TYPE_2__ curr_iface_comb; TYPE_1__ iface_limit; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_6__ {int iftype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct mwifiex_adapter*,int ,char*,...) ;
 scalar_t__ FUNC_1 (struct mwifiex_private*) ;
 scalar_t__ FUNC_2 (struct mwifiex_private*,struct net_device*,int) ;
 struct mwifiex_private* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct mwifiex_private*,int ,int ,int ,int *,int) ;
 scalar_t__ FUNC_5 (struct mwifiex_private*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_4,
    enum nl80211_iftype VAR_5,
    enum nl80211_iftype VAR_6,
    struct vif_params *VAR_7)
{
 struct mwifiex_private *VAR_8;
 struct mwifiex_adapter *VAR_9;

 VAR_8 = FUNC_3(VAR_4);

 if (!VAR_8)
  return -1;

 VAR_9 = VAR_8->adapter;

 if (VAR_9->curr_iface_comb.uap_intf ==
     VAR_9->iface_limit.uap_intf) {
  FUNC_0(VAR_9, VAR_0,
       "cannot create multiple AP ifaces\n");
  return -1;
 }

 FUNC_0(VAR_9, VAR_3,
      "%s: changing role to AP\n", VAR_4->name);

 if (FUNC_1(VAR_8))
  return -1;
 if (FUNC_2(VAR_8, VAR_4, VAR_6))
  return -1;
 if (FUNC_4(VAR_8, VAR_2,
        VAR_1, 0, ((void*)0), 1))
  return -1;
 if (FUNC_5(VAR_8, 0, 0))
  return -1;

 switch (VAR_5) {
 case 130:
 case 129:
  VAR_9->curr_iface_comb.p2p_intf--;
  break;
 case 128:
 case 131:
  VAR_9->curr_iface_comb.sta_intf--;
  break;
 default:
  break;
 }

 VAR_9->curr_iface_comb.uap_intf++;
 VAR_4->ieee80211_ptr->iftype = VAR_6;
 return 0;
}
