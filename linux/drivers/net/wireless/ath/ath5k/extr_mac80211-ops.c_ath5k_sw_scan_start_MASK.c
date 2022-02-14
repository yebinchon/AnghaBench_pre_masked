
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_hw {int assoc; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath5k_hw*,int ) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211_hw *VAR_1,
      struct ieee80211_vif *VAR_2,
      const u8 *VAR_3)
{
 struct ath5k_hw *VAR_4 = VAR_1->priv;
 if (!VAR_4->assoc)
  FUNC_0(VAR_4, VAR_0);
}
