
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {int type; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_vif {int chanctx; int mcast_node; int list; } ;
struct ath_softc {int mutex; int * tx99_vif; TYPE_1__* cur_chan; int sc_ah; } ;
struct ath_common {int dummy; } ;
struct TYPE_2__ {int nvifs; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,struct ieee80211_vif*) ;
 int FUNC_1 (struct ath_softc*,int ) ;
 struct ath_common* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ath_softc*,struct ieee80211_vif*) ;
 int FUNC_5 (struct ath_softc*,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct ath_common*,int ,char*) ;
 int FUNC_8 (struct ath_softc*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_hw *VAR_1,
       struct ieee80211_vif *VAR_2)
{
 struct ath_softc *VAR_3 = VAR_1->priv;
 struct ath_common *VAR_4 = FUNC_2(VAR_3->sc_ah);
 struct ath_vif *VAR_5 = (void *)VAR_2->drv_priv;

 FUNC_7(VAR_4, VAR_0, "Detach Interface\n");

 FUNC_10(&VAR_3->mutex);

 FUNC_4(VAR_3, VAR_2);

 VAR_3->cur_chan->nvifs--;
 VAR_3->tx99_vif = ((void*)0);
 if (!FUNC_3())
  FUNC_9(&VAR_5->list);

 if (FUNC_6(VAR_2->type))
  FUNC_0(VAR_3, VAR_2);

 FUNC_8(VAR_3, &VAR_5->mcast_node);

 FUNC_1(VAR_3, VAR_5->chanctx);

 FUNC_5(VAR_3, ((void*)0));

 FUNC_11(&VAR_3->mutex);
}
