
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {size_t driver_data; int device; } ;
struct pci_dev {int dev; } ;
struct mfd_cell {int dummy; } ;
struct lpc_sch_info {int irq_gpio; int io_size_wdt; int io_size_gpio; int io_size_smbus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*,int ,char*,int ,int,int ,struct mfd_cell*) ;
 int FUNC_2 (int *,int ,struct mfd_cell*,unsigned int,int *,int ,int *) ;
 struct lpc_sch_info* VAR_4 ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 struct mfd_cell VAR_7[3];
 struct lpc_sch_info *VAR_8 = &VAR_4[VAR_6->driver_data];
 unsigned int VAR_9 = 0;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_5, VAR_2, "isch_smbus",
        VAR_8->io_size_smbus, -1,
        VAR_6->device, &VAR_7[VAR_9]);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_10 == 0)
  VAR_9++;

 VAR_10 = FUNC_1(VAR_5, VAR_1, "sch_gpio",
        VAR_8->io_size_gpio, VAR_8->irq_gpio,
        VAR_6->device, &VAR_7[VAR_9]);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_10 == 0)
  VAR_9++;

 VAR_10 = FUNC_1(VAR_5, VAR_3, "ie6xx_wdt",
        VAR_8->io_size_wdt, -1,
        VAR_6->device, &VAR_7[VAR_9]);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_10 == 0)
  VAR_9++;

 if (VAR_9 == 0) {
  FUNC_0(&VAR_5->dev, "All decode registers disabled.\n");
  return -VAR_0;
 }

 return FUNC_2(&VAR_5->dev, 0, VAR_7, VAR_9, ((void*)0), 0, ((void*)0));
}
