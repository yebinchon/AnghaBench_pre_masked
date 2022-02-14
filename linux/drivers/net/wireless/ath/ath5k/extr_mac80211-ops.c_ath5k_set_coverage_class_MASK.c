
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_hw {int lock; } ;
typedef int s16 ;


 int FUNC_0 (struct ath5k_hw*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211_hw *VAR_0, s16 VAR_1)
{
 struct ath5k_hw *VAR_2 = VAR_0->priv;

 FUNC_1(&VAR_2->lock);
 FUNC_0(VAR_2, VAR_1);
 FUNC_2(&VAR_2->lock);
}
