
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_chanctx {int switch_after_beacon; scalar_t__ primary_sta; } ;
struct TYPE_2__ {struct ath_chanctx chan; } ;
struct ath_softc {int nbcnvifs; struct ath_hw* sc_ah; TYPE_1__ offchannel; struct ath_chanctx* cur_chan; } ;
struct ath_hw {scalar_t__ opmode; scalar_t__ slottime; int imask; } ;
struct ath_common {int bssidmask; int curbssid; int macaddr; int op_flags; scalar_t__ curaid; } ;
struct ath9k_vif_iter_data {int naps; int beacons; scalar_t__ nmeshes; scalar_t__ nadhocs; scalar_t__ nstations; scalar_t__ primary_sta; scalar_t__ primary_beacon_vif; scalar_t__ slottime; int nbcnvifs; scalar_t__ nwds; scalar_t__ nocbs; int mask; int hw_macaddr; scalar_t__ has_hw_macaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct ath_softc*,scalar_t__,int) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*,struct ath_chanctx*,struct ath9k_vif_iter_data*) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*,int) ;
 int FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_softc*,int) ;
 int FUNC_11 (struct ath_softc*) ;
 int FUNC_12 (struct ath_softc*) ;
 int FUNC_13 (struct ath_softc*,scalar_t__,int) ;
 void FUNC_14 (struct ath_softc*) ;
 int FUNC_15 (struct ath_softc*,struct ath_chanctx*) ;
 int FUNC_16 (struct ath_common*,int ,char*,int ,int ,int ) ;
 int FUNC_17 (struct ath_common*) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (int ,int *) ;

void FUNC_22(struct ath_softc *VAR_9,
       struct ath_chanctx *VAR_10)
{
 struct ath_hw *VAR_11 = VAR_9->sc_ah;
 struct ath_common *VAR_12 = FUNC_3(VAR_11);
 struct ath9k_vif_iter_data VAR_13;

 FUNC_15(VAR_9, VAR_10);

 if (VAR_10 != VAR_9->cur_chan)
  return;






 FUNC_12(VAR_9);
 FUNC_2(VAR_9, VAR_10, &VAR_13);

 if (VAR_13.has_hw_macaddr)
  FUNC_20(VAR_12->macaddr, VAR_13.hw_macaddr, VAR_3);

 FUNC_20(VAR_12->bssidmask, VAR_13.mask, VAR_3);
 FUNC_17(VAR_12);

 if (VAR_13.naps > 0) {
  FUNC_7(VAR_11, 1);
  VAR_11->opmode = VAR_5;
 } else {
  FUNC_7(VAR_11, 0);
  if (VAR_13.beacons)
   FUNC_1(VAR_9);

  if (VAR_13.nmeshes)
   VAR_11->opmode = VAR_6;
  else if (VAR_13.nocbs)
   VAR_11->opmode = VAR_7;
  else if (VAR_13.nwds)
   VAR_11->opmode = VAR_5;
  else if (VAR_13.nadhocs)
   VAR_11->opmode = VAR_4;
  else
   VAR_11->opmode = VAR_8;
 }

 FUNC_8(VAR_11);

 VAR_10->switch_after_beacon = 0;
 if ((VAR_13.nstations + VAR_13.nadhocs + VAR_13.nmeshes) > 0)
  VAR_11->imask |= VAR_0;
 else {
  VAR_11->imask &= ~VAR_0;
  if (VAR_13.naps == 1 && VAR_13.beacons)
   VAR_10->switch_after_beacon = 1;
 }

 if (VAR_11->opmode == VAR_8) {
  bool VAR_14 = (VAR_13.primary_sta != VAR_10->primary_sta);

  if (VAR_13.primary_sta) {
   VAR_13.primary_beacon_vif = VAR_13.primary_sta;
   VAR_13.beacons = 1;
   FUNC_13(VAR_9, VAR_13.primary_sta,
           VAR_14);
   VAR_10->primary_sta = VAR_13.primary_sta;
  } else {
   VAR_10->primary_sta = ((void*)0);
   FUNC_19(VAR_12->curbssid);
   VAR_12->curaid = 0;
   FUNC_9(VAR_9->sc_ah);
   if (FUNC_5(VAR_9->sc_ah))
    FUNC_10(VAR_9, 1);
  }
 }
 VAR_9->nbcnvifs = VAR_13.nbcnvifs;
 FUNC_0(VAR_9, VAR_13.primary_beacon_vif,
       VAR_13.beacons);
 FUNC_6(VAR_11);

 if (VAR_11->slottime != VAR_13.slottime) {
  VAR_11->slottime = VAR_13.slottime;
  FUNC_4(VAR_11);
 }

 if (VAR_13.primary_sta)
  FUNC_21(VAR_1, &VAR_12->op_flags);
 else
  FUNC_18(VAR_1, &VAR_12->op_flags);

 FUNC_16(VAR_12, VAR_2,
  "macaddr: %pM, bssid: %pM, bssidmask: %pM\n",
  VAR_12->macaddr, VAR_12->curbssid, VAR_12->bssidmask);

 FUNC_11(VAR_9);
}
