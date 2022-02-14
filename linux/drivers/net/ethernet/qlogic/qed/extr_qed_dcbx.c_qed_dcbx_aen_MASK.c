
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qed_hwfn {TYPE_3__* p_dcbx_info; TYPE_2__* cdev; } ;
struct qed_common_cb_ops {int (* dcbx_aen ) (void*,int *,int ) ;} ;
struct TYPE_6__ {int get; } ;
struct TYPE_4__ {struct qed_common_cb_ops* common; } ;
struct TYPE_5__ {void* ops_cookie; TYPE_1__ protocol_ops; } ;


 int FUNC_0 (void*,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_0, u32 VAR_1)
{
 struct qed_common_cb_ops *VAR_2 = VAR_0->cdev->protocol_ops.common;
 void *VAR_3 = VAR_0->cdev->ops_cookie;

 if (VAR_3 && VAR_2->dcbx_aen)
  VAR_2->dcbx_aen(VAR_3, &VAR_0->p_dcbx_info->get, VAR_1);
}
