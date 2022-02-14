
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtl_phy {scalar_t__*** txpwr_by_rate_base_5g; scalar_t__*** txpwr_by_rate_base_24g; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__,...) ;


 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_5,
       u8 VAR_6, u8 VAR_7,
       u8 VAR_8,
       u8 VAR_9, u8 VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_1(VAR_5);
 struct rtl_phy *VAR_12 = &VAR_11->phy;

 if (VAR_7 > VAR_4) {
  FUNC_0(VAR_11, VAR_2, VAR_3,
   "Invalid Rf Path %d in phy_SetTxPowerByRatBase()\n", VAR_7);
  return;
 }

 if (VAR_6 == VAR_0) {
  switch (VAR_8) {
  case 133:
   VAR_12->txpwr_by_rate_base_24g[VAR_7][VAR_9][0] = VAR_10;
   break;
  case 130:
   VAR_12->txpwr_by_rate_base_24g[VAR_7][VAR_9][1] = VAR_10;
   break;
  case 132:
   VAR_12->txpwr_by_rate_base_24g[VAR_7][VAR_9][2] = VAR_10;
   break;
  case 131:
   VAR_12->txpwr_by_rate_base_24g[VAR_7][VAR_9][3] = VAR_10;
   break;
  case 129:
   VAR_12->txpwr_by_rate_base_24g[VAR_7][VAR_9][4] = VAR_10;
   break;
  case 128:
   VAR_12->txpwr_by_rate_base_24g[VAR_7][VAR_9][5] = VAR_10;
   break;
  default:
   FUNC_0(VAR_11, VAR_2, VAR_3,
     "Invalid RateSection %d in Band 2.4G,Rf Path %d, %dTx in PHY_SetTxPowerByRateBase()\n",
     VAR_8, VAR_7, VAR_9);
   break;
  }
 } else if (VAR_6 == VAR_1) {
  switch (VAR_8) {
  case 130:
   VAR_12->txpwr_by_rate_base_5g[VAR_7][VAR_9][0] = VAR_10;
   break;
  case 132:
   VAR_12->txpwr_by_rate_base_5g[VAR_7][VAR_9][1] = VAR_10;
   break;
  case 131:
   VAR_12->txpwr_by_rate_base_5g[VAR_7][VAR_9][2] = VAR_10;
   break;
  case 129:
   VAR_12->txpwr_by_rate_base_5g[VAR_7][VAR_9][3] = VAR_10;
   break;
  case 128:
   VAR_12->txpwr_by_rate_base_5g[VAR_7][VAR_9][4] = VAR_10;
   break;
  default:
   FUNC_0(VAR_11, VAR_2, VAR_3,
    "Invalid RateSection %d in Band 5G, Rf Path %d, %dTx in PHY_SetTxPowerByRateBase()\n",
    VAR_8, VAR_7, VAR_9);
   break;
  }
 } else {
  FUNC_0(VAR_11, VAR_2, VAR_3,
   "Invalid Band %d in PHY_SetTxPowerByRateBase()\n", VAR_6);
 }
}
