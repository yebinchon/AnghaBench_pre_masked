
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {scalar_t__ ps_usecount; int ps_flags; int sc_pm_lock; int sc_ah; scalar_t__ ps_enabled; int sleep_timer; scalar_t__ ps_idle; } ;
struct ath_common {int cc_lock; } ;
typedef enum ath9k_power_mode { ____Placeholder_ath9k_power_mode } ath9k_power_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath_softc*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ath_common* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct ath_common*) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;

void FUNC_10(struct ath_softc *VAR_8)
{
 struct ath_common *VAR_9 = FUNC_2(VAR_8->sc_ah);
 enum ath9k_power_mode VAR_10;
 unsigned long VAR_11;

 FUNC_7(&VAR_8->sc_pm_lock, VAR_11);
 if (--VAR_8->ps_usecount != 0)
  goto unlock;

 if (VAR_8->ps_idle) {
  FUNC_5(&VAR_8->sleep_timer, VAR_7 + VAR_1 / 10);
  goto unlock;
 }

 if (VAR_8->ps_enabled &&
     !(VAR_8->ps_flags & (VAR_3 |
         VAR_4 |
         VAR_5 |
         VAR_6 |
         VAR_2))) {
  VAR_10 = VAR_0;
  if (FUNC_1(VAR_8->sc_ah))
   FUNC_0(VAR_8);
 } else {
  goto unlock;
 }

 FUNC_6(&VAR_9->cc_lock);
 FUNC_4(VAR_9);
 FUNC_8(&VAR_9->cc_lock);

 FUNC_3(VAR_8->sc_ah, VAR_10);

 unlock:
 FUNC_9(&VAR_8->sc_pm_lock, VAR_11);
}
