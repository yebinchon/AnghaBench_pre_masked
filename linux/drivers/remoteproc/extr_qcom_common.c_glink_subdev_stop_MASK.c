
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc_subdev {int dummy; } ;
struct qcom_rproc_glink {int * edge; } ;


 int FUNC_0 (int *) ;
 struct qcom_rproc_glink* FUNC_1 (struct rproc_subdev*) ;

__attribute__((used)) static void FUNC_2(struct rproc_subdev *VAR_0, bool VAR_1)
{
 struct qcom_rproc_glink *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->edge);
 VAR_2->edge = ((void*)0);
}
