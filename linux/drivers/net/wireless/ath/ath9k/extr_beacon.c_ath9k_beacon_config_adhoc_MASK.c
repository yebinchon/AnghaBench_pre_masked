
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int op_flags; } ;
struct ath_beacon_config {scalar_t__ enable_beacon; int ibss_creator; int intval; int nexttbtt; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,int ,int ) ;
 int FUNC_1 (struct ath_hw*,struct ath_beacon_config*) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ath_softc *VAR_1,
          struct ath_beacon_config *VAR_2)
{
 struct ath_hw *VAR_3 = VAR_1->sc_ah;
 struct ath_common *VAR_4 = FUNC_2(VAR_3);

 FUNC_3(VAR_1);

 FUNC_1(VAR_3, VAR_2);

 FUNC_0(VAR_1, VAR_2->nexttbtt, VAR_2->intval);





 if (!VAR_2->ibss_creator && VAR_2->enable_beacon)
  FUNC_4(VAR_0, &VAR_4->op_flags);
}
