
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int num_total_rfpath; int current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_0 (struct ieee80211_hw*,int*,int,int,int) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int,int) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

void FUNC_4(struct ieee80211_hw *VAR_49,
          u8 VAR_50, u8 VAR_51)
{

 struct rtl_hal *VAR_52 = FUNC_2(FUNC_3(VAR_49));
 struct rtl_priv *VAR_53 = FUNC_3(VAR_49);
 struct rtl_phy *VAR_54 = &VAR_53->phy;
 u8 VAR_55[] = {VAR_4, VAR_6, VAR_10,
         VAR_1};
 u8 VAR_56 = 4;
 u8 VAR_57[] = {VAR_11, VAR_12, VAR_2,
    VAR_3, VAR_5, VAR_7,
    VAR_8, VAR_9};
 u8 VAR_58 = 8;
 u8 VAR_59[] = {VAR_13, VAR_14, VAR_21,
    VAR_22, VAR_23, VAR_24,
    VAR_25, VAR_26};
 u8 VAR_60 = 8;
 u8 VAR_61[] = {VAR_27, VAR_28,
    VAR_15, VAR_16,
    VAR_17, VAR_18,
    VAR_19, VAR_20};
 u8 VAR_62 = 8;
 u8 VAR_63[] = {VAR_29, VAR_30,
    VAR_31, VAR_32,
    VAR_33, VAR_34,
    VAR_35, VAR_36,
        VAR_37, VAR_38};
 u8 VAR_64[] = {VAR_39, VAR_40,
    VAR_41, VAR_42,
    VAR_43, VAR_44,
    VAR_45, VAR_46,
    VAR_47, VAR_48};
 u8 VAR_65 = 10;

 if (VAR_52->current_bandtype == VAR_0)
  FUNC_0(VAR_49, VAR_55, VAR_51, VAR_50,
        VAR_56);

 FUNC_0(VAR_49, VAR_57, VAR_51, VAR_50,
       VAR_58);
 FUNC_0(VAR_49, VAR_59, VAR_51, VAR_50,
       VAR_60);
 FUNC_0(VAR_49, VAR_63, VAR_51, VAR_50,
       VAR_65);

 if (VAR_54->num_total_rfpath >= 2) {
  FUNC_0(VAR_49, VAR_61, VAR_51,
        VAR_50,
        VAR_62);
  FUNC_0(VAR_49, VAR_64, VAR_51,
        VAR_50,
        VAR_65);
 }

 FUNC_1(VAR_49, VAR_54->current_chan_bw,
      VAR_50, VAR_51);
}
