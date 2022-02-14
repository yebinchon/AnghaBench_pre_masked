
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int irq; int subsystem_device; int subsystem_vendor; int device; int vendor; } ;
struct controller {int mmio_base; int mmio_size; int cap_offset; int creg; int slot_device_offset; int num_slots; int first_slot; int slot_num_inc; struct pci_dev* pci_dev; int poll_timer; int * hpc_ops; int queue; int cmd_lock; int crit_sect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct controller*,char*,...) ;
 int FUNC_2 (struct controller*,char*,...) ;
 int FUNC_3 (struct controller*,char*,...) ;
 int FUNC_4 (int *) ;
 int VAR_24 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int,int ,int ,int ,void*) ;
 int FUNC_17 (int,int,int ) ;
 int FUNC_18 (struct controller*) ;
 int FUNC_19 (struct controller*) ;
 int FUNC_20 (struct controller*,int,int*) ;
 int VAR_25 ;
 int FUNC_21 (struct controller*,int ) ;
 int FUNC_22 (struct controller*,int ,int) ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_23 (struct controller*,int) ;
 int FUNC_24 (int *,int ,int ) ;

int FUNC_25(struct controller *VAR_28, struct pci_dev *VAR_29)
{
 int VAR_30 = -1, VAR_31 = 0;
 u8 VAR_32;
 u32 VAR_33;
 u32 VAR_34, VAR_35, VAR_36;
 u8 VAR_37;

 VAR_28->pci_dev = VAR_29;
 FUNC_1(VAR_28, "Hotplug Controller:\n");

 if (VAR_29->vendor == VAR_15 &&
     VAR_29->device == VAR_14) {

  VAR_28->mmio_base = FUNC_13(VAR_29, 0);
  VAR_28->mmio_size = FUNC_12(VAR_29, 0);
 } else {
  VAR_28->cap_offset = FUNC_10(VAR_29, VAR_13);
  if (!VAR_28->cap_offset) {
   FUNC_2(VAR_28, "Cannot find PCI capability\n");
   goto abort;
  }
  FUNC_1(VAR_28, " cap_offset = %x\n", VAR_28->cap_offset);

  VAR_30 = FUNC_20(VAR_28, 0, &VAR_33);
  if (VAR_30) {
   FUNC_2(VAR_28, "Cannot read base_offset\n");
   goto abort;
  }

  VAR_30 = FUNC_20(VAR_28, 3, &VAR_34);
  if (VAR_30) {
   FUNC_2(VAR_28, "Cannot read slot config\n");
   goto abort;
  }
  VAR_31 = VAR_34 & VAR_21;
  FUNC_1(VAR_28, " num_slots (indirect) %x\n", VAR_31);

  for (VAR_37 = 0; VAR_37 < 9 + VAR_31; VAR_37++) {
   VAR_30 = FUNC_20(VAR_28, VAR_37, &VAR_34);
   if (VAR_30) {
    FUNC_2(VAR_28, "Cannot read creg (index = %d)\n",
      VAR_37);
    goto abort;
   }
   FUNC_1(VAR_28, " offset %d: value %x\n", VAR_37, VAR_34);
  }

  VAR_28->mmio_base =
   FUNC_13(VAR_29, 0) + VAR_33;
  VAR_28->mmio_size = 0x24 + 0x4 * VAR_31;
 }

 FUNC_3(VAR_28, "HPC vendor_id %x device_id %x ss_vid %x ss_did %x\n",
    VAR_29->vendor, VAR_29->device, VAR_29->subsystem_vendor,
    VAR_29->subsystem_device);

 VAR_30 = FUNC_8(VAR_29);
 if (VAR_30) {
  FUNC_2(VAR_28, "pci_enable_device failed\n");
  goto abort;
 }

 if (!FUNC_17(VAR_28->mmio_base, VAR_28->mmio_size, VAR_12)) {
  FUNC_2(VAR_28, "Cannot reserve MMIO region\n");
  VAR_30 = -1;
  goto abort;
 }

 VAR_28->creg = FUNC_5(VAR_28->mmio_base, VAR_28->mmio_size);
 if (!VAR_28->creg) {
  FUNC_2(VAR_28, "Cannot remap MMIO region %lx @ %lx\n",
    VAR_28->mmio_size, VAR_28->mmio_base);
  FUNC_15(VAR_28->mmio_base, VAR_28->mmio_size);
  VAR_30 = -1;
  goto abort;
 }
 FUNC_1(VAR_28, "ctrl->creg %p\n", VAR_28->creg);

 FUNC_7(&VAR_28->crit_sect);
 FUNC_7(&VAR_28->cmd_lock);


 FUNC_4(&VAR_28->queue);

 VAR_28->hpc_ops = &VAR_26;


 VAR_36 = FUNC_21(VAR_28, VAR_20);
 VAR_28->slot_device_offset = (VAR_36 & VAR_5) >> 8;
 VAR_28->num_slots = VAR_36 & VAR_21;
 VAR_28->first_slot = (VAR_36 & VAR_17) >> 16;
 VAR_28->slot_num_inc = ((VAR_36 & VAR_23) >> 29) ? 1 : -1;


 VAR_34 = FUNC_21(VAR_28, VAR_18);
 FUNC_1(VAR_28, "SERR_INTR_ENABLE = %x\n", VAR_34);
 VAR_34 |= (VAR_6 | VAR_7 |
        VAR_2 | VAR_0);
 VAR_34 &= ~VAR_19;
 FUNC_22(VAR_28, VAR_18, VAR_34);
 VAR_34 = FUNC_21(VAR_28, VAR_18);
 FUNC_1(VAR_28, "SERR_INTR_ENABLE = %x\n", VAR_34);




 for (VAR_32 = 0; VAR_32 < VAR_28->num_slots; VAR_32++) {
  VAR_35 = FUNC_21(VAR_28, FUNC_0(VAR_32));
  FUNC_1(VAR_28, "Default Logical Slot Register %d value %x\n",
    VAR_32, VAR_35);
  VAR_35 |= (VAR_16 | VAR_9 |
        VAR_1 | VAR_10 |
        VAR_3 | VAR_11 |
        VAR_4);
  VAR_35 &= ~VAR_22;
  FUNC_22(VAR_28, FUNC_0(VAR_32), VAR_35);
 }

 if (VAR_27) {

  FUNC_24(&VAR_28->poll_timer, VAR_24, 0);
  FUNC_23(VAR_28, 10);
 } else {

  VAR_30 = FUNC_9(VAR_29);
  if (VAR_30) {
   FUNC_3(VAR_28, "Can't get msi for the hotplug controller\n");
   FUNC_3(VAR_28, "Use INTx for the hotplug controller\n");
  } else {
   FUNC_14(VAR_29);
  }

  VAR_30 = FUNC_16(VAR_28->pci_dev->irq, VAR_25, VAR_8,
     VAR_12, (void *)VAR_28);
  FUNC_1(VAR_28, "request_irq %d (returns %d)\n",
    VAR_28->pci_dev->irq, VAR_30);
  if (VAR_30) {
   FUNC_2(VAR_28, "Can't get irq %d for the hotplug controller\n",
     VAR_28->pci_dev->irq);
   goto abort_iounmap;
  }
 }
 FUNC_1(VAR_28, "HPC at %s irq=%x\n", FUNC_11(VAR_29), VAR_29->irq);

 FUNC_19(VAR_28);
 FUNC_18(VAR_28);




 for (VAR_32 = 0; VAR_32 < VAR_28->num_slots; VAR_32++) {
  VAR_35 = FUNC_21(VAR_28, FUNC_0(VAR_32));
  FUNC_1(VAR_28, "Default Logical Slot Register %d value %x\n",
    VAR_32, VAR_35);
  VAR_35 &= ~(VAR_16 | VAR_9 |
         VAR_1 | VAR_10 |
         VAR_3 | VAR_22);
  FUNC_22(VAR_28, FUNC_0(VAR_32), VAR_35);
 }
 if (!VAR_27) {

  VAR_34 = FUNC_21(VAR_28, VAR_18);
  VAR_34 &= ~(VAR_6 | VAR_2 |
          VAR_19);
  FUNC_22(VAR_28, VAR_18, VAR_34);
  VAR_34 = FUNC_21(VAR_28, VAR_18);
  FUNC_1(VAR_28, "SERR_INTR_ENABLE = %x\n", VAR_34);
 }

 return 0;


abort_iounmap:
 FUNC_6(VAR_28->creg);
abort:
 return VAR_30;
}
