
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int dummy; } ;
struct qcom_rproc_subdev {int node; int subdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rproc*,int *) ;

void FUNC_2(struct rproc *VAR_0, struct qcom_rproc_subdev *VAR_1)
{
 if (!VAR_1->node)
  return;

 FUNC_1(VAR_0, &VAR_1->subdev);
 FUNC_0(VAR_1->node);
}
