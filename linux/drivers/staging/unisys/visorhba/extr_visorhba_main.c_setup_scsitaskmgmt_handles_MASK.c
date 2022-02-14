
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct TYPE_2__ {void* notifyresult_handle; void* notify_handle; } ;
struct uiscmdrsp {TYPE_1__ scsitaskmgmt; } ;
struct idr {int dummy; } ;
typedef int spinlock_t ;


 void* FUNC_0 (struct idr*,int*,int *) ;

__attribute__((used)) static void FUNC_1(struct idr *VAR_0, spinlock_t *VAR_1,
           struct uiscmdrsp *VAR_2,
           wait_queue_head_t *VAR_3, int *VAR_4)
{


 VAR_2->scsitaskmgmt.notify_handle =
  FUNC_0(VAR_0, VAR_3, VAR_1);
 VAR_2->scsitaskmgmt.notifyresult_handle =
  FUNC_0(VAR_0, VAR_4, VAR_1);
}
