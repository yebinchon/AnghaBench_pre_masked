
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int hw_pll_work; int hw; int sc_ah; int hw_check_work; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct ath_softc *VAR_2)
{
 FUNC_3(VAR_2->hw, &VAR_2->hw_check_work,
         VAR_0);

 if (FUNC_1(VAR_2->sc_ah) || FUNC_0(VAR_2->sc_ah))
  FUNC_3(VAR_2->hw, &VAR_2->hw_pll_work,
         FUNC_4(VAR_1));

 FUNC_2(VAR_2);
}
