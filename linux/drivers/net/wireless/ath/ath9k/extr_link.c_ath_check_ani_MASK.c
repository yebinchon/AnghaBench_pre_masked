
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {TYPE_1__* cur_chan; struct ath_hw* sc_ah; } ;
struct ath_hw {scalar_t__ opmode; } ;
struct ath_common {int op_flags; } ;
struct ath_beacon_config {int enable_beacon; } ;
struct TYPE_2__ {struct ath_beacon_config beacon; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct ath_softc *VAR_5)
{
 struct ath_hw *VAR_6 = VAR_5->sc_ah;
 struct ath_common *VAR_7 = FUNC_0(VAR_5->sc_ah);
 struct ath_beacon_config *VAR_8 = &VAR_5->cur_chan->beacon;





 if (VAR_6->opmode == VAR_2) {
  if (!VAR_8->enable_beacon)
   goto stop_ani;
 } else if (VAR_6->opmode == VAR_3) {
  if (!VAR_8->enable_beacon) {




   if (!FUNC_5(VAR_1, &VAR_7->op_flags))
    goto stop_ani;
  }
 } else if (VAR_6->opmode == VAR_4) {
  if (!FUNC_5(VAR_1, &VAR_7->op_flags))
   goto stop_ani;
 }

 if (!FUNC_5(VAR_0, &VAR_7->op_flags)) {
  FUNC_4(VAR_0, &VAR_7->op_flags);
  FUNC_1(VAR_5);
 }

 return;

stop_ani:
 FUNC_3(VAR_0, &VAR_7->op_flags);
 FUNC_2(VAR_5);
}
