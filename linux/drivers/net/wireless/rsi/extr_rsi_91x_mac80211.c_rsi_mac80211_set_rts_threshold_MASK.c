
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsi_hw {struct rsi_common* priv; } ;
struct rsi_common {int mutex; int rts_threshold; } ;
struct ieee80211_hw {struct rsi_hw* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_0,
       u32 VAR_1)
{
 struct rsi_hw *VAR_2 = VAR_0->priv;
 struct rsi_common *VAR_3 = VAR_2->priv;

 FUNC_0(&VAR_3->mutex);
 VAR_3->rts_threshold = VAR_1;
 FUNC_1(&VAR_3->mutex);

 return 0;
}
