
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_eth_cb_ops {int dummy; } ;
struct TYPE_2__ {struct qed_eth_cb_ops* eth; } ;
struct qed_dev {void* ops_cookie; TYPE_1__ protocol_ops; } ;


 scalar_t__ FUNC_0 (struct qed_dev*) ;
 int FUNC_1 (struct qed_dev*) ;

__attribute__((used)) static void FUNC_2(struct qed_dev *VAR_0,
     struct qed_eth_cb_ops *VAR_1, void *VAR_2)
{
 VAR_0->protocol_ops.eth = VAR_1;
 VAR_0->ops_cookie = VAR_2;


 if (FUNC_0(VAR_0))
  FUNC_1(VAR_0);
}
