
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int release; int * parent; } ;
struct rio_mport {int phys_efptr; int phys_rmap; scalar_t__ host_deviceid; int name; int * riores; int dbells; TYPE_1__ dev; void* priv; scalar_t__ sys_size; scalar_t__ index; int * ops; } ;
struct tsi721_device {scalar_t__ regs; int flags; struct rio_mport mport; struct pci_dev* pdev; } ;
struct pci_dev {int irq; int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (struct rio_mport*) ;
 int FUNC_9 (struct rio_mport*) ;
 int FUNC_10 (int ,int ,char*,char*,char*) ;
 int FUNC_11 (struct tsi721_device*) ;
 int FUNC_12 (struct tsi721_device*) ;
 int VAR_13 ;
 int FUNC_13 (struct tsi721_device*) ;
 int FUNC_14 (struct tsi721_device*) ;
 int VAR_14 ;
 int FUNC_15 (struct tsi721_device*) ;
 int FUNC_16 (int ,int *,char*) ;
 int FUNC_17 (int *,char*,int ,int) ;

__attribute__((used)) static int FUNC_18(struct tsi721_device *VAR_15)
{
 struct pci_dev *VAR_16 = VAR_15->pdev;
 int VAR_17 = 0;
 struct rio_mport *VAR_18 = &VAR_15->mport;

 VAR_17 = FUNC_8(VAR_18);
 if (VAR_17)
  return VAR_17;

 VAR_18->ops = &VAR_14;
 VAR_18->index = 0;
 VAR_18->sys_size = 0;
 VAR_18->priv = (void *)VAR_15;
 VAR_18->phys_efptr = 0x100;
 VAR_18->phys_rmap = 1;
 VAR_18->dev.parent = &VAR_16->dev;
 VAR_18->dev.release = VAR_13;

 FUNC_0(&VAR_18->dbells);

 FUNC_6(&VAR_18->riores[VAR_1], 0, 0xffff);
 FUNC_7(&VAR_18->riores[VAR_2], 0, 3);
 FUNC_7(&VAR_18->riores[VAR_4], 0, 3);
 FUNC_10(VAR_18->name, VAR_3, "%s(%s)",
   FUNC_1(&VAR_16->dev), FUNC_2(&VAR_16->dev));
 VAR_17 = FUNC_14(VAR_15);

 if (VAR_17) {
  FUNC_17(&VAR_16->dev, "Unable to get PCI IRQ %02X (err=0x%x)",
   VAR_16->irq, VAR_17);
  return VAR_17;
 }







 FUNC_4(FUNC_3(VAR_15->regs + VAR_9) |
    VAR_10,
    VAR_15->regs + VAR_9);

 if (VAR_18->host_deviceid >= 0)
  FUNC_4(VAR_7 | VAR_8 |
     VAR_6,
     VAR_15->regs + (0x100 + VAR_5));
 else
  FUNC_4(0, VAR_15->regs + (0x100 + VAR_5));

 VAR_17 = FUNC_9(VAR_18);
 if (VAR_17) {
  FUNC_15(VAR_15);
  goto err_exit;
 }

 return 0;

err_exit:
 FUNC_12(VAR_15);
 return VAR_17;
}
