
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct userfaultfd_wake_range {int dummy; } ;
struct TYPE_4__ {int lock; } ;
struct userfaultfd_ctx {TYPE_1__ fault_pending_wqh; TYPE_1__ fault_wqh; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int,struct userfaultfd_wake_range*) ;
 int FUNC_1 (TYPE_1__*,int ,struct userfaultfd_wake_range*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct userfaultfd_ctx *VAR_1,
        struct userfaultfd_wake_range *VAR_2)
{
 FUNC_2(&VAR_1->fault_pending_wqh.lock);

 if (FUNC_4(&VAR_1->fault_pending_wqh))
  FUNC_1(&VAR_1->fault_pending_wqh, VAR_0,
         VAR_2);
 if (FUNC_4(&VAR_1->fault_wqh))
  FUNC_0(&VAR_1->fault_wqh, VAR_0, 1, VAR_2);
 FUNC_3(&VAR_1->fault_pending_wqh.lock);
}
