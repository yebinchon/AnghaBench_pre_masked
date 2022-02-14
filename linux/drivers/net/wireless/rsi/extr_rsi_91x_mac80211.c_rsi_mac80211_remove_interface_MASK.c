
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_hw {scalar_t__ sc_nvifs; struct ieee80211_vif** vifs; struct rsi_common* priv; } ;
struct rsi_common {int mutex; } ;
struct ieee80211_vif {int addr; int type; } ;
struct ieee80211_hw {struct rsi_hw* priv; } ;
typedef enum opmode { ____Placeholder_opmode } opmode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rsi_common*,int,int ,int,int ) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_5,
       struct ieee80211_vif *VAR_6)
{
 struct rsi_hw *VAR_7 = VAR_5->priv;
 struct rsi_common *VAR_8 = VAR_7->priv;
 enum opmode VAR_9;
 int VAR_10;

 FUNC_2(VAR_1, "Remove Interface Called\n");

 FUNC_0(&VAR_8->mutex);

 if (VAR_7->sc_nvifs <= 0) {
  FUNC_1(&VAR_8->mutex);
  return;
 }

 VAR_9 = FUNC_3(VAR_6->type);
 if (VAR_9 == VAR_3) {
  FUNC_2(VAR_0, "Opmode error : %d\n", VAR_9);
  FUNC_1(&VAR_8->mutex);
  return;
 }
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  if (!VAR_7->vifs[VAR_10])
   continue;
  if (VAR_6 == VAR_7->vifs[VAR_10]) {
   FUNC_4(VAR_8, VAR_9, VAR_6->addr,
       VAR_10, VAR_4);
   VAR_7->sc_nvifs--;
   VAR_7->vifs[VAR_10] = ((void*)0);
  }
 }
 FUNC_1(&VAR_8->mutex);
}
