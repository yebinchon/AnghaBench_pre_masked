
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int terminate_xmitthread_comp; } ;
struct adapter {TYPE_1__ xmitpriv; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

int FUNC_5(void *VAR_1)
{
 s32 VAR_2;
 struct adapter *VAR_3;


 VAR_2 = VAR_0;
 VAR_3 = VAR_1;

 FUNC_3("RTW_XMIT_THREAD");

 do {
  VAR_2 = FUNC_2(VAR_3);
  FUNC_1();
 } while (VAR_0 == VAR_2);

 FUNC_0(&VAR_3->xmitpriv.terminate_xmitthread_comp);

 FUNC_4();
}
