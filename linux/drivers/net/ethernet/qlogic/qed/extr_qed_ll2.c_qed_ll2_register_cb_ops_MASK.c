
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_ll2_cb_ops {int dummy; } ;
struct qed_dev {TYPE_1__* ll2; } ;
struct TYPE_2__ {void* cb_cookie; struct qed_ll2_cb_ops const* cbs; } ;



__attribute__((used)) static void FUNC_0(struct qed_dev *VAR_0,
        const struct qed_ll2_cb_ops *VAR_1,
        void *VAR_2)
{
 VAR_0->ll2->cbs = VAR_1;
 VAR_0->ll2->cb_cookie = VAR_2;
}
