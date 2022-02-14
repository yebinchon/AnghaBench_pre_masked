
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ defant; int rxotherant; } ;
struct ath_softc {TYPE_1__ rx; struct ath_hw* sc_ah; } ;
struct ath_rx_status {scalar_t__ rs_antenna; } ;
struct ath9k_hw_capabilities {int hw_caps; } ;
struct ath_hw {struct ath9k_hw_capabilities caps; } ;
struct ath_common {scalar_t__ bt_ant_diversity; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_softc*,struct ath_rx_status*) ;
 int FUNC_2 (struct ath_softc*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ath_softc *VAR_2,
    struct ath_rx_status *VAR_3)
{
 struct ath_hw *VAR_4 = VAR_2->sc_ah;
 struct ath9k_hw_capabilities *VAR_5 = &VAR_4->caps;
 struct ath_common *VAR_6 = FUNC_0(VAR_4);

 if (!(VAR_4->caps.hw_caps & VAR_0))
  return;





 if (VAR_2->rx.defant != VAR_3->rs_antenna) {
  if (++VAR_2->rx.rxotherant >= 3)
   FUNC_2(VAR_2, VAR_3->rs_antenna);
 } else {
  VAR_2->rx.rxotherant = 0;
 }

 if (VAR_5->hw_caps & VAR_1) {
  if (VAR_6->bt_ant_diversity)
   FUNC_1(VAR_2, VAR_3);
 } else {
  FUNC_1(VAR_2, VAR_3);
 }
}
