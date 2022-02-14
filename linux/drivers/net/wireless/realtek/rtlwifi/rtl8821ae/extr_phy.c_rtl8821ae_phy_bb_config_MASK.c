
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {void* reg_837; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct rtl_efuse {int crystalcap; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_efuse* FUNC_2 (struct rtl_priv*) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 void* FUNC_5 (struct rtl_priv*,int) ;
 int FUNC_6 (struct ieee80211_hw*,int ,int,int) ;
 int FUNC_7 (struct rtl_priv*,int,int) ;

bool FUNC_8(struct ieee80211_hw *VAR_8)
{
 bool VAR_9 = 1;
 struct rtl_priv *VAR_10 = FUNC_4(VAR_8);
 struct rtl_efuse *VAR_11 = FUNC_2(FUNC_4(VAR_8));
 struct rtl_phy *VAR_12 = &VAR_10->phy;
 struct rtl_hal *VAR_13 = FUNC_3(FUNC_4(VAR_8));
 u8 VAR_14;
 u8 VAR_15;

 FUNC_1(VAR_8);

 VAR_14 = FUNC_5(VAR_10, VAR_7);
 VAR_14 |= VAR_2;
 FUNC_7(VAR_10, VAR_7, VAR_14);
 FUNC_7(VAR_10, VAR_7,
         VAR_14 | VAR_1 | VAR_0);

 FUNC_7(VAR_10, VAR_6, 0x7);
 FUNC_7(VAR_10, VAR_5 + 2, 0x7);

 VAR_9 = FUNC_0(VAR_8);

 if (VAR_13->hw_type == VAR_3) {
  VAR_15 = VAR_11->crystalcap & 0x3F;
  FUNC_6(VAR_8, VAR_4, 0x7FF80000,
         (VAR_15 | (VAR_15 << 6)));
 } else {
  VAR_15 = VAR_11->crystalcap & 0x3F;
  FUNC_6(VAR_8, VAR_4, 0xFFF000,
         (VAR_15 | (VAR_15 << 6)));
 }
 VAR_12->reg_837 = FUNC_5(VAR_10, 0x837);

 return VAR_9;
}
