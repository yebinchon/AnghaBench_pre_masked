
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_endpoint {int dummy; } ;
struct qcom_glink {int dummy; } ;
struct TYPE_2__ {int * cb; } ;
struct glink_channel {int * rpdev; int recv_lock; TYPE_1__ ept; struct qcom_glink* glink; } ;


 int FUNC_0 (struct qcom_glink*,struct glink_channel*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct glink_channel* FUNC_3 (struct rpmsg_endpoint*) ;

__attribute__((used)) static void FUNC_4(struct rpmsg_endpoint *VAR_0)
{
 struct glink_channel *VAR_1 = FUNC_3(VAR_0);
 struct qcom_glink *VAR_2 = VAR_1->glink;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->recv_lock, VAR_3);
 VAR_1->ept.cb = ((void*)0);
 FUNC_2(&VAR_1->recv_lock, VAR_3);


 VAR_1->rpdev = ((void*)0);

 FUNC_0(VAR_2, VAR_1);
}
