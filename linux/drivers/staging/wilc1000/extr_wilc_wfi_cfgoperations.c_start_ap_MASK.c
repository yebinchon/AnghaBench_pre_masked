
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct wilc_vif {int dummy; } ;
struct net_device {int dev_addr; } ;
struct cfg80211_ap_settings {int beacon; int dtim_period; int beacon_interval; int chandef; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct wiphy*,int *) ;
 int FUNC_3 (struct wilc_vif*,int ,int ,int *) ;
 int FUNC_4 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_1, struct net_device *VAR_2,
      struct cfg80211_ap_settings *VAR_3)
{
 struct wilc_vif *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, &VAR_3->chandef);
 if (VAR_5 != 0)
  FUNC_0(VAR_2, "Error in setting channel\n");

 FUNC_4(VAR_2, VAR_2->dev_addr, VAR_0);

 return FUNC_3(VAR_4, VAR_3->beacon_interval,
       VAR_3->dtim_period, &VAR_3->beacon);
}
