
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_power_cfg {int is_power_auto; int is_power_fixed; int power_level; } ;
struct mwifiex_adapter {int dummy; } ;
typedef enum nl80211_tx_power_setting { ____Placeholder_nl80211_tx_power_setting } nl80211_tx_power_setting ;


 int FUNC_0 (int) ;
 int VAR_0 ;



 struct mwifiex_adapter* FUNC_1 (struct wiphy*) ;
 struct mwifiex_private* FUNC_2 (struct mwifiex_adapter*,int ) ;
 int FUNC_3 (struct mwifiex_private*,struct mwifiex_power_cfg*) ;

__attribute__((used)) static int
FUNC_4(struct wiphy *VAR_1,
         struct wireless_dev *VAR_2,
         enum nl80211_tx_power_setting VAR_3,
         int VAR_4)
{
 struct mwifiex_adapter *VAR_5 = FUNC_1(VAR_1);
 struct mwifiex_private *VAR_6;
 struct mwifiex_power_cfg VAR_7;
 int VAR_8 = FUNC_0(VAR_4);

 switch (VAR_3) {
 case 129:
  VAR_7.is_power_auto = 0;
  VAR_7.is_power_fixed = 1;
  VAR_7.power_level = VAR_8;
  break;
 case 128:
  VAR_7.is_power_auto = 0;
  VAR_7.is_power_fixed = 0;
  VAR_7.power_level = VAR_8;
  break;
 case 130:
  VAR_7.is_power_auto = 1;
  break;
 }

 VAR_6 = FUNC_2(VAR_5, VAR_0);

 return FUNC_3(VAR_6, &VAR_7);
}
