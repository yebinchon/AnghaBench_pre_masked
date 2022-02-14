
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pwrctrl_priv {int rpwm; scalar_t__ rpwm_retry; int tog; int cpwm; } ;
struct _adapter {scalar_t__ surprise_removed; scalar_t__ driver_stopped; struct pwrctrl_priv pwrctrlpriv; } ;






 int FUNC_0 (struct _adapter*,int,int) ;

void FUNC_1(struct _adapter *VAR_0, u8 VAR_1)
{
 u8 VAR_2;
 struct pwrctrl_priv *VAR_3 = &VAR_0->pwrctrlpriv;

 if (VAR_3->rpwm == VAR_1) {
  if (VAR_3->rpwm_retry == 0)
   return;
 }
 if (VAR_0->driver_stopped || VAR_0->surprise_removed)
  return;
 VAR_2 = VAR_1 | VAR_3->tog;
 switch (VAR_1) {
 case 131:
  VAR_3->cpwm = VAR_1;
  break;
 case 130:


 case 129:
 case 128:
  VAR_3->cpwm = VAR_1;
  break;
 default:
  break;
 }
 VAR_3->rpwm_retry = 0;
 VAR_3->rpwm = VAR_1;
 FUNC_0(VAR_0, 0x1025FE58, VAR_2);
 VAR_3->tog += 0x80;
}
