
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwrctrl_priv {scalar_t__ cpwm; scalar_t__ rpwm; int rpwm_workitem; } ;
struct _adapter {scalar_t__ surprise_removed; scalar_t__ driver_stopped; struct pwrctrl_priv pwrctrlpriv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1 (struct _adapter *VAR_0)
{
 struct pwrctrl_priv *VAR_1 = &VAR_0->pwrctrlpriv;

 if (VAR_0->driver_stopped || VAR_0->surprise_removed)
  return;
 if (VAR_1->cpwm != VAR_1->rpwm)
  FUNC_0(&VAR_1->rpwm_workitem);
}
