
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_priv {int radio_short_preamble; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 int FUNC_0 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211_hw *VAR_0, bool VAR_1)
{
 struct mwl8k_priv *VAR_2 = VAR_0->priv;

 VAR_2->radio_short_preamble = VAR_1;

 return FUNC_0(VAR_0, 1, 1);
}
