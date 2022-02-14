
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsi_hw {struct rsi_common* priv; } ;
struct rsi_common {scalar_t__ ant_in_use; int mutex; } ;
struct ieee80211_hw {struct rsi_hw* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_1,
        u32 *VAR_2, u32 *VAR_3)
{
 struct rsi_hw *VAR_4 = VAR_1->priv;
 struct rsi_common *VAR_5 = VAR_4->priv;

 FUNC_0(&VAR_5->mutex);

 *VAR_2 = (VAR_5->ant_in_use == VAR_0) ? 1 : 0;
 *VAR_3 = 0;

 FUNC_1(&VAR_5->mutex);

 return 0;
}
