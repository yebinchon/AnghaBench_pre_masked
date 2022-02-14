
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_vif {TYPE_2__* chanctx; } ;
struct ath_softc {int mutex; TYPE_1__* cur_chan; } ;
struct TYPE_4__ {int cur_txpower; } ;
struct TYPE_3__ {int cur_txpower; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1,
        int *VAR_2)
{
 struct ath_softc *VAR_3 = VAR_0->priv;
 struct ath_vif *VAR_4 = (void *)VAR_1->drv_priv;

 FUNC_0(&VAR_3->mutex);
 if (VAR_4->chanctx)
  *VAR_2 = VAR_4->chanctx->cur_txpower;
 else
  *VAR_2 = VAR_3->cur_chan->cur_txpower;
 FUNC_1(&VAR_3->mutex);

 *VAR_2 /= 2;

 return 0;
}
