
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_hw {struct rsi_common* priv; } ;
struct rsi_common {int mutex; int roc_timer; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct rsi_hw* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct rsi_common*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_1,
       struct ieee80211_vif *VAR_2)
{
 struct rsi_hw *VAR_3 = VAR_1->priv;
 struct rsi_common *VAR_4 = VAR_3->priv;

 FUNC_3(VAR_0, "Cancel remain on channel\n");

 FUNC_1(&VAR_4->mutex);
 if (!FUNC_5(&VAR_4->roc_timer)) {
  FUNC_2(&VAR_4->mutex);
  return 0;
 }

 FUNC_0(&VAR_4->roc_timer);

 FUNC_4(VAR_4);
 FUNC_2(&VAR_4->mutex);

 return 0;
}
