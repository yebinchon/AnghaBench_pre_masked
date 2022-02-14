
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bmisscnt; } ;
struct ath_softc {TYPE_2__* sc_ah; TYPE_1__ beacon; } ;
struct TYPE_6__ {int imask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct ath_softc *VAR_2)
{
 FUNC_0(VAR_2->sc_ah);
 VAR_2->sc_ah->imask &= ~(VAR_1 | VAR_0);
 VAR_2->beacon.bmisscnt = 0;
 FUNC_2(VAR_2->sc_ah);
 FUNC_1(VAR_2->sc_ah);
}
