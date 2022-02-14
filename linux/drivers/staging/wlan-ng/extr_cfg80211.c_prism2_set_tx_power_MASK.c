
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wlandevice {int dummy; } ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct prism2_wiphy_private {struct wlandevice* wlandev; } ;
typedef enum nl80211_tx_power_setting { ____Placeholder_nl80211_tx_power_setting } nl80211_tx_power_setting ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct wlandevice*,int ,int) ;
 struct prism2_wiphy_private* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_3, struct wireless_dev *VAR_4,
          enum nl80211_tx_power_setting VAR_5, int VAR_6)
{
 struct prism2_wiphy_private *VAR_7 = FUNC_2(VAR_3);
 struct wlandevice *VAR_8 = VAR_7->wlandev;
 u32 VAR_9;
 int VAR_10;
 int VAR_11 = 0;

 if (VAR_5 == VAR_2)
  VAR_9 = 30;
 else
  VAR_9 = FUNC_0(VAR_6);

 VAR_10 = FUNC_1(VAR_8,
  VAR_0,
  VAR_9);

 if (VAR_10) {
  VAR_11 = -VAR_1;
  goto exit;
 }

exit:
 return VAR_11;
}
