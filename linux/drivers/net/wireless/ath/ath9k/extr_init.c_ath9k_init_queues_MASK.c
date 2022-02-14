
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__** txq_map; void* uapsdq; } ;
struct TYPE_6__ {void* cabq; int beaconq; } ;
struct ath_softc {TYPE_2__ tx; TYPE_3__ beacon; int sc_ah; } ;
struct TYPE_4__ {int mac80211_qnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*) ;
 void* FUNC_2 (struct ath_softc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ath_softc *VAR_4)
{
 int VAR_5 = 0;

 VAR_4->beacon.beaconq = FUNC_0(VAR_4->sc_ah);
 VAR_4->beacon.cabq = FUNC_2(VAR_4, VAR_0, 0);
 FUNC_1(VAR_4);

 VAR_4->tx.uapsdq = FUNC_2(VAR_4, VAR_2, 0);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4->tx.txq_map[VAR_5] = FUNC_2(VAR_4, VAR_1, VAR_5);
  VAR_4->tx.txq_map[VAR_5]->mac80211_qnum = VAR_5;
 }
 return 0;
}
