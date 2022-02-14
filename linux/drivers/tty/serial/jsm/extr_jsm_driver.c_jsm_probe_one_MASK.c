
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int device; int dev; int irq; int revision; } ;
struct jsm_board {int maxports; int membase; unsigned int iobase; int bd_uart_offset; int bd_dividend; void* re_map_membase; int irq; int rev; TYPE_1__* bd_ops; void* membase_end; struct pci_dev* pci_dev; void* iobase_end; int bd_intr_lock; int boardnum; } ;
struct TYPE_3__ {int intr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int,int ,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ,struct jsm_board*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (void*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_6 (int ,struct pci_dev**,char*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_7 (struct jsm_board*) ;
 int FUNC_8 (struct jsm_board*) ;
 int FUNC_9 (struct jsm_board*) ;
 int FUNC_10 (struct jsm_board*) ;
 struct jsm_board* FUNC_11 (int,int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 void* FUNC_17 (struct pci_dev*,int) ;
 int FUNC_18 (struct pci_dev*,int) ;
 void* FUNC_19 (struct pci_dev*,int) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (struct pci_dev*,struct jsm_board*) ;
 int FUNC_22 (int ,int ,int ,char*,struct jsm_board*) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static int FUNC_24(struct pci_dev *VAR_8, const struct pci_device_id *VAR_9)
{
 int VAR_10 = 0;
 struct jsm_board *VAR_11;
 static int VAR_12;

 VAR_10 = FUNC_14(VAR_8);
 if (VAR_10) {
  FUNC_0(&VAR_8->dev, "Device enable FAILED\n");
  goto out;
 }

 VAR_10 = FUNC_16(VAR_8, VAR_5);
 if (VAR_10) {
  FUNC_0(&VAR_8->dev, "pci_request_region FAILED\n");
  goto out_disable_device;
 }

 VAR_11 = FUNC_11(sizeof(*VAR_11), VAR_2);
 if (!VAR_11) {
  VAR_10 = -VAR_0;
  goto out_release_regions;
 }


 VAR_11->boardnum = VAR_12++;
 VAR_11->pci_dev = VAR_8;

 switch (VAR_8->device) {
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
  VAR_11->maxports = 2;
  break;

 case 138:
 case 137:
 case 128:
 case 143:
 case 142:
 case 141:
  VAR_11->maxports = 4;
  break;

 case 136:
 case 135:
 case 134:
 case 140:
 case 139:
  VAR_11->maxports = 8;
  break;

 default:
  VAR_11->maxports = 1;
  break;
 }

 FUNC_23(&VAR_11->bd_intr_lock);


 VAR_11->rev = VAR_8->revision;

 VAR_11->irq = VAR_8->irq;

 switch (VAR_8->device) {
 case 138:
 case 137:
 case 136:
 case 135:

  FUNC_6(VAR_3, &VAR_11->pci_dev,
   "jsm_found_board - Classic adapter\n");
  VAR_11->membase = FUNC_19(VAR_8, 4);
  VAR_11->membase_end = FUNC_17(VAR_8, 4);

  if (VAR_11->membase & 0x1)
   VAR_11->membase &= ~0x3;
  else
   VAR_11->membase &= ~0xF;

  VAR_11->iobase = FUNC_19(VAR_8, 1);
  VAR_11->iobase_end = FUNC_17(VAR_8, 1);
  VAR_11->iobase = ((unsigned int)(VAR_11->iobase)) & 0xFFFE;


  VAR_11->bd_ops = &VAR_6;

  VAR_11->bd_uart_offset = 0x8;
  VAR_11->bd_dividend = 921600;

  VAR_11->re_map_membase = FUNC_4(VAR_11->membase,
      FUNC_18(VAR_8, 4));
  if (!VAR_11->re_map_membase) {
   FUNC_0(&VAR_8->dev,
    "Card has no PCI Memory resources, failing board.\n");
   VAR_10 = -VAR_0;
   goto out_kfree_brd;
  }






  FUNC_12(0x43, VAR_11->iobase + 0x4c);

  break;

 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
 case 143:
 case 142:
 case 141:
 case 134:
 case 140:
 case 139:

  FUNC_6(VAR_3, &VAR_11->pci_dev, "jsm_found_board - NEO adapter\n");


  VAR_11->membase = FUNC_19(VAR_8, 0);
  VAR_11->membase_end = FUNC_17(VAR_8, 0);

  if (VAR_11->membase & 1)
   VAR_11->membase &= ~0x3;
  else
   VAR_11->membase &= ~0xF;


  VAR_11->bd_ops = &VAR_7;

  VAR_11->bd_uart_offset = 0x200;
  VAR_11->bd_dividend = 921600;

  VAR_11->re_map_membase = FUNC_4(VAR_11->membase,
      FUNC_18(VAR_8, 0));
  if (!VAR_11->re_map_membase) {
   FUNC_0(&VAR_8->dev,
    "Card has no PCI Memory resources, failing board.\n");
   VAR_10 = -VAR_0;
   goto out_kfree_brd;
  }

  break;
 default:
  return -VAR_1;
 }

 VAR_10 = FUNC_22(VAR_11->irq, VAR_11->bd_ops->intr, VAR_4, "JSM", VAR_11);
 if (VAR_10) {
  FUNC_2(&VAR_8->dev, "Failed to hook IRQ %d\n", VAR_11->irq);
  goto out_iounmap;
 }

 VAR_10 = FUNC_8(VAR_11);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_8->dev, "Can't init tty devices (%d)\n", VAR_10);
  VAR_10 = -VAR_1;
  goto out_free_irq;
 }

 VAR_10 = FUNC_9(VAR_11);
 if (VAR_10 < 0) {

  FUNC_0(&VAR_8->dev, "Can't init uart port (%d)\n", VAR_10);
  VAR_10 = -VAR_1;
  goto out_free_irq;
 }


 FUNC_1(&VAR_8->dev, "board %d: Digi Classic/Neo (rev %d), irq %d\n",
   VAR_12, VAR_11->rev, VAR_11->irq);

 FUNC_21(VAR_8, VAR_11);
 FUNC_20(VAR_8);

 return 0;
 out_free_irq:
 FUNC_7(VAR_11);
 FUNC_3(VAR_11->irq, VAR_11);
 out_iounmap:
 FUNC_5(VAR_11->re_map_membase);
 out_kfree_brd:
 FUNC_10(VAR_11);
 out_release_regions:
 FUNC_15(VAR_8);
 out_disable_device:
 FUNC_13(VAR_8);
 out:
 return VAR_10;
}
