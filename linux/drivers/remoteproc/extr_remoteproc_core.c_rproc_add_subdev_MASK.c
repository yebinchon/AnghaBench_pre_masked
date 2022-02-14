
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc_subdev {int node; } ;
struct rproc {int subdevs; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct rproc *VAR_0, struct rproc_subdev *VAR_1)
{
 FUNC_0(&VAR_1->node, &VAR_0->subdevs);
}
