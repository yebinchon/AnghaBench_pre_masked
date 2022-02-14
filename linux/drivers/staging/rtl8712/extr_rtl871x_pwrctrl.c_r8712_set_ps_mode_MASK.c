
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct pwrctrl_priv {scalar_t__ pwr_mode; scalar_t__ smart_ps; int bSleep; int SetPSModeWorkItem; } ;
struct _adapter {struct pwrctrl_priv pwrctrlpriv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct _adapter *VAR_2, uint VAR_3, uint VAR_4)
{
 struct pwrctrl_priv *VAR_5 = &VAR_2->pwrctrlpriv;

 if (VAR_3 > VAR_0)
  return;

 if (VAR_3 == VAR_1)
  VAR_4 = 0;
 if ((VAR_5->pwr_mode != VAR_3) || (VAR_5->smart_ps != VAR_4)) {
  if (VAR_5->pwr_mode == VAR_1)
   VAR_5->bSleep = 1;
  else
   VAR_5->bSleep = 0;
  VAR_5->pwr_mode = VAR_3;
  VAR_5->smart_ps = VAR_4;
  FUNC_0(&VAR_5->SetPSModeWorkItem);
 }
}
