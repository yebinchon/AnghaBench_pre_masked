
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_txq {int axq_tx_inprogress; scalar_t__ axq_depth; } ;
struct TYPE_2__ {struct ath_txq** txq_map; } ;
struct ath_softc {int sc_ah; TYPE_1__ tx; scalar_t__ tx99_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct ath_softc*,struct ath_txq*) ;
 int FUNC_4 (struct ath_softc*,struct ath_txq*) ;

__attribute__((used)) static bool FUNC_5(struct ath_softc *VAR_3)
{
 struct ath_txq *VAR_4;
 int VAR_5;

 if (VAR_3->tx99_state)
  return 1;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = VAR_3->tx.txq_map[VAR_5];

  FUNC_3(VAR_3, VAR_4);
  if (VAR_4->axq_depth) {
   if (VAR_4->axq_tx_inprogress) {
    FUNC_4(VAR_3, VAR_4);
    goto reset;
   }

   VAR_4->axq_tx_inprogress = 1;
  }
  FUNC_4(VAR_3, VAR_4);
 }

 return 1;

reset:
 FUNC_2(FUNC_0(VAR_3->sc_ah), VAR_1,
  "tx hung, resetting the chip\n");
 FUNC_1(VAR_3, VAR_2);
 return 0;

}
