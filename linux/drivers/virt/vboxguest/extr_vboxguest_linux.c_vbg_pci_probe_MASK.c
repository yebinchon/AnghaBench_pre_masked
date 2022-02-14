
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vmmdev_memory {int size; int version; } ;
struct TYPE_3__ {void* minor; int * fops; int name; } ;
struct vbg_dev {int io_port; TYPE_1__ misc_device; TYPE_1__ misc_device_user; struct device* dev; struct vmmdev_memory* mmio; } ;
struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {int irq; struct device dev; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct device*,int *) ;
 struct vmmdev_memory* FUNC_1 (struct device*,int,int) ;
 struct vbg_dev* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,int ,int ,int ,int ,struct vbg_dev*) ;
 int * FUNC_4 (struct device*,int,int,int ) ;
 int * FUNC_5 (struct device*,int,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int) ;
 int FUNC_13 (struct pci_dev*,int) ;
 int FUNC_14 (struct pci_dev*,struct vbg_dev*) ;
 int FUNC_15 (struct vbg_dev*) ;
 int FUNC_16 (struct vbg_dev*,int ) ;
 int VAR_12 ;
 int FUNC_17 (struct vbg_dev*) ;
 int FUNC_18 (char*,...) ;
 struct vbg_dev* VAR_13 ;
 int VAR_14 ;
 int FUNC_19 (char*,void*,int ,int,int*,int*) ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_20(struct pci_dev *VAR_17, const struct pci_device_id *VAR_18)
{
 struct device *VAR_19 = &VAR_17->dev;
 resource_size_t VAR_20, VAR_21, VAR_22, VAR_23;
 struct vmmdev_memory *VAR_24;
 struct vbg_dev *VAR_25;
 int VAR_26;

 VAR_25 = FUNC_2(VAR_19, sizeof(*VAR_25), VAR_5);
 if (!VAR_25)
  return -VAR_4;

 VAR_26 = FUNC_11(VAR_17);
 if (VAR_26 != 0) {
  FUNC_18("vboxguest: Error enabling device: %d\n", VAR_26);
  return VAR_26;
 }

 VAR_26 = -VAR_3;

 VAR_20 = FUNC_13(VAR_17, 0);
 VAR_21 = FUNC_12(VAR_17, 0);
 if (!VAR_20 || !VAR_21) {
  FUNC_18("vboxguest: Error IO-port resource (0) is missing\n");
  goto err_disable_pcidev;
 }
 if (FUNC_5(VAR_19, VAR_20, VAR_21, VAR_0) == ((void*)0)) {
  FUNC_18("vboxguest: Error could not claim IO resource\n");
  VAR_26 = -VAR_2;
  goto err_disable_pcidev;
 }

 VAR_22 = FUNC_13(VAR_17, 1);
 VAR_23 = FUNC_12(VAR_17, 1);
 if (!VAR_22 || !VAR_23) {
  FUNC_18("vboxguest: Error MMIO resource (1) is missing\n");
  goto err_disable_pcidev;
 }

 if (FUNC_4(VAR_19, VAR_22, VAR_23, VAR_0) == ((void*)0)) {
  FUNC_18("vboxguest: Error could not claim MMIO resource\n");
  VAR_26 = -VAR_2;
  goto err_disable_pcidev;
 }

 VAR_24 = FUNC_1(VAR_19, VAR_22, VAR_23);
 if (!VAR_24) {
  FUNC_18("vboxguest: Error ioremap failed; MMIO addr=%pap size=%pap\n",
   &VAR_22, &VAR_23);
  goto err_disable_pcidev;
 }


 if (VAR_24->version != VAR_9 ||
     VAR_24->size < 32 || VAR_24->size > VAR_23) {
  FUNC_18("vboxguest: Bogus VMMDev memory; version=%08x (expected %08x) size=%d (expected <= %d)\n",
   VAR_24->version, VAR_9,
   VAR_24->size, (int)VAR_23);
  goto err_disable_pcidev;
 }

 VAR_25->io_port = VAR_20;
 VAR_25->mmio = VAR_24;
 VAR_25->dev = VAR_19;
 VAR_25->misc_device.minor = VAR_7;
 VAR_25->misc_device.name = VAR_0;
 VAR_25->misc_device.fops = &VAR_15;
 VAR_25->misc_device_user.minor = VAR_7;
 VAR_25->misc_device_user.name = VAR_1;
 VAR_25->misc_device_user.fops = &VAR_16;

 VAR_26 = FUNC_16(VAR_25, VAR_8);
 if (VAR_26)
  goto err_disable_pcidev;

 VAR_26 = FUNC_17(VAR_25);
 if (VAR_26) {
  FUNC_18("vboxguest: Error creating input device: %d\n", VAR_26);
  goto err_vbg_core_exit;
 }

 VAR_26 = FUNC_3(VAR_19, VAR_17->irq, VAR_12, VAR_6,
          VAR_0, VAR_25);
 if (VAR_26) {
  FUNC_18("vboxguest: Error requesting irq: %d\n", VAR_26);
  goto err_vbg_core_exit;
 }

 VAR_26 = FUNC_7(&VAR_25->misc_device);
 if (VAR_26) {
  FUNC_18("vboxguest: Error misc_register %s failed: %d\n",
   VAR_0, VAR_26);
  goto err_vbg_core_exit;
 }

 VAR_26 = FUNC_7(&VAR_25->misc_device_user);
 if (VAR_26) {
  FUNC_18("vboxguest: Error misc_register %s failed: %d\n",
   VAR_1, VAR_26);
  goto err_unregister_misc_device;
 }

 FUNC_8(&VAR_14);
 if (!VAR_13)
  VAR_13 = VAR_25;
 else
  VAR_26 = -VAR_2;
 FUNC_9(&VAR_14);

 if (VAR_26) {
  FUNC_18("vboxguest: Error more then 1 vbox guest pci device\n");
  goto err_unregister_misc_device_user;
 }

 FUNC_14(VAR_17, VAR_25);
 FUNC_0(VAR_19, &VAR_11);
 FUNC_0(VAR_19, &VAR_10);

 FUNC_19("vboxguest: misc device minor %d, IRQ %d, I/O port %x, MMIO at %pap (size %pap)\n",
   VAR_25->misc_device.minor, VAR_17->irq, VAR_25->io_port,
   &VAR_22, &VAR_23);

 return 0;

err_unregister_misc_device_user:
 FUNC_6(&VAR_25->misc_device_user);
err_unregister_misc_device:
 FUNC_6(&VAR_25->misc_device);
err_vbg_core_exit:
 FUNC_15(VAR_25);
err_disable_pcidev:
 FUNC_10(VAR_17);

 return VAR_26;
}
