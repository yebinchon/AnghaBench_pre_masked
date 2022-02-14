
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int terminate_cmdthread_comp; } ;
struct adapter {TYPE_1__ cmdpriv; int cmdThread; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,struct adapter*,char*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct adapter *VAR_3)
{
 int VAR_4 = 0;

 FUNC_2(VAR_1, VAR_0, ("+rtw_start_drv_threads\n"));

 VAR_3->cmdThread = FUNC_3(VAR_2, VAR_3,
       "RTW_CMD_THREAD");
 if (FUNC_0(VAR_3->cmdThread))
  VAR_4 = FUNC_1(VAR_3->cmdThread);
 else

  FUNC_4(&VAR_3->cmdpriv.terminate_cmdthread_comp);

 return VAR_4;
}
