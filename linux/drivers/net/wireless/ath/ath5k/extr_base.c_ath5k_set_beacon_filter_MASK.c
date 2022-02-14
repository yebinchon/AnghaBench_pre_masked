
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_hw {int filter_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath5k_hw*) ;
 int FUNC_1 (struct ath5k_hw*,int ) ;

void
FUNC_2(struct ieee80211_hw *VAR_1, bool VAR_2)
{
 struct ath5k_hw *VAR_3 = VAR_1->priv;
 u32 VAR_4;
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_2)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;
 FUNC_1(VAR_3, VAR_4);
 VAR_3->filter_flags = VAR_4;
}
