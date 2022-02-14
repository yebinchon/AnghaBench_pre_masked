
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_mc_device_irq {TYPE_1__* msi_desc; } ;
struct fsl_mc_device {int dev; int mc_handle; int mc_io; struct fsl_mc_device_irq** irqs; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,int *,int ,int,int ,int *) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,int ,int) ;
 int FUNC_6 (struct fsl_mc_device*) ;
 int FUNC_7 (struct fsl_mc_device*) ;

__attribute__((used)) static int FUNC_8(struct fsl_mc_device *VAR_6)
{
 int VAR_7 = 0;
 struct fsl_mc_device_irq *VAR_8;

 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev, "MC irqs allocation failed\n");
  return VAR_7;
 }

 VAR_8 = VAR_6->irqs[0];
 VAR_7 = FUNC_3(&VAR_6->dev, VAR_8->msi_desc->irq,
     ((void*)0), VAR_5,
     VAR_3 | VAR_4,
     FUNC_1(&VAR_6->dev), &VAR_6->dev);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_6->dev, "devm_request_threaded_irq(): %d\n", VAR_7);
  goto free_mc_irq;
 }

 VAR_7 = FUNC_5(VAR_6->mc_io, 0, VAR_6->mc_handle,
    VAR_2, VAR_1 |
    VAR_0);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_6->dev, "dpni_set_irq_mask(): %d\n", VAR_7);
  goto free_irq;
 }

 VAR_7 = FUNC_4(VAR_6->mc_io, 0, VAR_6->mc_handle,
      VAR_2, 1);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_6->dev, "dpni_set_irq_enable(): %d\n", VAR_7);
  goto free_irq;
 }

 return 0;

free_irq:
 FUNC_2(&VAR_6->dev, VAR_8->msi_desc->irq, &VAR_6->dev);
free_mc_irq:
 FUNC_7(VAR_6);

 return VAR_7;
}
