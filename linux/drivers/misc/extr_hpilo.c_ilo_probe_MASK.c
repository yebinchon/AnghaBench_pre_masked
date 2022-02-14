
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; int dev; } ;
struct TYPE_3__ {int owner; } ;
struct ilo_hwinfo {TYPE_1__ cdev; int open_lock; int fifo_lock; int alloc_lock; struct pci_dev* ilo_dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (struct ilo_hwinfo*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 struct device* FUNC_7 (int ,int *,int ,int *,char*,int,int) ;
 int FUNC_8 (int ,struct ilo_hwinfo*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct ilo_hwinfo*) ;
 int FUNC_10 (struct ilo_hwinfo*) ;
 int VAR_11 ;
 int* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (struct pci_dev*,struct ilo_hwinfo*) ;
 int FUNC_12 (struct pci_dev*,struct ilo_hwinfo*) ;
 int FUNC_13 (struct ilo_hwinfo*) ;
 struct ilo_hwinfo* FUNC_14 (int,int ) ;
 int VAR_15 ;
 int FUNC_15 (struct pci_dev*) ;
 scalar_t__ FUNC_16 (int ,struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*,int ) ;
 int FUNC_19 (struct pci_dev*,struct ilo_hwinfo*) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (int ,int ,int ,char*,struct ilo_hwinfo*) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct pci_dev *VAR_16,
          const struct pci_device_id *VAR_17)
{
 int VAR_18, VAR_19, VAR_20, VAR_21 = 0;
 struct ilo_hwinfo *VAR_22;

 if (FUNC_16(VAR_9, VAR_16)) {
  FUNC_5(&VAR_16->dev, "Not supported on this device\n");
  return -VAR_0;
 }

 if (VAR_15 > VAR_5)
  VAR_15 = VAR_5;
 else if (VAR_15 < VAR_7)
  VAR_15 = VAR_7;


 for (VAR_18 = 0; VAR_18 < VAR_6; VAR_18++) {
  if (VAR_12[VAR_18] == 0) {
   VAR_12[VAR_18] = 1;
   break;
  }
 }

 if (VAR_18 == VAR_6) {
  FUNC_6(&VAR_16->dev, "Error finding free device\n");
  return -VAR_0;
 }


 VAR_21 = -VAR_1;
 VAR_22 = FUNC_14(sizeof(*VAR_22), VAR_2);
 if (!VAR_22)
  goto out;

 VAR_22->ilo_dev = VAR_16;
 FUNC_22(&VAR_22->alloc_lock);
 FUNC_22(&VAR_22->fifo_lock);
 FUNC_22(&VAR_22->open_lock);

 VAR_21 = FUNC_15(VAR_16);
 if (VAR_21)
  goto free;

 FUNC_20(VAR_16);

 VAR_21 = FUNC_18(VAR_16, VAR_3);
 if (VAR_21)
  goto disable;

 VAR_21 = FUNC_11(VAR_16, VAR_22);
 if (VAR_21)
  goto free_regions;

 FUNC_19(VAR_16, VAR_22);
 FUNC_4(VAR_22);

 VAR_21 = FUNC_21(VAR_16->irq, VAR_13, VAR_4, "hpilo", VAR_22);
 if (VAR_21)
  goto unmap;

 FUNC_10(VAR_22);

 FUNC_3(&VAR_22->cdev, &VAR_11);
 VAR_22->cdev.owner = VAR_8;
 VAR_20 = VAR_18 * VAR_15;
 VAR_21 = FUNC_2(&VAR_22->cdev, FUNC_1(VAR_14, VAR_20), VAR_15);
 if (VAR_21) {
  FUNC_6(&VAR_16->dev, "Could not add cdev\n");
  goto remove_isr;
 }

 for (VAR_19 = 0 ; VAR_19 < VAR_15; VAR_19++) {
  struct device *VAR_23;
  VAR_23 = FUNC_7(VAR_10, &VAR_16->dev,
        FUNC_1(VAR_14, VAR_19), ((void*)0),
        "hpilo!d%dccb%d", VAR_18, VAR_19);
  if (FUNC_0(VAR_23))
   FUNC_6(&VAR_16->dev, "Could not create files\n");
 }

 return 0;
remove_isr:
 FUNC_9(VAR_22);
 FUNC_8(VAR_16->irq, VAR_22);
unmap:
 FUNC_12(VAR_16, VAR_22);
free_regions:
 FUNC_17(VAR_16);
disable:

free:
 FUNC_13(VAR_22);
out:
 VAR_12[VAR_18] = 0;
 return VAR_21;
}
