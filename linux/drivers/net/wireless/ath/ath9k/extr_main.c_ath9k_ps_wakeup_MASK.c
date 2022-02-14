
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ath_softc {int ps_usecount; int sc_pm_lock; TYPE_1__* sc_ah; int sleep_timer; } ;
struct ath_common {int cc_lock; int cc_ani; int cc_survey; } ;
typedef enum ath9k_power_mode { ____Placeholder_ath9k_power_mode } ath9k_power_mode ;
struct TYPE_3__ {int power_mode; } ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct ath_common*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(struct ath_softc *VAR_1)
{
 struct ath_common *VAR_2 = FUNC_0(VAR_1->sc_ah);
 unsigned long VAR_3;
 enum ath9k_power_mode VAR_4;

 FUNC_6(&VAR_1->sc_pm_lock, VAR_3);
 if (++VAR_1->ps_usecount != 1)
  goto unlock;

 FUNC_3(&VAR_1->sleep_timer);
 VAR_4 = VAR_1->sc_ah->power_mode;
 FUNC_1(VAR_1->sc_ah, VAR_0);






 if (VAR_4 != VAR_0) {
  FUNC_5(&VAR_2->cc_lock);
  FUNC_2(VAR_2);
  FUNC_4(&VAR_2->cc_survey, 0, sizeof(VAR_2->cc_survey));
  FUNC_4(&VAR_2->cc_ani, 0, sizeof(VAR_2->cc_ani));
  FUNC_7(&VAR_2->cc_lock);
 }

 unlock:
 FUNC_8(&VAR_1->sc_pm_lock, VAR_3);
}
