
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtl_phy {scalar_t__*** txpwr_by_rate_base_24g; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__,...) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct ieee80211_hw *VAR_4,
        u8 VAR_5, u8 VAR_6, u8 VAR_7,
        u8 VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_1(VAR_4);
 struct rtl_phy *VAR_10 = &VAR_9->phy;
 u8 VAR_11 = 0;
 if (VAR_6 > VAR_3) {
  FUNC_0(VAR_9, VAR_1, VAR_2,
    "Invalid Rf Path %d in PHY_GetTxPowerByRateBase()\n",
     VAR_6);
  return 0;
 }

 if (VAR_5 == VAR_0) {
  switch (VAR_8) {
  case 131:
   VAR_11 = VAR_10->txpwr_by_rate_base_24g[VAR_6][VAR_7][0];
   break;
  case 128:
   VAR_11 = VAR_10->txpwr_by_rate_base_24g[VAR_6][VAR_7][1];
   break;
  case 130:
   VAR_11 = VAR_10->txpwr_by_rate_base_24g[VAR_6][VAR_7][2];
   break;
  case 129:
   VAR_11 = VAR_10->txpwr_by_rate_base_24g[VAR_6][VAR_7][3];
   break;
  default:
   FUNC_0(VAR_9, VAR_1, VAR_2,
     "Invalid RateSection %d in Band 2.4G, Rf Path %d, %dTx in PHY_GetTxPowerByRateBase()\n",
     VAR_8, VAR_6, VAR_7);
   break;
  }
 } else {
  FUNC_0(VAR_9, VAR_1, VAR_2,
    "Invalid Band %d in PHY_GetTxPowerByRateBase()\n",
    VAR_5);
 }

 return VAR_11;
}
