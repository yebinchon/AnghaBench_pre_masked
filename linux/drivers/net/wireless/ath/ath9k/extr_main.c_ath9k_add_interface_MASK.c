
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ type; int driver_flags; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_node {int no_ps_filter; struct ieee80211_vif* vif; int * sta; struct ath_softc* sc; } ;
struct ath_vif {TYPE_1__* chanctx; int list; struct ieee80211_vif* vif; struct ath_node mcast_node; } ;
struct ath_softc {int mutex; TYPE_1__* cur_chan; struct ieee80211_vif* tx99_vif; struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;
struct TYPE_2__ {int nvifs; int vifs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_2 (struct ath_softc*,struct ieee80211_vif*) ;
 int FUNC_3 (struct ath_softc*,TYPE_1__*) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct ath_softc*,struct ieee80211_vif*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct ath_common*,int ,char*,scalar_t__) ;
 int FUNC_9 (struct ath_softc*,struct ath_node*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct ieee80211_hw *VAR_5,
          struct ieee80211_vif *VAR_6)
{
 struct ath_softc *VAR_7 = VAR_5->priv;
 struct ath_hw *VAR_8 = VAR_7->sc_ah;
 struct ath_common *VAR_9 = FUNC_4(VAR_8);
 struct ath_vif *VAR_10 = (void *)VAR_6->drv_priv;
 struct ath_node *VAR_11 = &VAR_10->mcast_node;

 FUNC_11(&VAR_7->mutex);
 if (FUNC_0(VAR_1)) {
  if (VAR_7->cur_chan->nvifs >= 1) {
   FUNC_12(&VAR_7->mutex);
   return -VAR_2;
  }
  VAR_7->tx99_vif = VAR_6;
 }

 FUNC_8(VAR_9, VAR_0, "Attach a VIF of type: %d\n", VAR_6->type);
 VAR_7->cur_chan->nvifs++;

 if (VAR_6->type == VAR_4 && FUNC_5())
  VAR_6->driver_flags |= VAR_3;

 if (FUNC_7(VAR_6->type))
  FUNC_2(VAR_7, VAR_6);

 VAR_10->vif = VAR_6;
 if (!FUNC_5()) {
  VAR_10->chanctx = VAR_7->cur_chan;
  FUNC_10(&VAR_10->list, &VAR_10->chanctx->vifs);
 }

 FUNC_3(VAR_7, VAR_10->chanctx);

 FUNC_1(VAR_5, VAR_6);

 FUNC_6(VAR_7, VAR_6);

 VAR_11->sc = VAR_7;
 VAR_11->sta = ((void*)0);
 VAR_11->vif = VAR_6;
 VAR_11->no_ps_filter = 1;
 FUNC_9(VAR_7, VAR_11);

 FUNC_12(&VAR_7->mutex);
 return 0;
}
