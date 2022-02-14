
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int netdev; } ;
struct wiphy {int dummy; } ;
struct wilc_vif {int ndev; } ;
typedef int s32 ;
typedef enum nl80211_tx_power_setting { ____Placeholder_nl80211_tx_power_setting } nl80211_tx_power_setting ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 struct wilc_vif* FUNC_2 (int ) ;
 int FUNC_3 (struct wilc_vif*,int) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_0, struct wireless_dev *VAR_1,
   enum nl80211_tx_power_setting VAR_2, int VAR_3)
{
 int VAR_4;
 s32 VAR_5 = FUNC_0(VAR_3);
 struct wilc_vif *VAR_6 = FUNC_2(VAR_1->netdev);

 if (VAR_5 < 0)
  VAR_5 = 0;
 else if (VAR_5 > 18)
  VAR_5 = 18;
 VAR_4 = FUNC_3(VAR_6, VAR_5);
 if (VAR_4)
  FUNC_1(VAR_6->ndev, "Failed to set tx power\n");

 return VAR_4;
}
