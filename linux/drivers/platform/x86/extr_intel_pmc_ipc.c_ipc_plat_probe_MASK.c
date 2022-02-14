
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int kobj; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_7__ {scalar_t__ irq; int has_gcr_regs; int telemetry_dev; int punit_dev; int tco_dev; int gcr_lock; int cmd_complete; int irq_mode; TYPE_2__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,int ,int ,char*,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (struct platform_device*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)
{
 int VAR_8;

 VAR_6.dev = &VAR_7->dev;
 VAR_6.irq_mode = VAR_2;
 FUNC_3(&VAR_6.cmd_complete);
 FUNC_8(&VAR_6.gcr_lock);

 VAR_6.irq = FUNC_7(VAR_7, 0);
 if (VAR_6.irq < 0)
  return -VAR_1;

 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8) {
  FUNC_0(&VAR_7->dev, "Failed to request resource\n");
  return VAR_8;
 }

 VAR_8 = FUNC_4();
 if (VAR_8) {
  FUNC_0(&VAR_7->dev, "Failed to create pmc devices\n");
  return VAR_8;
 }

 if (FUNC_2(&VAR_7->dev, VAR_6.irq, VAR_5, VAR_3,
        "intel_pmc_ipc", &VAR_6)) {
  FUNC_0(&VAR_7->dev, "Failed to request irq\n");
  VAR_8 = -VAR_0;
  goto err_irq;
 }

 VAR_8 = FUNC_9(&VAR_7->dev.kobj, &VAR_4);
 if (VAR_8) {
  FUNC_0(&VAR_7->dev, "Failed to create sysfs group %d\n",
   VAR_8);
  goto err_sys;
 }

 VAR_6.has_gcr_regs = 1;

 return 0;
err_sys:
 FUNC_1(&VAR_7->dev, VAR_6.irq, &VAR_6);
err_irq:
 FUNC_6(VAR_6.tco_dev);
 FUNC_6(VAR_6.punit_dev);
 FUNC_6(VAR_6.telemetry_dev);

 return VAR_8;
}
