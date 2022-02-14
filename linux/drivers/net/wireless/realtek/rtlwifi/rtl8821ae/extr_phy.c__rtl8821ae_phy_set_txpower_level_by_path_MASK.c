
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtl_phy {int current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 size_t FUNC_0 (struct ieee80211_hw*,size_t,size_t,int ,size_t) ;
 int FUNC_1 (struct ieee80211_hw*,size_t,size_t,size_t) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0,
           u8 *VAR_1, u8 VAR_2,
           u8 VAR_3, u8 VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_2(VAR_0);
 struct rtl_phy *VAR_6 = &VAR_5->phy;
 u8 VAR_7;
 u8 VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_8 =
    FUNC_0(VAR_0, VAR_2, VAR_1[VAR_7],
            VAR_6->current_chan_bw,
            VAR_3);
  FUNC_1(VAR_0, VAR_8, VAR_2,
       VAR_1[VAR_7]);
 }
}
