
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int terminate_xmitthread_comp; int xmit_comp; } ;
struct adapter {TYPE_1__ xmitpriv; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (int *) ;

void FUNC_5 (struct adapter *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, ("+rtw_stop_drv_threads\n"));

 FUNC_3(VAR_2);


 FUNC_1(&VAR_2->xmitpriv.xmit_comp);
 FUNC_4(&VAR_2->xmitpriv.terminate_xmitthread_comp);
 FUNC_0(VAR_1, VAR_0, ("\n drv_halt: rtw_xmit_thread can be terminated !\n"));

 FUNC_2(VAR_2);
}
