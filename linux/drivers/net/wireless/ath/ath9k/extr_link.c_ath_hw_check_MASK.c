
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_ah; } ;
struct ath_common {int dummy; } ;
typedef enum ath_reset_type { ____Placeholder_ath_reset_type } ath_reset_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*,int) ;
 int FUNC_5 (struct ath_common*,int ,char*) ;

bool FUNC_6(struct ath_softc *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_1(VAR_2->sc_ah);
 enum ath_reset_type VAR_4;
 bool VAR_5;

 FUNC_3(VAR_2);

 VAR_5 = FUNC_0(VAR_2->sc_ah);

 if (!VAR_5) {
  FUNC_5(VAR_3, VAR_0,
   "HW hang detected, schedule chip reset\n");
  VAR_4 = VAR_1;
  FUNC_4(VAR_2, VAR_4);
 }

 FUNC_2(VAR_2);

 return VAR_5;
}
