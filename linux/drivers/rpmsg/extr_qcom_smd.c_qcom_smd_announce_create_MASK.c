
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_device {int ept; } ;
struct qcom_smd_endpoint {struct qcom_smd_channel* qsch; } ;
struct qcom_smd_channel {TYPE_1__* edge; int recv_lock; } ;
struct TYPE_2__ {int state_work; } ;


 int FUNC_0 (struct qcom_smd_channel*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct qcom_smd_endpoint* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct rpmsg_device *VAR_0)
{
 struct qcom_smd_endpoint *VAR_1 = FUNC_4(VAR_0->ept);
 struct qcom_smd_channel *VAR_2 = VAR_1->qsch;
 unsigned long VAR_3;
 bool VAR_4;

 FUNC_2(&VAR_2->recv_lock, VAR_3);
 VAR_4 = FUNC_0(VAR_2);
 FUNC_3(&VAR_2->recv_lock, VAR_3);

 if (VAR_4)
  FUNC_1(&VAR_2->edge->state_work);

 return 0;
}
