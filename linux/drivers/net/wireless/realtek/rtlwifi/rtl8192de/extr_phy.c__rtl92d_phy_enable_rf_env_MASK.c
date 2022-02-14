
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct rtl_phy {struct bb_reg_def* phyreg_def; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct bb_reg_def {int rfhssi_para2; int rfintfo; int rfintfe; int rfintfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_5,
 u8 VAR_6, u32 *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_2(VAR_5);
 struct rtl_phy *VAR_9 = &(VAR_8->phy);
 struct bb_reg_def *VAR_10 = &VAR_9->phyreg_def[VAR_6];

 FUNC_0(VAR_8, VAR_3, VAR_4, "====>\n");

 switch (VAR_6) {
 case 131:
 case 129:
  *VAR_7 = FUNC_1(VAR_5, VAR_10->rfintfs, VAR_2);
  break;
 case 130:
 case 128:
  *VAR_7 =
      FUNC_1(VAR_5, VAR_10->rfintfs, VAR_2 << 16);
  break;
 }

 FUNC_3(VAR_5, VAR_10->rfintfe, VAR_2 << 16, 0x1);
 FUNC_4(1);

 FUNC_3(VAR_5, VAR_10->rfintfo, VAR_2, 0x1);
 FUNC_4(1);


 FUNC_3(VAR_5, VAR_10->rfhssi_para2, VAR_0, 0x0);
 FUNC_4(1);

 FUNC_3(VAR_5, VAR_10->rfhssi_para2, VAR_1, 0x0);
 FUNC_4(1);
 FUNC_0(VAR_8, VAR_3, VAR_4, "<====\n");
}
