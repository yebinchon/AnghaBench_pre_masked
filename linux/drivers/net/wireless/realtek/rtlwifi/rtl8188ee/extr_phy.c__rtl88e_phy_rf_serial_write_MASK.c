
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_phy {struct bb_reg_def* phyreg_def; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct bb_reg_def {int rf3wire_offset; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,int ,int) ;
 int FUNC_2 (char*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_3,
     enum radio_path VAR_4, u32 VAR_5,
     u32 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 struct rtl_priv *VAR_9 = FUNC_3(VAR_3);
 struct rtl_phy *VAR_10 = &VAR_9->phy;
 struct bb_reg_def *VAR_11 = &VAR_10->phyreg_def[VAR_4];

 if (FUNC_0(VAR_3)) {
  FUNC_2("stop\n");
  return;
 }
 VAR_5 &= 0xff;
 VAR_8 = VAR_5;
 VAR_7 = ((VAR_8 << 20) | (VAR_6 & 0x000fffff)) & 0x0fffffff;
 FUNC_4(VAR_3, VAR_11->rf3wire_offset, VAR_2, VAR_7);
 FUNC_1(VAR_9, VAR_0, VAR_1,
   "RFW-%d Addr[0x%x]=0x%x\n",
   VAR_4, VAR_11->rf3wire_offset, VAR_7);
}
