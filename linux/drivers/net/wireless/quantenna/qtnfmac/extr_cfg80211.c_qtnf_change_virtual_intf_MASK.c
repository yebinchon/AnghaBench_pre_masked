
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct vif_params {int use_4addr; int * macaddr; } ;
struct TYPE_3__ {int iftype; } ;
struct qtnf_vif {TYPE_1__ wdev; int vifid; TYPE_2__* mac; } ;
struct net_device {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_4__ {int macid; } ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (struct qtnf_vif*,int,int,int *) ;
 struct qtnf_vif* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (struct wiphy*,struct qtnf_vif*,int) ;

__attribute__((used)) static int
FUNC_5(struct wiphy *VAR_0,
    struct net_device *VAR_1,
    enum nl80211_iftype VAR_2,
    struct vif_params *VAR_3)
{
 struct qtnf_vif *VAR_4 = FUNC_2(VAR_1);
 u8 *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_0, VAR_4, VAR_2);
 if (VAR_7) {
  FUNC_0("VIF%u.%u combination check: failed to set type %d\n",
         VAR_4->mac->macid, VAR_4->vifid, VAR_2);
  return VAR_7;
 }

 if (VAR_3) {
  VAR_5 = VAR_3->macaddr;
  VAR_6 = VAR_3->use_4addr;
 }

 FUNC_3(VAR_4->mac, 1);

 VAR_7 = FUNC_1(VAR_4, VAR_2, VAR_6, VAR_5);
 if (VAR_7) {
  FUNC_0("VIF%u.%u: failed to change type to %d\n",
         VAR_4->mac->macid, VAR_4->vifid, VAR_2);
  return VAR_7;
 }

 VAR_4->wdev.iftype = VAR_2;
 return 0;
}
