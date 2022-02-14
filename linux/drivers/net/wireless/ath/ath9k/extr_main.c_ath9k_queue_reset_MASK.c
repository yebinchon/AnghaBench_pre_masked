
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int hw_reset_work; int hw; int sc_ah; } ;
struct ath_common {int op_flags; } ;
typedef enum ath_reset_type { ____Placeholder_ath_reset_type } ath_reset_type ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,int) ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct ath_softc *VAR_1, enum ath_reset_type VAR_2)
{
 struct ath_common *VAR_3 = FUNC_1(VAR_1->sc_ah);



 FUNC_2(VAR_1->sc_ah);
 FUNC_4(VAR_0, &VAR_3->op_flags);
 FUNC_3(VAR_1->hw, &VAR_1->hw_reset_work);
}
