
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rapl_mmio_regs {int dummy; } ;
struct proc_thermal_device {int * soc_dts; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct TYPE_5__ {int kobj; } ;
struct pci_dev {scalar_t__ device; TYPE_1__ dev; scalar_t__ irq; } ;
struct TYPE_6__ {int attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,struct proc_thermal_device*) ;
 int FUNC_8 (struct pci_dev*) ;
 int VAR_7 ;
 int FUNC_9 (TYPE_1__*,struct proc_thermal_device**) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct pci_dev*,struct proc_thermal_device*,struct rapl_mmio_regs*) ;
 int FUNC_11 (struct proc_thermal_device*) ;
 int FUNC_12 (scalar_t__,int *,int ,int ,char*,struct pci_dev*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *) ;

__attribute__((used)) static int FUNC_16(struct pci_dev *VAR_10,
       const struct pci_device_id *VAR_11)
{
 struct proc_thermal_device *VAR_12;
 int VAR_13;

 if (VAR_8 == VAR_5) {
  FUNC_1(&VAR_10->dev, "error: enumerated as platform dev\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_8(VAR_10);
 if (VAR_13 < 0) {
  FUNC_1(&VAR_10->dev, "error: could not enable device\n");
  return VAR_13;
 }

 VAR_13 = FUNC_9(&VAR_10->dev, &VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_10(VAR_10, VAR_12,
    (struct rapl_mmio_regs *)VAR_11->driver_data);
 if (VAR_13) {
  FUNC_1(&VAR_10->dev, "failed to add RAPL MMIO interface\n");
  FUNC_11(VAR_12);
  return VAR_13;
 }

 FUNC_7(VAR_10, VAR_12);
 VAR_8 = VAR_4;

 if (VAR_10->device == VAR_3) {







  VAR_12->soc_dts = FUNC_4(
     VAR_1, 2, 0);

  if (!FUNC_0(VAR_12->soc_dts) && VAR_10->irq) {
   VAR_13 = FUNC_6(VAR_10);
   if (!VAR_13) {
    VAR_13 = FUNC_12(VAR_10->irq, ((void*)0),
      VAR_9,
      VAR_2, "proc_thermal",
      VAR_10);
    if (VAR_13) {
     FUNC_3(
       VAR_12->soc_dts);
     FUNC_5(VAR_10);
     VAR_12->soc_dts = ((void*)0);
    }
   }
  } else
   FUNC_1(&VAR_10->dev, "No auxiliary DTSs enabled\n");
 }

 FUNC_2(&VAR_10->dev, "Creating sysfs group for PROC_THERMAL_PCI\n");

 VAR_13 = FUNC_13(&VAR_10->dev.kobj, &VAR_6.attr);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_14(&VAR_10->dev.kobj, &VAR_7);
 if (VAR_13)
  FUNC_15(&VAR_10->dev.kobj, &VAR_6.attr);

 return VAR_13;
}
