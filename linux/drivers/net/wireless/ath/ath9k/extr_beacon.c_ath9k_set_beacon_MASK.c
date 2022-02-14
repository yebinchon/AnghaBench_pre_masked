
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath_softc {TYPE_2__* sc_ah; TYPE_1__* cur_chan; } ;
struct ath_common {int dummy; } ;
struct ath_beacon_config {int dummy; } ;
struct TYPE_5__ {int opmode; } ;
struct TYPE_4__ {struct ath_beacon_config beacon; } ;


 int VAR_0 ;




 int FUNC_0 (struct ath_softc*,struct ath_beacon_config*) ;
 int FUNC_1 (struct ath_softc*,struct ath_beacon_config*) ;
 int FUNC_2 (TYPE_2__*,struct ath_beacon_config*) ;
 struct ath_common* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;

void FUNC_5(struct ath_softc *VAR_1)
{
 struct ath_common *VAR_2 = FUNC_3(VAR_1->sc_ah);
 struct ath_beacon_config *VAR_3 = &VAR_1->cur_chan->beacon;

 switch (VAR_1->sc_ah->opmode) {
 case 130:
 case 129:
  FUNC_1(VAR_1, VAR_3);
  break;
 case 131:
  FUNC_0(VAR_1, VAR_3);
  break;
 case 128:
  FUNC_2(VAR_1->sc_ah, VAR_3);
  break;
 default:
  FUNC_4(VAR_2, VAR_0, "Unsupported beaconing mode\n");
  return;
 }
}
