
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_ah; } ;
struct ath_common {int op_flags; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*,struct ath9k_channel*) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(struct ath_softc *VAR_1, struct ath9k_channel *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_0(VAR_1->sc_ah);
 int VAR_4;

 FUNC_1(VAR_1->sc_ah);
 FUNC_5(VAR_0, &VAR_3->op_flags);

 FUNC_3(VAR_1);
 VAR_4 = FUNC_4(VAR_1, VAR_2);
 FUNC_2(VAR_1);

 return VAR_4;
}
