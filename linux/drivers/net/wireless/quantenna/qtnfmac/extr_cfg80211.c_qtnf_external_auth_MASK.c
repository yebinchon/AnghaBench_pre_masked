
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct TYPE_3__ {scalar_t__ iftype; } ;
struct qtnf_vif {int vifid; TYPE_2__* mac; int bssid; TYPE_1__ wdev; } ;
struct net_device {int dummy; } ;
struct cfg80211_external_auth_params {int bssid; } ;
struct TYPE_4__ {int macid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct qtnf_vif*,struct cfg80211_external_auth_params*) ;
 struct qtnf_vif* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct wiphy *VAR_2, struct net_device *VAR_3,
     struct cfg80211_external_auth_params *VAR_4)
{
 struct qtnf_vif *VAR_5 = FUNC_4(VAR_3);
 int VAR_6;

 if (VAR_5->wdev.iftype != VAR_1)
  return -VAR_0;

 if (!FUNC_0(VAR_5->bssid, VAR_4->bssid))
  FUNC_2("unexpected bssid: %pM", VAR_4->bssid);

 VAR_6 = FUNC_3(VAR_5, VAR_4);
 if (VAR_6) {
  FUNC_1("VIF%u.%u: failed to report external auth\n",
         VAR_5->mac->macid, VAR_5->vifid);
  goto out;
 }

out:
 return VAR_6;
}
