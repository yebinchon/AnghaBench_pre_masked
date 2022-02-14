
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_ptt {int dummy; } ;
struct qed_link_output {int dummy; } ;
struct qed_hwfn {TYPE_2__* cdev; } ;
struct qed_common_cb_ops {int (* link_update ) (void*,struct qed_link_output*) ;} ;
struct TYPE_3__ {struct qed_common_cb_ops* common; } ;
struct TYPE_4__ {TYPE_1__ protocol_ops; void* ops_cookie; } ;


 scalar_t__ FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,struct qed_link_output*) ;
 int FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (void*,struct qed_link_output*) ;

void FUNC_4(struct qed_hwfn *VAR_0, struct qed_ptt *VAR_1)
{
 void *VAR_2 = VAR_0->cdev->ops_cookie;
 struct qed_common_cb_ops *VAR_3 = VAR_0->cdev->protocol_ops.common;
 struct qed_link_output VAR_4;

 FUNC_1(VAR_0, VAR_1, &VAR_4);
 FUNC_2(VAR_0);

 if (FUNC_0(VAR_0) && VAR_2)
  VAR_3->link_update(VAR_2, &VAR_4);
}
