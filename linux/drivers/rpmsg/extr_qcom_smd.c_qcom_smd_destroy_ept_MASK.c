
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_endpoint {int refcount; } ;
struct qcom_smd_endpoint {struct qcom_smd_channel* qsch; } ;
struct qcom_smd_channel {int * qsept; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct qcom_smd_channel*) ;
 struct qcom_smd_endpoint* FUNC_2 (struct rpmsg_endpoint*) ;

__attribute__((used)) static void FUNC_3(struct rpmsg_endpoint *VAR_1)
{
 struct qcom_smd_endpoint *VAR_2 = FUNC_2(VAR_1);
 struct qcom_smd_channel *VAR_3 = VAR_2->qsch;

 FUNC_1(VAR_3);
 VAR_3->qsept = ((void*)0);
 FUNC_0(&VAR_1->refcount, VAR_0);
}
