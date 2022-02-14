
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_pm_lock; int sc_ah; } ;
typedef enum ath9k_power_mode { ____Placeholder_ath9k_power_mode } ath9k_power_mode ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct ath_softc *VAR_0, enum ath9k_power_mode VAR_1)
{
 unsigned long VAR_2;
 bool VAR_3;

 FUNC_1(&VAR_0->sc_pm_lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0->sc_ah, VAR_1);
 FUNC_2(&VAR_0->sc_pm_lock, VAR_2);

 return VAR_3;
}
