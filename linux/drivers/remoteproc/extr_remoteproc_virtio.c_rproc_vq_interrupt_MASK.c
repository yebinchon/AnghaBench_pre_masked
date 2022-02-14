
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc_vring {int vq; } ;
struct rproc {int notifyids; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 struct rproc_vring* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ) ;

irqreturn_t FUNC_3(struct rproc *VAR_1, int VAR_2)
{
 struct rproc_vring *VAR_3;

 FUNC_0(&VAR_1->dev, "vq index %d is interrupted\n", VAR_2);

 VAR_3 = FUNC_1(&VAR_1->notifyids, VAR_2);
 if (!VAR_3 || !VAR_3->vq)
  return VAR_0;

 return FUNC_2(0, VAR_3->vq);
}
