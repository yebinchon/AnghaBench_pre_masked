
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int bootaddr; struct keystone_rproc* priv; } ;
struct keystone_rproc {int workqueue; int irq_ring; int irq_fault; int dev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct keystone_rproc*) ;
 int VAR_0 ;
 int FUNC_5 (struct keystone_rproc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int ,int ,struct keystone_rproc*) ;

__attribute__((used)) static int FUNC_7(struct rproc *VAR_3)
{
 struct keystone_rproc *VAR_4 = VAR_3->priv;
 int VAR_5;

 FUNC_0(&VAR_4->workqueue, VAR_0);

 VAR_5 = FUNC_6(VAR_4->irq_ring, VAR_2, 0,
     FUNC_2(VAR_4->dev), VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_4->dev, "failed to enable vring interrupt, ret = %d\n",
   VAR_5);
  goto out;
 }

 VAR_5 = FUNC_6(VAR_4->irq_fault, VAR_1,
     0, FUNC_2(VAR_4->dev), VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_4->dev, "failed to enable exception interrupt, ret = %d\n",
   VAR_5);
  goto free_vring_irq;
 }

 VAR_5 = FUNC_5(VAR_4, VAR_3->bootaddr);
 if (VAR_5)
  goto free_exc_irq;

 return 0;

free_exc_irq:
 FUNC_4(VAR_4->irq_fault, VAR_4);
free_vring_irq:
 FUNC_4(VAR_4->irq_ring, VAR_4);
 FUNC_3(&VAR_4->workqueue);
out:
 return VAR_5;
}
