
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_endpoint {int dummy; } ;
struct qcom_smd_endpoint {int qsch; } ;


 int FUNC_0 (int ,void*,int,int) ;
 struct qcom_smd_endpoint* FUNC_1 (struct rpmsg_endpoint*) ;

__attribute__((used)) static int FUNC_2(struct rpmsg_endpoint *VAR_0, void *VAR_1, int VAR_2)
{
 struct qcom_smd_endpoint *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3->qsch, VAR_1, VAR_2, 0);
}
