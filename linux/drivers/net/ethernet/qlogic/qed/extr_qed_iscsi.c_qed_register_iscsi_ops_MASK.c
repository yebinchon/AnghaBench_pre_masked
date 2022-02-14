
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_iscsi_cb_ops {int dummy; } ;
struct TYPE_2__ {struct qed_iscsi_cb_ops* iscsi; } ;
struct qed_dev {void* ops_cookie; TYPE_1__ protocol_ops; } ;



__attribute__((used)) static void FUNC_0(struct qed_dev *VAR_0,
       struct qed_iscsi_cb_ops *VAR_1, void *VAR_2)
{
 VAR_0->protocol_ops.iscsi = VAR_1;
 VAR_0->ops_cookie = VAR_2;
}
