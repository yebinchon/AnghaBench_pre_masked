
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rf_pwrstate; scalar_t__ rfoff_reason; } ;
struct adapter {TYPE_1__ pwrctrlpriv; int hw_init_completed; scalar_t__ bDriverStopped; scalar_t__ bSurpriseRemoved; } ;
typedef enum LED_CTL_MODE { ____Placeholder_LED_CTL_MODE } LED_CTL_MODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct adapter*,int) ;
 scalar_t__ VAR_7 ;

void FUNC_1(struct adapter *VAR_8, enum LED_CTL_MODE VAR_9)
{
 if (VAR_8->bSurpriseRemoved || VAR_8->bDriverStopped ||
     !VAR_8->hw_init_completed)
  return;

 if ((VAR_8->pwrctrlpriv.rf_pwrstate != VAR_7 &&
      VAR_8->pwrctrlpriv.rfoff_reason > VAR_6) &&
     (VAR_9 == VAR_5 || VAR_9 == VAR_3 ||
      VAR_9 == VAR_4 ||
      VAR_9 == VAR_0 ||
      VAR_9 == VAR_1 ||
      VAR_9 == VAR_2))
  return;

 FUNC_0(VAR_8, VAR_9);
}
