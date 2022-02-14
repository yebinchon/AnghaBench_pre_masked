
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pciefd_board {int can_count; int reg_base; int cmd_lock; struct pci_dev* pci_dev; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int device; int vendor; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,char*,int ,int ,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int,int,int,int) ;
 int FUNC_5 (int *,char*,int ,int) ;
 struct pciefd_board* FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ,int ) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ,int*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,struct pciefd_board*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (int) ;
 int FUNC_18 (struct pciefd_board*) ;
 int FUNC_19 (struct pciefd_board*) ;
 int FUNC_20 (struct pciefd_board*,int ) ;
 int FUNC_21 (struct pciefd_board*,int ,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct pciefd_board*,int ,int) ;

__attribute__((used)) static int FUNC_24(struct pci_dev *VAR_12,
        const struct pci_device_id *VAR_13)
{
 struct pciefd_board *VAR_14;
 int VAR_15, VAR_16;
 u16 VAR_17;
 u8 VAR_18;
 u8 VAR_19;
 u8 VAR_20;
 u32 VAR_21;

 VAR_15 = FUNC_9(VAR_12);
 if (VAR_15)
  return VAR_15;
 VAR_15 = FUNC_14(VAR_12, VAR_3);
 if (VAR_15)
  goto err_disable_pci;


 VAR_15 = FUNC_12(VAR_12, VAR_10, &VAR_17);
 if (VAR_15)
  goto err_release_regions;

 FUNC_2(&VAR_12->dev, "probing device %04x:%04x:%04x\n",
  VAR_12->vendor, VAR_12->device, VAR_17);

 if (VAR_17 >= 0x0012)
  VAR_16 = 4;
 else if (VAR_17 >= 0x0010)
  VAR_16 = 3;
 else if (VAR_17 >= 0x0004)
  VAR_16 = 2;
 else
  VAR_16 = 1;


 VAR_14 = FUNC_6(&VAR_12->dev, FUNC_23(VAR_14, VAR_11, VAR_16),
         VAR_1);
 if (!VAR_14) {
  VAR_15 = -VAR_0;
  goto err_release_regions;
 }


 VAR_14->pci_dev = VAR_12;
 FUNC_22(&VAR_14->cmd_lock);


 VAR_14->reg_base = FUNC_10(VAR_12, 0, VAR_2);
 if (!VAR_14->reg_base) {
  FUNC_3(&VAR_12->dev, "failed to map PCI resource #0\n");
  VAR_15 = -VAR_0;
  goto err_release_regions;
 }


 VAR_21 = FUNC_20(VAR_14, VAR_7);

 VAR_18 = (VAR_21 & 0x0000f000) >> 12;
 VAR_19 = (VAR_21 & 0x00000f00) >> 8;
 VAR_20 = (VAR_21 & 0x000000f0) >> 4;

 FUNC_4(&VAR_12->dev,
   "%ux CAN-FD PCAN-PCIe FPGA v%u.%u.%u:\n", VAR_16,
   VAR_18, VAR_19, VAR_20);
 FUNC_21(VAR_14, VAR_8,
       VAR_4);

 FUNC_16(VAR_12);


 while (VAR_14->can_count < VAR_16) {
  VAR_15 = FUNC_18(VAR_14);
  if (VAR_15)
   goto err_free_canfd;

  VAR_14->can_count++;
 }


 FUNC_21(VAR_14, VAR_9,
       VAR_5);


 (void)FUNC_20(VAR_14, VAR_6);


 FUNC_21(VAR_14, VAR_9,
       VAR_4);


 FUNC_21(VAR_14, VAR_8,
       VAR_5);


 FUNC_15(VAR_12, VAR_14);

 return 0;

err_free_canfd:
 FUNC_19(VAR_14);

 FUNC_11(VAR_12, VAR_14->reg_base);

err_release_regions:
 FUNC_13(VAR_12);

err_disable_pci:
 FUNC_8(VAR_12);




 return FUNC_17(VAR_15);
}
