
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct TYPE_2__ {int notifyresult_handle; int notify_handle; } ;
struct uiscmdrsp {TYPE_1__ scsitaskmgmt; } ;
struct idr {int dummy; } ;


 void* FUNC_0 (struct idr*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct idr *VAR_0,
          struct uiscmdrsp *VAR_1, int VAR_2)
{
 wait_queue_head_t *VAR_3 =
  FUNC_0(VAR_0, VAR_1->scsitaskmgmt.notify_handle);
 int *VAR_4 =
  FUNC_0(VAR_0, VAR_1->scsitaskmgmt.notifyresult_handle);
 if (FUNC_3(!(VAR_3 && VAR_4))) {
  FUNC_2("visorhba: no completion context; cmd will time out\n");
  return;
 }




 FUNC_1("visorhba: notifying initiator with result=0x%x\n", VAR_2);
 *VAR_4 = VAR_2;
 FUNC_4(VAR_3);
}
