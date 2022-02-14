
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union event_ring_data {int dummy; } event_ring_data ;
typedef int u8 ;
struct qed_hwfn {TYPE_2__* cdev; } ;
struct qed_common_cb_ops {int (* arfs_filter_op ) (void*,void*,int ) ;} ;
struct TYPE_3__ {struct qed_common_cb_ops* common; } ;
struct TYPE_4__ {void* ops_cookie; TYPE_1__ protocol_ops; } ;


 int FUNC_0 (void*,void*,int ) ;

__attribute__((used)) static void
FUNC_1(struct qed_hwfn *VAR_0,
        void *VAR_1,
        union event_ring_data *VAR_2, u8 VAR_3)
{
 struct qed_common_cb_ops *VAR_4 = VAR_0->cdev->protocol_ops.common;
 void *VAR_5 = VAR_0->cdev->ops_cookie;

 VAR_4->arfs_filter_op(VAR_5, VAR_1, VAR_3);
}
