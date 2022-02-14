
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct userfaultfd_ctx {int mm; TYPE_1__ fd_wqh; TYPE_1__ event_wqh; TYPE_1__ fault_wqh; TYPE_1__ fault_pending_wqh; int refcount; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct userfaultfd_ctx*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct userfaultfd_ctx *VAR_1)
{
 if (FUNC_3(&VAR_1->refcount)) {
  FUNC_0(FUNC_4(&VAR_1->fault_pending_wqh.lock));
  FUNC_0(FUNC_5(&VAR_1->fault_pending_wqh));
  FUNC_0(FUNC_4(&VAR_1->fault_wqh.lock));
  FUNC_0(FUNC_5(&VAR_1->fault_wqh));
  FUNC_0(FUNC_4(&VAR_1->event_wqh.lock));
  FUNC_0(FUNC_5(&VAR_1->event_wqh));
  FUNC_0(FUNC_4(&VAR_1->fd_wqh.lock));
  FUNC_0(FUNC_5(&VAR_1->fd_wqh));
  FUNC_2(VAR_1->mm);
  FUNC_1(VAR_0, VAR_1);
 }
}
