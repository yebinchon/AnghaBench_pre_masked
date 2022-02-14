
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {TYPE_1__* parent; } ;
struct rproc {struct device dev; } ;
struct TYPE_4__ {int stop; int start; } ;
struct qcom_rproc_glink {TYPE_2__ subdev; struct device* dev; int node; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rproc*,TYPE_2__*) ;

void FUNC_2(struct rproc *VAR_2, struct qcom_rproc_glink *VAR_3)
{
 struct device *VAR_4 = &VAR_2->dev;

 VAR_3->node = FUNC_0(VAR_4->parent->of_node, "glink-edge");
 if (!VAR_3->node)
  return;

 VAR_3->dev = VAR_4;
 VAR_3->subdev.start = VAR_0;
 VAR_3->subdev.stop = VAR_1;

 FUNC_1(VAR_2, &VAR_3->subdev);
}
