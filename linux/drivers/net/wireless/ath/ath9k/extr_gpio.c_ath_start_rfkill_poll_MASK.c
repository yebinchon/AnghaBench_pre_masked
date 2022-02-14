
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_softc {TYPE_2__* hw; struct ath_hw* sc_ah; } ;
struct TYPE_3__ {int hw_caps; } ;
struct ath_hw {TYPE_1__ caps; } ;
struct TYPE_4__ {int wiphy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct ath_softc *VAR_1)
{
 struct ath_hw *VAR_2 = VAR_1->sc_ah;

 if (VAR_2->caps.hw_caps & VAR_0)
  FUNC_0(VAR_1->hw->wiphy);
}
