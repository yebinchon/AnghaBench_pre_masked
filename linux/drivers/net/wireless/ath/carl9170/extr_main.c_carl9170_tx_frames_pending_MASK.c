
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {struct ar9170* priv; } ;
struct ar9170 {int tx_total_queued; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct ieee80211_hw *VAR_0)
{
 struct ar9170 *VAR_1 = VAR_0->priv;

 return !!FUNC_0(&VAR_1->tx_total_queued);
}
