
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct rtl_phy {struct bb_reg_def* phyreg_def; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct bb_reg_def {int rfintfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_3, u8 VAR_4,
           u32 *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_3);
 struct rtl_phy *VAR_7 = &(VAR_6->phy);
 struct bb_reg_def *VAR_8 = &VAR_7->phyreg_def[VAR_4];

 FUNC_0(VAR_6, VAR_1, VAR_2, "=====>\n");

 switch (VAR_4) {
 case 131:
 case 129:
  FUNC_2(VAR_3, VAR_8->rfintfs, VAR_0, *VAR_5);
  break;
 case 130:
 case 128:
  FUNC_2(VAR_3, VAR_8->rfintfs, VAR_0 << 16,
         *VAR_5);
  break;
 }
 FUNC_0(VAR_6, VAR_1, VAR_2, "<=====\n");
}
