
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int terminate_cmdthread_comp; } ;
struct adapter {TYPE_1__ cmdpriv; void* cmdThread; void* xmitThread; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int ,struct adapter*,char*) ;
 int VAR_4 ;
 int FUNC_3 (struct adapter*) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;

u32 FUNC_5(struct adapter *VAR_6)
{
 u32 VAR_7 = VAR_1;

 FUNC_1(VAR_3, VAR_2, ("+rtw_start_drv_threads\n"));
 VAR_6->xmitThread = FUNC_2(VAR_5, VAR_6, "RTW_XMIT_THREAD");
 if (FUNC_0(VAR_6->xmitThread))
  VAR_7 = VAR_0;

 VAR_6->cmdThread = FUNC_2(VAR_4, VAR_6, "RTW_CMD_THREAD");
 if (FUNC_0(VAR_6->cmdThread))
  VAR_7 = VAR_0;
 else
  FUNC_4(&VAR_6->cmdpriv.terminate_cmdthread_comp);

 FUNC_3(VAR_6);
 return VAR_7;
}
