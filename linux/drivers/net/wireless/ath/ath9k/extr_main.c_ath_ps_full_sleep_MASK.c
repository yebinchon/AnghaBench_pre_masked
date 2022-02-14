
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ath_softc {int sc_ah; } ;
struct ath_common {int cc_lock; } ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (struct ath_common*) ;
 struct ath_softc* FUNC_5 (int ,struct timer_list*,int ) ;
 struct ath_softc* VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct timer_list *VAR_3)
{
 struct ath_softc *VAR_4 = FUNC_5(VAR_4, VAR_3, VAR_2);
 struct ath_common *VAR_5 = FUNC_0(VAR_4->sc_ah);
 unsigned long VAR_6;
 bool VAR_7;

 FUNC_6(&VAR_5->cc_lock, VAR_6);
 FUNC_4(VAR_5);
 FUNC_7(&VAR_5->cc_lock, VAR_6);

 FUNC_2(VAR_4->sc_ah, 1);
 FUNC_3(VAR_4->sc_ah, &VAR_7);

 FUNC_1(VAR_4->sc_ah, VAR_0);
}
