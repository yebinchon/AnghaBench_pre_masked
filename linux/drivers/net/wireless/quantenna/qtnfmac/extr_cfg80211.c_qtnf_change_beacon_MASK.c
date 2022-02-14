
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct qtnf_vif {int dummy; } ;
struct net_device {int dummy; } ;
struct cfg80211_beacon_data {int dummy; } ;


 int FUNC_0 (struct qtnf_vif*,struct cfg80211_beacon_data*) ;
 struct qtnf_vif* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_0, struct net_device *VAR_1,
         struct cfg80211_beacon_data *VAR_2)
{
 struct qtnf_vif *VAR_3 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3, VAR_2);
}
