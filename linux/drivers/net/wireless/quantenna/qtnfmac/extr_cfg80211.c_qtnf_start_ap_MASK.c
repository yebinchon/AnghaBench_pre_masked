
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct qtnf_vif {int vifid; TYPE_1__* mac; } ;
struct net_device {int dummy; } ;
struct cfg80211_ap_settings {int dummy; } ;
struct TYPE_2__ {int macid; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct qtnf_vif*,struct cfg80211_ap_settings*) ;
 struct qtnf_vif* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_0, struct net_device *VAR_1,
    struct cfg80211_ap_settings *VAR_2)
{
 struct qtnf_vif *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4)
  FUNC_0("VIF%u.%u: failed to start AP\n", VAR_3->mac->macid,
         VAR_3->vifid);

 return VAR_4;
}
