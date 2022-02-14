
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fsl_mc_device_irq {TYPE_2__* msi_desc; } ;
struct TYPE_3__ {scalar_t__ irq_count; } ;
struct device {int dummy; } ;
struct fsl_mc_device {struct fsl_mc_device_irq** irqs; TYPE_1__ obj_desc; struct device dev; } ;
struct ethsw_core {int dpsw_handle; int mc_io; } ;
struct TYPE_4__ {int irq; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct ethsw_core* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int ,struct device*) ;
 int FUNC_5 (struct device*,int ,int *,int ,int,int ,struct device*) ;
 int FUNC_6 (int ,int ,int ,size_t,int) ;
 int FUNC_7 (int ,int ,int ,size_t,int ) ;
 int VAR_6 ;
 int FUNC_8 (struct fsl_mc_device*) ;
 int FUNC_9 (struct fsl_mc_device*) ;

__attribute__((used)) static int FUNC_10(struct fsl_mc_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct ethsw_core *VAR_9 = FUNC_2(VAR_8);
 u32 VAR_10 = VAR_0;
 struct fsl_mc_device_irq *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_8(VAR_7);
 if (VAR_12) {
  FUNC_1(VAR_8, "MC irqs allocation failed\n");
  return VAR_12;
 }

 if (FUNC_0(VAR_7->obj_desc.irq_count != VAR_2)) {
  VAR_12 = -VAR_3;
  goto free_irq;
 }

 VAR_12 = FUNC_6(VAR_9->mc_io, 0, VAR_9->dpsw_handle,
      VAR_1, 0);
 if (VAR_12) {
  FUNC_1(VAR_8, "dpsw_set_irq_enable err %d\n", VAR_12);
  goto free_irq;
 }

 VAR_11 = VAR_7->irqs[VAR_1];

 VAR_12 = FUNC_5(VAR_8, VAR_11->msi_desc->irq,
     ((void*)0),
     VAR_6,
     VAR_4 | VAR_5,
     FUNC_3(VAR_8), VAR_8);
 if (VAR_12) {
  FUNC_1(VAR_8, "devm_request_threaded_irq(): %d\n", VAR_12);
  goto free_irq;
 }

 VAR_12 = FUNC_7(VAR_9->mc_io, 0, VAR_9->dpsw_handle,
    VAR_1, VAR_10);
 if (VAR_12) {
  FUNC_1(VAR_8, "dpsw_set_irq_mask(): %d\n", VAR_12);
  goto free_devm_irq;
 }

 VAR_12 = FUNC_6(VAR_9->mc_io, 0, VAR_9->dpsw_handle,
      VAR_1, 1);
 if (VAR_12) {
  FUNC_1(VAR_8, "dpsw_set_irq_enable(): %d\n", VAR_12);
  goto free_devm_irq;
 }

 return 0;

free_devm_irq:
 FUNC_4(VAR_8, VAR_11->msi_desc->irq, VAR_8);
free_irq:
 FUNC_9(VAR_7);
 return VAR_12;
}
