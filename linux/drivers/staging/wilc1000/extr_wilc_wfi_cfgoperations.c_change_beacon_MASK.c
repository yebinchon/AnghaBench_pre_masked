
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct wilc_vif {int dummy; } ;
struct net_device {int dummy; } ;
struct cfg80211_beacon_data {int dummy; } ;


 struct wilc_vif* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wilc_vif*,int ,int ,struct cfg80211_beacon_data*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_0, struct net_device *VAR_1,
    struct cfg80211_beacon_data *VAR_2)
{
 struct wilc_vif *VAR_3 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, 0, 0, VAR_2);
}
