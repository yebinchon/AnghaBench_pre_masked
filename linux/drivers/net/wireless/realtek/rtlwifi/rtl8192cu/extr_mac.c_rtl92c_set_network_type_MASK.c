
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ,int ) ;

int FUNC_3(struct ieee80211_hw *VAR_8, enum nl80211_iftype VAR_9)
{
 u8 VAR_10;
 struct rtl_priv *VAR_11 = FUNC_1(VAR_8);

 switch (VAR_9) {
 case 128:
  VAR_10 = VAR_7;
  FUNC_0(VAR_11, VAR_0, VAR_1,
    "Set Network type to NO LINK!\n");
  break;
 case 131:
  VAR_10 = VAR_5;
  FUNC_0(VAR_11, VAR_0, VAR_1,
    "Set Network type to Ad Hoc!\n");
  break;
 case 129:
  VAR_10 = VAR_6;
  FUNC_0(VAR_11, VAR_0, VAR_1,
    "Set Network type to STA!\n");
  break;
 case 130:
  VAR_10 = VAR_4;
  FUNC_0(VAR_11, VAR_0, VAR_1,
    "Set Network type to AP!\n");
  break;
 default:
  FUNC_0(VAR_11, VAR_0, VAR_1,
    "Network type %d not supported!\n", VAR_9);
  return -VAR_2;
 }
 FUNC_2(VAR_11, VAR_3, VAR_10);
 return 0;
}
