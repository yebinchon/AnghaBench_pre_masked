
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct regulatory_request {int dummy; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath9k_htc_priv {int ah; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct wiphy*,struct regulatory_request*,int ) ;
 struct ieee80211_hw* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static void FUNC_3(struct wiphy *VAR_0,
          struct regulatory_request *VAR_1)
{
 struct ieee80211_hw *VAR_2 = FUNC_2(VAR_0);
 struct ath9k_htc_priv *VAR_3 = VAR_2->priv;

 FUNC_1(VAR_0, VAR_1,
          FUNC_0(VAR_3->ah));
}
