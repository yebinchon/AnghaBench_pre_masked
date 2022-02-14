
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int cur_ofdm24g_txpwridx; int cur_cck_txpwridx; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

void FUNC_2(struct ieee80211_hw *VAR_3, long *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_3);
 struct rtl_phy *VAR_6 = &VAR_5->phy;
 u8 VAR_7;
 long VAR_8;

 VAR_7 = VAR_6->cur_cck_txpwridx;
 VAR_8 = FUNC_0(VAR_3, VAR_0,
        VAR_7);
 VAR_7 = VAR_6->cur_ofdm24g_txpwridx;
 if (FUNC_0(VAR_3, VAR_1, VAR_7) >
     VAR_8)
  VAR_8 = FUNC_0(VAR_3, VAR_1,
         VAR_7);
 VAR_7 = VAR_6->cur_ofdm24g_txpwridx;
 if (FUNC_0(VAR_3, VAR_2,
       VAR_7) > VAR_8)
  VAR_8 = FUNC_0(VAR_3,
         VAR_2,
         VAR_7);
 *VAR_4 = VAR_8;
}
