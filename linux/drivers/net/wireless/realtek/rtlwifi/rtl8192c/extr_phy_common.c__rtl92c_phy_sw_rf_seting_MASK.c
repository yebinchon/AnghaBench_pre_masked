
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_phy {scalar_t__ current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ieee80211_hw*,int ,int ,int ) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_5, u8 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_3(VAR_5);
 struct rtl_phy *VAR_8 = &(VAR_7->phy);
 struct rtl_hal *VAR_9 = FUNC_2(FUNC_3(VAR_5));

 if (FUNC_0(VAR_9->version)) {
  if (VAR_6 == 6 &&
      VAR_8->current_chan_bw == VAR_0) {
   FUNC_4(VAR_5, VAR_2, VAR_4,
          VAR_1, 0x00255);
  } else {
   u32 VAR_10 =
     (u32)FUNC_1(VAR_5, VAR_2, VAR_4,
          VAR_3);
   FUNC_4(VAR_5, VAR_2, VAR_4, VAR_1,
          VAR_10);
  }
 }
}
