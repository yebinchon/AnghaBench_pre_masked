
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum rate_section { ____Placeholder_rate_section } rate_section ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


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
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int ,int ,int *,int) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_35,
        enum radio_path VAR_36,
        u8 VAR_37,
        enum rate_section VAR_38)
{
 struct rtl_priv *VAR_39 = FUNC_3(VAR_35);
 struct rtl_hal *VAR_40 = FUNC_2(VAR_39);
 struct rtl_phy *VAR_41 = &VAR_39->phy;

 if (VAR_38 == VAR_1) {
  u8 VAR_42[] = {VAR_5, VAR_7,
      VAR_11, VAR_2};
  if (VAR_40->current_bandtype == VAR_0)
   FUNC_1(VAR_35, VAR_36,
       VAR_41->current_chan_bw,
       VAR_37, VAR_42, 4);
 } else if (VAR_38 == VAR_33) {
  u8 VAR_43[] = {VAR_12, VAR_13,
       VAR_3, VAR_4,
       VAR_6, VAR_8,
       VAR_9, VAR_10};
  FUNC_1(VAR_35, VAR_36,
          VAR_41->current_chan_bw,
          VAR_37, VAR_43, 8);
 } else if (VAR_38 == VAR_31) {
  u8 VAR_44[] = {VAR_14, VAR_15,
        VAR_22, VAR_23,
        VAR_24, VAR_25,
        VAR_26, VAR_27};
  FUNC_1(VAR_35, VAR_36,
          VAR_41->current_chan_bw,
          VAR_37, VAR_44, 8);
 } else if (VAR_38 == VAR_32) {
  u8 VAR_45[] = {VAR_28, VAR_29,
        VAR_16, VAR_17,
        VAR_18, VAR_19,
        VAR_20, VAR_21};
  FUNC_1(VAR_35, VAR_36,
          VAR_41->current_chan_bw,
          VAR_37, VAR_45, 8);
 } else
  FUNC_0(VAR_39, VAR_30, VAR_34,
    "Invalid RateSection %d\n", VAR_38);
}
