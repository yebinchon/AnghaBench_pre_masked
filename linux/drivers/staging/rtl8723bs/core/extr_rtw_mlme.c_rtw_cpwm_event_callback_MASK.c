
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct reportpwrstate_parm {int state; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {scalar_t__ cpwm_tog; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,struct reportpwrstate_parm*) ;

void FUNC_3(struct adapter *VAR_2, u8 *VAR_3)
{
 struct reportpwrstate_parm *VAR_4;

 FUNC_0(VAR_1, VAR_0, ("+rtw_cpwm_event_callback !!!\n"));
 VAR_4 = (struct reportpwrstate_parm *)VAR_3;
 VAR_4->state |= (u8)(FUNC_1(VAR_2)->cpwm_tog + 0x80);
 FUNC_2(VAR_2, VAR_4);
}
