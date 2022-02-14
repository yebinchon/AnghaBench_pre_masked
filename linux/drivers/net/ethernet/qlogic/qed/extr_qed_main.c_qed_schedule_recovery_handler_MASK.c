
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_hwfn {TYPE_2__* cdev; } ;
struct qed_common_cb_ops {int (* schedule_recovery_handler ) (void*) ;} ;
struct TYPE_3__ {struct qed_common_cb_ops* common; } ;
struct TYPE_4__ {void* ops_cookie; TYPE_1__ protocol_ops; } ;


 int FUNC_0 (void*) ;

void FUNC_1(struct qed_hwfn *VAR_0)
{
 struct qed_common_cb_ops *VAR_1 = VAR_0->cdev->protocol_ops.common;
 void *VAR_2 = VAR_0->cdev->ops_cookie;

 if (VAR_1 && VAR_1->schedule_recovery_handler)
  VAR_1->schedule_recovery_handler(VAR_2);
}
