
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct reportpwrstate_parm {int state; } ;
struct TYPE_2__ {scalar_t__ cpwm_tog; } ;
struct _adapter {TYPE_1__ pwrctrlpriv; } ;


 int FUNC_0 (struct _adapter*,struct reportpwrstate_parm*) ;

void FUNC_1(struct _adapter *VAR_0, u8 *VAR_1)
{
 struct reportpwrstate_parm *VAR_2 =
    (struct reportpwrstate_parm *)VAR_1;

 VAR_2->state |= (u8)(VAR_0->pwrctrlpriv.cpwm_tog + 0x80);
 FUNC_0(VAR_0, VAR_2);
}
