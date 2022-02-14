
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_softc {TYPE_2__* sc_ah; } ;
struct ath_common {int btcoex_enabled; } ;
struct TYPE_3__ {int hw_caps; } ;
struct TYPE_4__ {int imask; TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (TYPE_2__*) ;

void FUNC_1(struct ath_softc *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_0(VAR_2->sc_ah);

 if (!VAR_3->btcoex_enabled)
  return;

 if (VAR_2->sc_ah->caps.hw_caps & VAR_0)
  VAR_2->sc_ah->imask |= VAR_1;
}
