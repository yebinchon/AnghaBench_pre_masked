
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_txq {int axq_qnum; } ;
struct TYPE_4__ {int beaconq; } ;
struct TYPE_3__ {struct ath_txq** txq_map; } ;
struct ath_softc {TYPE_2__ beacon; TYPE_1__ tx; struct ath_hw* sc_ah; } ;
struct ath_hw {scalar_t__ opmode; int slottime; } ;
struct ath_common {int dummy; } ;
struct ath9k_tx_queue_info {int tqi_aifs; int tqi_cwmin; scalar_t__ tqi_cwmax; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ,struct ath9k_tx_queue_info*) ;
 int FUNC_2 (struct ath_hw*,int ) ;
 int FUNC_3 (struct ath_hw*,int ,struct ath9k_tx_queue_info*) ;
 int FUNC_4 (struct ath_common*,char*) ;

__attribute__((used)) static void FUNC_5(struct ath_softc *VAR_3)
{
 struct ath_hw *VAR_4 = VAR_3->sc_ah;
 struct ath_common *VAR_5 = FUNC_0(VAR_4);
 struct ath9k_tx_queue_info VAR_6, VAR_7;
 struct ath_txq *VAR_8;

 FUNC_1(VAR_4, VAR_3->beacon.beaconq, &VAR_6);

 if (VAR_3->sc_ah->opmode == VAR_1 ||
     VAR_3->sc_ah->opmode == VAR_2) {

  VAR_6.tqi_aifs = 1;
  VAR_6.tqi_cwmin = 0;
  VAR_6.tqi_cwmax = 0;
 } else {

  VAR_8 = VAR_3->tx.txq_map[VAR_0];
  FUNC_1(VAR_4, VAR_8->axq_qnum, &VAR_7);
  VAR_6.tqi_aifs = VAR_7.tqi_aifs;
  if (VAR_4->slottime == 20)
   VAR_6.tqi_cwmin = 2*VAR_7.tqi_cwmin;
  else
   VAR_6.tqi_cwmin = 4*VAR_7.tqi_cwmin;
  VAR_6.tqi_cwmax = VAR_7.tqi_cwmax;
 }

 if (!FUNC_3(VAR_4, VAR_3->beacon.beaconq, &VAR_6)) {
  FUNC_4(VAR_5, "Unable to update h/w beacon queue parameters\n");
 } else {
  FUNC_2(VAR_4, VAR_3->beacon.beaconq);
 }
}
