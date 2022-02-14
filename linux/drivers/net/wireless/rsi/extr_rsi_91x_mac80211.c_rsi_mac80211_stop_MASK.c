
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_hw {struct rsi_common* priv; } ;
struct rsi_common {int iface_down; int mutex; } ;
struct ieee80211_hw {int wiphy; struct rsi_hw* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct rsi_common*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_1)
{
 struct rsi_hw *VAR_2 = VAR_1->priv;
 struct rsi_common *VAR_3 = VAR_2->priv;

 FUNC_2(VAR_0, "===> Interface DOWN <===\n");
 FUNC_0(&VAR_3->mutex);
 VAR_3->iface_down = 1;
 FUNC_4(VAR_1->wiphy);


 FUNC_3(VAR_3, 0xffff);

 FUNC_1(&VAR_3->mutex);
}
