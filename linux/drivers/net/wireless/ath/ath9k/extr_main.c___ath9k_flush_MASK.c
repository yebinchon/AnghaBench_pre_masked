
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int hw_check_work; int sc_pcu_lock; int tx_wait; int chan_lock; TYPE_1__* cur_chan; struct ath_hw* sc_ah; } ;
struct ath_hw {int ah_flags; } ;
struct ath_common {int op_flags; } ;
struct TYPE_2__ {int flush_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_softc*,int) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_common*,int ,char*,...) ;
 int FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (struct ath_softc*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ieee80211_hw*,int *,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int,int) ;

void FUNC_14(struct ieee80211_hw *VAR_6, u32 VAR_7, bool VAR_8,
     bool VAR_9, bool VAR_10)
{
 struct ath_softc *VAR_11 = VAR_6->priv;
 struct ath_hw *VAR_12 = VAR_11->sc_ah;
 struct ath_common *VAR_13 = FUNC_1(VAR_12);
 int VAR_14;
 bool VAR_15;

 FUNC_7(&VAR_11->hw_check_work);

 if (VAR_12->ah_flags & VAR_0) {
  FUNC_4(VAR_13, VAR_1, "Device has been unplugged!\n");
  return;
 }

 if (FUNC_12(VAR_3, &VAR_13->op_flags)) {
  FUNC_4(VAR_13, VAR_1, "Device not present\n");
  return;
 }

 FUNC_10(&VAR_11->chan_lock);
 if (VAR_10)
  VAR_14 = VAR_5 / 5;
 else
  VAR_14 = VAR_11->cur_chan->flush_timeout;
 FUNC_11(&VAR_11->chan_lock);

 FUNC_4(VAR_13, VAR_4,
  "Flush timeout: %d\n", FUNC_9(VAR_14));

 if (FUNC_13(VAR_11->tx_wait, !FUNC_0(VAR_11, VAR_9),
          VAR_14) > 0)
  VAR_8 = 0;

 if (VAR_8) {
  FUNC_3(VAR_11);
  FUNC_10(&VAR_11->sc_pcu_lock);
  VAR_15 = FUNC_5(VAR_11);
  FUNC_11(&VAR_11->sc_pcu_lock);

  if (!VAR_15)
   FUNC_6(VAR_11, ((void*)0));

  FUNC_2(VAR_11);
 }

 FUNC_8(VAR_6, &VAR_11->hw_check_work,
         VAR_2);
}
