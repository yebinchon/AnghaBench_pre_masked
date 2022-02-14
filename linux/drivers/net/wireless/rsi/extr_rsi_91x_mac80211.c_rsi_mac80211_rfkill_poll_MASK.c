
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_hw {struct rsi_common* priv; } ;
struct rsi_common {scalar_t__ fsm_state; int mutex; } ;
struct ieee80211_hw {int wiphy; struct rsi_hw* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_1)
{
 struct rsi_hw *VAR_2 = VAR_1->priv;
 struct rsi_common *VAR_3 = VAR_2->priv;

 FUNC_0(&VAR_3->mutex);
 if (VAR_3->fsm_state != VAR_0)
  FUNC_2(VAR_1->wiphy, 1);
 else
  FUNC_2(VAR_1->wiphy, 0);
 FUNC_1(&VAR_3->mutex);
}
