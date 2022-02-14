
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int txpower; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct ath_softc {TYPE_3__* cur_chan; TYPE_4__* hw; struct ath_hw* sc_ah; } ;
struct ath_regulatory {int max_power_level; } ;
struct ath_hw {scalar_t__ tpc_enabled; } ;
struct TYPE_6__ {int power_level; } ;
struct TYPE_8__ {TYPE_2__ conf; } ;
struct TYPE_7__ {int txpower; int cur_txpower; } ;


 int VAR_0 ;
 struct ath_regulatory* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int,int) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_4__*,int ,int ,int*) ;

void FUNC_5(struct ath_softc *VAR_2, struct ieee80211_vif *VAR_3)
{
 int VAR_4;
 struct ath_hw *VAR_5 = VAR_2->sc_ah;
 struct ath_regulatory *VAR_6 = FUNC_0(VAR_5);

 FUNC_3(VAR_2);
 if (VAR_5->tpc_enabled) {
  VAR_4 = (VAR_3) ? VAR_3->bss_conf.txpower : -1;
  FUNC_4(
    VAR_2->hw, VAR_0,
    VAR_1, &VAR_4);
  if (VAR_4 == -1)
   VAR_4 = VAR_2->hw->conf.power_level;
 } else {
  VAR_4 = VAR_2->hw->conf.power_level;
 }
 VAR_2->cur_chan->txpower = 2 * VAR_4;
 FUNC_1(VAR_5, VAR_2->cur_chan->txpower, 0);
 VAR_2->cur_chan->cur_txpower = VAR_6->max_power_level;
 FUNC_2(VAR_2);
}
