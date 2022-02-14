
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_vif {int addr; scalar_t__ drv_priv; } ;
struct ath_vif {int aid; int bssid; } ;
struct ath_softc {int ps_flags; TYPE_2__* sc_ah; int sc_pm_lock; } ;
struct ath_common {int curbssid; void* last_rssi; int curaid; int op_flags; } ;
struct TYPE_5__ {void* avgbrssi; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ath_common* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct ath_softc*,int) ;
 int FUNC_4 (struct ath_common*,int ,char*,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct ath_softc *VAR_5,
      struct ieee80211_vif *VAR_6, bool VAR_7)
{
 struct ath_common *VAR_8 = FUNC_0(VAR_5->sc_ah);
 struct ath_vif *VAR_9 = (struct ath_vif *)VAR_6->drv_priv;
 unsigned long VAR_10;

 FUNC_6(VAR_0, &VAR_8->op_flags);

 FUNC_5(VAR_8->curbssid, VAR_9->bssid);
 VAR_8->curaid = VAR_9->aid;
 FUNC_2(VAR_5->sc_ah);

 if (VAR_7) {
  VAR_8->last_rssi = VAR_1;
  VAR_5->sc_ah->stats.avgbrssi = VAR_1;

  FUNC_7(&VAR_5->sc_pm_lock, VAR_10);
  VAR_5->ps_flags |= VAR_3 | VAR_4;
  FUNC_8(&VAR_5->sc_pm_lock, VAR_10);
 }

 if (FUNC_1(VAR_5->sc_ah))
  FUNC_3(VAR_5, 0);

 FUNC_4(VAR_8, VAR_2,
  "Primary Station interface: %pM, BSSID: %pM\n",
  VAR_6->addr, VAR_8->curbssid);
}
