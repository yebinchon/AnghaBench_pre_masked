
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {struct keystone_rproc* priv; } ;
struct keystone_rproc {int workqueue; int irq_ring; int irq_fault; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct keystone_rproc*) ;
 int FUNC_2 (struct keystone_rproc*) ;

__attribute__((used)) static int FUNC_3(struct rproc *VAR_0)
{
 struct keystone_rproc *VAR_1 = VAR_0->priv;

 FUNC_2(VAR_1);
 FUNC_1(VAR_1->irq_fault, VAR_1);
 FUNC_1(VAR_1->irq_ring, VAR_1);
 FUNC_0(&VAR_1->workqueue);

 return 0;
}
