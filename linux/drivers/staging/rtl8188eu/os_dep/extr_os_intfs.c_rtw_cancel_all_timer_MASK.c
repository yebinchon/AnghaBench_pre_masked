
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int signal_stat_timer; } ;
struct TYPE_4__ {int pwr_state_check_timer; } ;
struct TYPE_6__ {int dynamic_chk_timer; int scan_to_timer; int assoc_timer; } ;
struct adapter {TYPE_2__ recvpriv; TYPE_1__ pwrctrlpriv; TYPE_3__ mlmepriv; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct adapter*) ;

void FUNC_3(struct adapter *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, ("+rtw_cancel_all_timer\n"));

 FUNC_1(&VAR_2->mlmepriv.assoc_timer);
 FUNC_0(VAR_1, VAR_0, ("rtw_cancel_all_timer:cancel association timer complete!\n"));

 FUNC_1(&VAR_2->mlmepriv.scan_to_timer);
 FUNC_0(VAR_1, VAR_0, ("rtw_cancel_all_timer:cancel scan_to_timer!\n"));

 FUNC_1(&VAR_2->mlmepriv.dynamic_chk_timer);
 FUNC_0(VAR_1, VAR_0, ("rtw_cancel_all_timer:cancel dynamic_chk_timer!\n"));


 FUNC_2(VAR_2);
 FUNC_0(VAR_1, VAR_0, ("rtw_cancel_all_timer:cancel DeInitSwLeds!\n"));

 FUNC_1(&VAR_2->pwrctrlpriv.pwr_state_check_timer);

 FUNC_1(&VAR_2->recvpriv.signal_stat_timer);
}
