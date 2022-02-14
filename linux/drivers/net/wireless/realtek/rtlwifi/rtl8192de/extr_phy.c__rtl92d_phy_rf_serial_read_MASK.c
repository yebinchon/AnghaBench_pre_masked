
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtl_phy {struct bb_reg_def* phyreg_def; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct bb_reg_def {int rf_rb; int rf_rbpi; int rfhssi_para2; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,int ,int) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static u32 FUNC_6(struct ieee80211_hw *VAR_11,
          enum radio_path VAR_12, u32 VAR_13)
{

 struct rtl_priv *VAR_14 = FUNC_3(VAR_11);
 struct rtl_phy *VAR_15 = &(VAR_14->phy);
 struct bb_reg_def *VAR_16 = &VAR_15->phyreg_def[VAR_12];
 u32 VAR_17;
 u32 VAR_18, VAR_19;
 u8 VAR_20 = 0;
 u32 VAR_21;

 VAR_17 = VAR_13;
 VAR_18 = FUNC_2(VAR_11, VAR_9, VAR_5);
 if (VAR_12 == VAR_6)
  VAR_19 = VAR_18;
 else
  VAR_19 = FUNC_2(VAR_11, VAR_16->rfhssi_para2, VAR_5);
 VAR_19 = (VAR_19 & (~VAR_0)) |
  (VAR_17 << 23) | VAR_2;
 FUNC_4(VAR_11, VAR_9, VAR_5,
  VAR_18 & (~VAR_2));
 FUNC_5(10);
 FUNC_4(VAR_11, VAR_16->rfhssi_para2, VAR_5, VAR_19);
 FUNC_5(50);
 FUNC_5(50);
 FUNC_4(VAR_11, VAR_9, VAR_5,
  VAR_18 | VAR_2);
 FUNC_5(10);
 if (VAR_12 == VAR_6)
  VAR_20 = (u8) FUNC_2(VAR_11, VAR_8,
         FUNC_0(8));
 else if (VAR_12 == VAR_7)
  VAR_20 = (u8) FUNC_2(VAR_11, VAR_10,
         FUNC_0(8));
 if (VAR_20)
  VAR_21 = FUNC_2(VAR_11, VAR_16->rf_rbpi,
   VAR_1);
 else
  VAR_21 = FUNC_2(VAR_11, VAR_16->rf_rb,
   VAR_1);
 FUNC_1(VAR_14, VAR_3, VAR_4, "RFR-%d Addr[0x%x] = 0x%x\n",
   VAR_12, VAR_16->rf_rb, VAR_21);
 return VAR_21;
}
