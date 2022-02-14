
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_phy {scalar_t__ rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8188e { ____Placeholder_version_8188e } version_8188e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ) ;

__attribute__((used)) static enum version_8188e FUNC_3(struct ieee80211_hw *VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_1(VAR_13);
 struct rtl_phy *VAR_15 = &(VAR_14->phy);
 enum version_8188e VAR_16 = VAR_12;
 u32 VAR_17;

 VAR_17 = FUNC_2(VAR_14, VAR_4);
 if (VAR_17 & VAR_8) {
  VAR_16 = (enum version_8188e) VAR_11;
 } else {
  VAR_16 = VAR_3;
  VAR_16 = VAR_16 | ((VAR_17 & VAR_9) ? VAR_7 : 0);
  VAR_16 = VAR_16 | ((VAR_17 & VAR_10) ?
     VAR_0 : 0);
 }

 VAR_15->rf_type = VAR_5;
 FUNC_0(VAR_14, VAR_1, VAR_2,
   "Chip RF Type: %s\n", (VAR_15->rf_type == VAR_6) ?
   "RF_2T2R" : "RF_1T1R");

 return VAR_16;
}
