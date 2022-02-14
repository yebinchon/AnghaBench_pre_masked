
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int enable_beacon; } ;
struct ieee80211_vif {TYPE_2__ bss_conf; } ;
struct TYPE_6__ {int bmisscnt; scalar_t__ updateslot; int slotupdate; int beaconq; int slottime; struct ieee80211_vif** bslot; } ;
struct ath_softc {int nbcnvifs; TYPE_3__ beacon; int hw; struct ath_hw* sc_ah; } ;
struct TYPE_4__ {int hw_caps; } ;
struct ath_hw {int slottime; TYPE_1__ caps; } ;
struct ath_common {int op_flags; } ;
struct ath_buf {int bf_daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct ath_softc*) ;
 struct ath_buf* FUNC_1 (int ,struct ieee80211_vif*) ;
 scalar_t__ FUNC_2 (struct ath_softc*,struct ieee80211_vif*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 struct ath_common* FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*) ;
 scalar_t__ FUNC_7 (struct ath_hw*,int ) ;
 int FUNC_8 (struct ath_hw*,int ,int ) ;
 int FUNC_9 (struct ath_hw*,int ) ;
 int FUNC_10 (struct ath_hw*,int ) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (struct ath_softc*,int ) ;
 int FUNC_13 (struct ath_softc*) ;
 int FUNC_14 (struct ath_softc*,int ) ;
 int FUNC_15 (struct ath_softc*,struct ieee80211_vif*,int ) ;
 int FUNC_16 (struct ath_common*,int ,char*,...) ;
 int FUNC_17 (struct ath_softc*) ;
 scalar_t__ FUNC_18 (int ,int *) ;

void FUNC_19(unsigned long VAR_12)
{
 struct ath_softc *VAR_13 = (struct ath_softc *)VAR_12;
 struct ath_hw *VAR_14 = VAR_13->sc_ah;
 struct ath_common *VAR_15 = FUNC_5(VAR_14);
 struct ath_buf *VAR_16 = ((void*)0);
 struct ieee80211_vif *VAR_17;
 bool VAR_18 = !!(VAR_14->caps.hw_caps & VAR_0);
 int VAR_19;

 if (FUNC_18(VAR_3, &VAR_15->op_flags)) {
  FUNC_16(VAR_15, VAR_9,
   "reset work is pending, skip beaconing now\n");
  return;
 }
 if (FUNC_7(VAR_14, VAR_13->beacon.beaconq) != 0) {
  VAR_13->beacon.bmisscnt++;

  FUNC_4(VAR_14);







  if (!FUNC_17(VAR_13))
   return;

  if (VAR_13->beacon.bmisscnt < VAR_6 * VAR_13->nbcnvifs) {
   FUNC_16(VAR_15, VAR_5,
    "missed %u consecutive beacons\n",
    VAR_13->beacon.bmisscnt);
   FUNC_9(VAR_14, VAR_13->beacon.beaconq);
   if (VAR_13->beacon.bmisscnt > 3)
    FUNC_3(VAR_14);
  } else if (VAR_13->beacon.bmisscnt >= VAR_6) {
   FUNC_16(VAR_15, VAR_5, "beacon is officially stuck\n");
   VAR_13->beacon.bmisscnt = 0;
   FUNC_12(VAR_13, VAR_10);
  }

  return;
 }

 VAR_19 = FUNC_0(VAR_13);
 VAR_17 = VAR_13->beacon.bslot[VAR_19];


 if (!VAR_18) {
  if (FUNC_11()) {
   FUNC_14(VAR_13,
       VAR_2);
  }

  if (FUNC_2(VAR_13, VAR_17))
   return;
 }

 if (!VAR_17 || !VAR_17->bss_conf.enable_beacon)
  return;

 if (FUNC_11()) {
  FUNC_15(VAR_13, VAR_17, VAR_1);
 }

 VAR_16 = FUNC_1(VAR_13->hw, VAR_17);

 if (VAR_13->beacon.bmisscnt != 0) {
  FUNC_16(VAR_15, VAR_5, "resume beacon xmit after %u misses\n",
   VAR_13->beacon.bmisscnt);
  VAR_13->beacon.bmisscnt = 0;
 }
 if (VAR_13->beacon.updateslot == VAR_11) {
  VAR_13->beacon.updateslot = VAR_7;
  VAR_13->beacon.slotupdate = VAR_19;
 } else if (VAR_13->beacon.updateslot == VAR_7 &&
     VAR_13->beacon.slotupdate == VAR_19) {
  VAR_14->slottime = VAR_13->beacon.slottime;
  FUNC_6(VAR_14);
  VAR_13->beacon.updateslot = VAR_8;
 }

 if (VAR_16) {
  FUNC_13(VAR_13);

  FUNC_16(VAR_15, VAR_4,
   "Transmitting beacon for slot: %d\n", VAR_19);


  FUNC_8(VAR_14, VAR_13->beacon.beaconq, VAR_16->bf_daddr);

  if (!VAR_18)
   FUNC_10(VAR_14, VAR_13->beacon.beaconq);
 }
}
