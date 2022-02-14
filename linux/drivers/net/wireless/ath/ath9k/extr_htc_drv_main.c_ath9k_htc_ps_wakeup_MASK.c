
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath9k_htc_priv {int ps_usecount; int htc_pm_lock; int ah; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ath9k_htc_priv *VAR_1)
{
 FUNC_1(&VAR_1->htc_pm_lock);
 if (++VAR_1->ps_usecount != 1)
  goto unlock;
 FUNC_0(VAR_1->ah, VAR_0);

unlock:
 FUNC_2(&VAR_1->htc_pm_lock);
}
