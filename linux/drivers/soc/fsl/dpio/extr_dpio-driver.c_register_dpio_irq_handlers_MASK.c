
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_mc_device_irq {TYPE_1__* msi_desc; } ;
struct fsl_mc_device {int dev; struct fsl_mc_device_irq** irqs; } ;
typedef int cpumask_t ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct fsl_mc_device *VAR_1, int VAR_2)
{
 int VAR_3;
 struct fsl_mc_device_irq *VAR_4;
 cpumask_t VAR_5;

 VAR_4 = VAR_1->irqs[0];
 VAR_3 = FUNC_4(&VAR_1->dev,
     VAR_4->msi_desc->irq,
     VAR_0,
     0,
     FUNC_3(&VAR_1->dev),
     &VAR_1->dev);
 if (VAR_3 < 0) {
  FUNC_2(&VAR_1->dev,
   "devm_request_irq() failed: %d\n",
   VAR_3);
  return VAR_3;
 }


 FUNC_0(&VAR_5);
 FUNC_1(VAR_2, &VAR_5);
 if (FUNC_5(VAR_4->msi_desc->irq, &VAR_5))
  FUNC_2(&VAR_1->dev,
   "irq_set_affinity failed irq %d cpu %d\n",
   VAR_4->msi_desc->irq, VAR_2);

 return 0;
}
