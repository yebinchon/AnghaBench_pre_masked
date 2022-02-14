
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int owner; } ;
struct phantom_device {int * caddr; int * iaddr; int * oaddr; TYPE_1__ cdev; int wait; int regs_lock; int open_lock; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int *,int ,int *,char*,unsigned int) ;
 int FUNC_6 (int ,struct phantom_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct phantom_device*) ;
 struct phantom_device* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 void* FUNC_15 (struct pci_dev*,int,int ) ;
 int FUNC_16 (struct pci_dev*,int *) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*,char*) ;
 int FUNC_19 (struct pci_dev*,struct phantom_device*) ;
 int VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_20 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_21 (int ,int ,int ,char*,struct phantom_device*) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct pci_dev *VAR_12,
 const struct pci_device_id *VAR_13)
{
 struct phantom_device *VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 VAR_16 = FUNC_14(VAR_12);
 if (VAR_16) {
  FUNC_4(&VAR_12->dev, "pci_enable_device failed!\n");
  goto err;
 }

 VAR_15 = FUNC_20();
 if (VAR_15 == VAR_4) {
  FUNC_4(&VAR_12->dev, "too many devices found!\n");
  VAR_16 = -VAR_0;
  goto err_dis;
 }

 VAR_8[VAR_15] = 1;

 VAR_16 = FUNC_18(VAR_12, "phantom");
 if (VAR_16) {
  FUNC_4(&VAR_12->dev, "pci_request_regions failed!\n");
  goto err_null;
 }

 VAR_16 = -VAR_1;
 VAR_14 = FUNC_11(sizeof(*VAR_14), VAR_2);
 if (VAR_14 == ((void*)0)) {
  FUNC_4(&VAR_12->dev, "unable to allocate device\n");
  goto err_reg;
 }

 VAR_14->caddr = FUNC_15(VAR_12, 0, 0);
 if (VAR_14->caddr == ((void*)0)) {
  FUNC_4(&VAR_12->dev, "can't remap conf space\n");
  goto err_fr;
 }
 VAR_14->iaddr = FUNC_15(VAR_12, 2, 0);
 if (VAR_14->iaddr == ((void*)0)) {
  FUNC_4(&VAR_12->dev, "can't remap input space\n");
  goto err_unmc;
 }
 VAR_14->oaddr = FUNC_15(VAR_12, 3, 0);
 if (VAR_14->oaddr == ((void*)0)) {
  FUNC_4(&VAR_12->dev, "can't remap output space\n");
  goto err_unmi;
 }

 FUNC_12(&VAR_14->open_lock);
 FUNC_22(&VAR_14->regs_lock);
 FUNC_7(&VAR_14->wait);
 FUNC_3(&VAR_14->cdev, &VAR_9);
 VAR_14->cdev.owner = VAR_6;

 FUNC_9(0, VAR_14->caddr + VAR_5);
 FUNC_8(VAR_14->caddr + VAR_5);
 VAR_16 = FUNC_21(VAR_12->irq, VAR_10,
   VAR_3, "phantom", VAR_14);
 if (VAR_16) {
  FUNC_4(&VAR_12->dev, "can't establish ISR\n");
  goto err_unmo;
 }

 VAR_16 = FUNC_2(&VAR_14->cdev, FUNC_1(VAR_11, VAR_15), 1);
 if (VAR_16) {
  FUNC_4(&VAR_12->dev, "chardev registration failed\n");
  goto err_irq;
 }

 if (FUNC_0(FUNC_5(VAR_7, &VAR_12->dev,
     FUNC_1(VAR_11, VAR_15), ((void*)0),
     "phantom%u", VAR_15)))
  FUNC_4(&VAR_12->dev, "can't create device\n");

 FUNC_19(VAR_12, VAR_14);

 return 0;
err_irq:
 FUNC_6(VAR_12->irq, VAR_14);
err_unmo:
 FUNC_16(VAR_12, VAR_14->oaddr);
err_unmi:
 FUNC_16(VAR_12, VAR_14->iaddr);
err_unmc:
 FUNC_16(VAR_12, VAR_14->caddr);
err_fr:
 FUNC_10(VAR_14);
err_reg:
 FUNC_17(VAR_12);
err_null:
 VAR_8[VAR_15] = 0;
err_dis:
 FUNC_13(VAR_12);
err:
 return VAR_16;
}
