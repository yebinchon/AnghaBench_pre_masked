
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_endpoint {int cb; } ;
struct qcom_smd_channel {int recv_lock; TYPE_1__* qsept; } ;
typedef int rpmsg_rx_cb_t ;
struct TYPE_2__ {struct rpmsg_endpoint ept; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct qcom_smd_channel *VAR_0,
       rpmsg_rx_cb_t VAR_1)
{
 struct rpmsg_endpoint *VAR_2 = &VAR_0->qsept->ept;
 unsigned long VAR_3;

 FUNC_0(&VAR_0->recv_lock, VAR_3);
 VAR_2->cb = VAR_1;
 FUNC_1(&VAR_0->recv_lock, VAR_3);
}
