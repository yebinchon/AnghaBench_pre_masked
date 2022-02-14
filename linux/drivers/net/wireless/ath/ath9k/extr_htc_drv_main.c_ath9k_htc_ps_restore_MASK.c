
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath9k_htc_priv {scalar_t__ ps_usecount; int htc_pm_lock; int ah; scalar_t__ ps_enabled; scalar_t__ ps_idle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ath9k_htc_priv *VAR_2)
{
 bool VAR_3;

 FUNC_3(&VAR_2->htc_pm_lock);
 if (--VAR_2->ps_usecount != 0)
  goto unlock;

 if (VAR_2->ps_idle) {
  FUNC_1(VAR_2->ah, 1);
  FUNC_2(VAR_2->ah, &VAR_3);
  FUNC_0(VAR_2->ah, VAR_0);
 } else if (VAR_2->ps_enabled) {
  FUNC_0(VAR_2->ah, VAR_1);
 }

unlock:
 FUNC_4(&VAR_2->htc_pm_lock);
}
