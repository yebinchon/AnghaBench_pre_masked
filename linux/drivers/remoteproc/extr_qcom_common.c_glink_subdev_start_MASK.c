
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc_subdev {int dummy; } ;
struct qcom_rproc_glink {int edge; int node; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct qcom_rproc_glink* FUNC_2 (struct rproc_subdev*) ;

__attribute__((used)) static int FUNC_3(struct rproc_subdev *VAR_0)
{
 struct qcom_rproc_glink *VAR_1 = FUNC_2(VAR_0);

 VAR_1->edge = FUNC_1(VAR_1->dev, VAR_1->node);

 return FUNC_0(VAR_1->edge);
}
