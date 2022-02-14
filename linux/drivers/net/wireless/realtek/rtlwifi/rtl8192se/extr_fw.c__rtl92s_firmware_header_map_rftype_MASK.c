
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;





 int FUNC_0 (char*,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_1(VAR_0);
 struct rtl_phy *VAR_2 = &(VAR_1->phy);

 switch (VAR_2->rf_type) {
 case 130:
  return 0x11;
 case 129:
  return 0x12;
 case 128:
  return 0x22;
 default:
  FUNC_0("Unknown RF type(%x)\n", VAR_2->rf_type);
  break;
 }
 return 0x22;
}
