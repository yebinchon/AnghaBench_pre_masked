
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_phy {scalar_t__ rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8723e { ____Placeholder_version_8723e } version_8723e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int VAR_11 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ) ;

__attribute__((used)) static enum version_8723e FUNC_3(struct ieee80211_hw *VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_1(VAR_12);
 struct rtl_phy *VAR_14 = &(VAR_13->phy);
 enum version_8723e VAR_15 = VAR_11;
 u32 VAR_16;

 VAR_16 = FUNC_2(VAR_13, VAR_8);
 if ((VAR_16 & (VAR_0)) != VAR_0)
  FUNC_0(VAR_13, VAR_3, VAR_4, "unknown chip version\n");
 else
  VAR_15 = (enum version_8723e)VAR_0;

 VAR_14->rf_type = VAR_9;


 VAR_15 = (enum version_8723e)(VAR_15 | VAR_6);

 VAR_16 = FUNC_2(VAR_13, VAR_7);

 VAR_15 |= (enum version_8723e)(VAR_16 & VAR_2);

 if (((VAR_16 & VAR_5) >> 18) == 0x01)
  VAR_15 = (enum version_8723e)(VAR_15 | VAR_1);

 FUNC_0(VAR_13, VAR_3, VAR_4,
   "Chip RF Type: %s\n", (VAR_14->rf_type == VAR_10) ?
    "RF_2T2R" : "RF_1T1R");

 return VAR_15;
}
