
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_phy {scalar_t__ rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8192e { ____Placeholder_version_8192e } version_8192e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ) ;

__attribute__((used)) static enum version_8192e FUNC_3(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_1(VAR_8);
 struct rtl_phy *VAR_10 = &VAR_9->phy;
 enum version_8192e VAR_11 = VAR_7;
 u32 VAR_12;

 VAR_10->rf_type = VAR_3;

 VAR_12 = FUNC_2(VAR_9, VAR_2);
 if (VAR_12 & VAR_4)
  VAR_11 = (enum version_8192e)VAR_6;
 else
  VAR_11 = (enum version_8192e)VAR_5;

 FUNC_0(VAR_9, VAR_0, VAR_1,
   "Chip RF Type: %s\n", (VAR_10->rf_type == VAR_3) ?
    "RF_2T2R" : "RF_1T1R");

 return VAR_11;
}
