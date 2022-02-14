
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_vif {int av_bslot; int tsf_adjust; } ;
struct TYPE_4__ {TYPE_1__** bslot; } ;
struct ath_softc {TYPE_2__ beacon; int sc_ah; } ;
struct ath_common {int dummy; } ;
struct ath_beacon_config {int beacon_interval; } ;
typedef int s64 ;
struct TYPE_3__ {scalar_t__ drv_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,int ,char*,long long,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ath_softc *VAR_2,
    struct ath_beacon_config *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_1(VAR_2->sc_ah);
 s64 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct ath_vif *VAR_7;

  if (!VAR_2->beacon.bslot[VAR_6])
   continue;

  VAR_7 = (void *)VAR_2->beacon.bslot[VAR_6]->drv_priv;






  VAR_5 = VAR_3->beacon_interval * VAR_7->av_bslot;
  VAR_5 = -FUNC_0(VAR_5) / VAR_0;
  VAR_7->tsf_adjust = FUNC_3(VAR_5);

  FUNC_2(VAR_4, VAR_1, "tsfadjust is: %lld for bslot: %d\n",
   (signed long long)VAR_5, VAR_7->av_bslot);
 }
}
