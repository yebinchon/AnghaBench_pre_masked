
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct cfg80211_beacon_data {int dummy; } ;
struct ath6kl_vif {scalar_t__ next_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath6kl_vif*) ;
 int FUNC_1 (struct ath6kl_vif*,struct cfg80211_beacon_data*) ;
 struct ath6kl_vif* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_3, struct net_device *VAR_4,
    struct cfg80211_beacon_data *VAR_5)
{
 struct ath6kl_vif *VAR_6 = FUNC_2(VAR_4);

 if (!FUNC_0(VAR_6))
  return -VAR_1;

 if (VAR_6->next_mode != VAR_0)
  return -VAR_2;

 return FUNC_1(VAR_6, VAR_5);
}
