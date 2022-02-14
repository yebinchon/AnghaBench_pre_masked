
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_vif {scalar_t__ type; int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ieee80211_bss_conf {int txpower_type; int txpower; scalar_t__ use_short_slot; int aid; int bssid; int assoc; } ;
struct ath_vif {scalar_t__ chanctx; int assoc; int aid; int bssid; } ;
struct TYPE_2__ {int slottime; int updateslot; } ;
struct ath_softc {scalar_t__ cur_chan; int mutex; TYPE_1__ beacon; struct ath_hw* sc_ah; } ;
struct ath_hw {int slottime; } ;
struct ath_common {int curaid; int curbssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct ath_softc*,scalar_t__) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_softc*,struct ieee80211_vif*) ;
 int FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (struct ath_softc*) ;
 int FUNC_7 (struct ath_softc*,struct ieee80211_vif*) ;
 int FUNC_8 (struct ath_softc*) ;
 int FUNC_9 (struct ath_common*,int ,char*,int ,int ,...) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct ieee80211_hw *VAR_14,
       struct ieee80211_vif *VAR_15,
       struct ieee80211_bss_conf *VAR_16,
       u32 VAR_17)
{





 struct ath_softc *VAR_18 = VAR_14->priv;
 struct ath_hw *VAR_19 = VAR_18->sc_ah;
 struct ath_common *VAR_20 = FUNC_1(VAR_19);
 struct ath_vif *VAR_21 = (void *)VAR_15->drv_priv;
 int VAR_22;

 FUNC_6(VAR_18);
 FUNC_11(&VAR_18->mutex);

 if (VAR_17 & VAR_0) {
  FUNC_9(VAR_20, VAR_10, "BSSID %pM Changed ASSOC %d\n",
   VAR_16->bssid, VAR_16->assoc);

  FUNC_10(VAR_21->bssid, VAR_16->bssid, VAR_11);
  VAR_21->aid = VAR_16->aid;
  VAR_21->assoc = VAR_16->assoc;

  FUNC_0(VAR_18, VAR_21->chanctx);
 }

 if ((VAR_17 & VAR_5) ||
       (VAR_17 & VAR_6)) {
  FUNC_10(VAR_20->curbssid, VAR_16->bssid, VAR_11);
  VAR_20->curaid = VAR_16->aid;
  FUNC_3(VAR_18->sc_ah);
 }

 if ((VAR_17 & VAR_1) ||
     (VAR_17 & VAR_3) ||
     (VAR_17 & VAR_2)) {
  FUNC_0(VAR_18, VAR_21->chanctx);
 }

 if ((VAR_21->chanctx == VAR_18->cur_chan) &&
     (VAR_17 & VAR_4)) {
  if (VAR_16->use_short_slot)
   VAR_22 = 9;
  else
   VAR_22 = 20;

  if (VAR_15->type == VAR_12) {





   VAR_18->beacon.slottime = VAR_22;
   VAR_18->beacon.updateslot = VAR_13;
  } else {
   VAR_19->slottime = VAR_22;
   FUNC_2(VAR_19);
  }
 }

 if (VAR_17 & VAR_7)
  FUNC_4(VAR_18, VAR_15);

 if (VAR_17 & (VAR_0 | VAR_5 | VAR_1))
  FUNC_8(VAR_18);

 if (VAR_17 & VAR_8) {
  FUNC_9(VAR_20, VAR_10, "vif %pM power %d dbm power_type %d\n",
   VAR_15->addr, VAR_16->txpower, VAR_16->txpower_type);
  FUNC_7(VAR_18, VAR_15);
 }

 FUNC_12(&VAR_18->mutex);
 FUNC_5(VAR_18);


}
