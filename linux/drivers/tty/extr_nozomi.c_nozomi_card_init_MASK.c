
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ops; } ;
struct port {int fifo_ul; TYPE_1__ port; struct nozomi* dc; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct nozomi {int index_start; int base_addr; struct nozomi* send_buf; struct port* port; int state; int reg_ier; scalar_t__ last_ier; int spin_mutex; int card_type; struct pci_dev* pdev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct nozomi**) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct device*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,...) ;
 int VAR_12 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct nozomi*) ;
 struct nozomi* FUNC_11 (int ,int ) ;
 struct nozomi* FUNC_12 (int,int ) ;
 int FUNC_13 (struct nozomi*) ;
 struct nozomi** VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (struct nozomi*) ;
 int FUNC_15 (struct nozomi*) ;
 int VAR_15 ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*,int ,int ) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*,int ) ;
 int FUNC_21 (struct pci_dev*,struct nozomi*) ;
 int FUNC_22 (int ,int *,int ,int ,struct nozomi*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (TYPE_1__*) ;
 struct device* FUNC_26 (TYPE_1__*,int ,int,int *) ;
 int FUNC_27 (int ,int) ;
 scalar_t__ FUNC_28 (int) ;
 int FUNC_29 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_30(struct pci_dev *VAR_16,
          const struct pci_device_id *VAR_17)
{
 int VAR_18;
 struct nozomi *VAR_19 = ((void*)0);
 int VAR_20;
 int VAR_21;

 FUNC_4(&VAR_16->dev, "Init, new card found\n");

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_13); VAR_20++)
  if (!VAR_13[VAR_20])
   break;

 if (VAR_20 >= FUNC_0(VAR_13)) {
  FUNC_5(&VAR_16->dev, "no free tty range for this card left\n");
  VAR_18 = -VAR_0;
  goto err;
 }

 VAR_19 = FUNC_12(sizeof(struct nozomi), VAR_4);
 if (FUNC_28(!VAR_19)) {
  FUNC_5(&VAR_16->dev, "Could not allocate memory\n");
  VAR_18 = -VAR_2;
  goto err_free;
 }

 VAR_19->pdev = VAR_16;

 VAR_18 = FUNC_17(VAR_19->pdev);
 if (VAR_18) {
  FUNC_5(&VAR_16->dev, "Failed to enable PCI Device\n");
  goto err_free;
 }

 VAR_18 = FUNC_20(VAR_19->pdev, VAR_7);
 if (VAR_18) {
  FUNC_5(&VAR_16->dev, "I/O address 0x%04x already in use\n",
   (int) 0);
  goto err_disable_device;
 }


 FUNC_14(VAR_19);

 VAR_19->base_addr = FUNC_18(VAR_19->pdev, 0, VAR_19->card_type);
 if (!VAR_19->base_addr) {
  FUNC_5(&VAR_16->dev, "Unable to map card MMIO\n");
  VAR_18 = -VAR_1;
  goto err_rel_regs;
 }

 VAR_19->send_buf = FUNC_11(VAR_11, VAR_4);
 if (!VAR_19->send_buf) {
  FUNC_5(&VAR_16->dev, "Could not allocate send buffer?\n");
  VAR_18 = -VAR_2;
  goto err_free_sbuf;
 }

 for (VAR_21 = VAR_9; VAR_21 < VAR_6; VAR_21++) {
  if (FUNC_8(&VAR_19->port[VAR_21].fifo_ul, VAR_3,
     VAR_4)) {
   FUNC_5(&VAR_16->dev,
     "Could not allocate kfifo buffer\n");
   VAR_18 = -VAR_2;
   goto err_free_kfifo;
  }
 }

 FUNC_23(&VAR_19->spin_mutex);

 FUNC_15(VAR_19);


 VAR_19->last_ier = 0;
 FUNC_29(VAR_19->last_ier, VAR_19->reg_ier);

 VAR_18 = FUNC_22(VAR_16->irq, &VAR_12, VAR_5,
   VAR_7, VAR_19);
 if (FUNC_28(VAR_18)) {
  FUNC_5(&VAR_16->dev, "can't request irq %d\n", VAR_16->irq);
  goto err_free_kfifo;
 }

 FUNC_1("base_addr: %p", VAR_19->base_addr);

 FUNC_13(VAR_19);

 VAR_19->index_start = VAR_20 * VAR_6;
 VAR_13[VAR_20] = VAR_19;

 FUNC_21(VAR_16, VAR_19);


 VAR_19->last_ier = VAR_10;
 FUNC_7(VAR_19->last_ier, VAR_19->reg_ier);

 VAR_19->state = VAR_8;

 for (VAR_21 = 0; VAR_21 < VAR_6; VAR_21++) {
  struct device *VAR_22;
  struct port *VAR_23 = &VAR_19->port[VAR_21];
  VAR_23->dc = VAR_19;
  FUNC_25(&VAR_23->port);
  VAR_23->port.ops = &VAR_14;
  VAR_22 = FUNC_26(&VAR_23->port, VAR_15,
    VAR_19->index_start + VAR_21, &VAR_16->dev);

  if (FUNC_2(VAR_22)) {
   VAR_18 = FUNC_3(VAR_22);
   FUNC_5(&VAR_16->dev, "Could not allocate tty?\n");
   FUNC_24(&VAR_23->port);
   goto err_free_tty;
  }
 }

 return 0;

err_free_tty:
 for (VAR_21 = 0; VAR_21 < VAR_6; ++VAR_21) {
  FUNC_27(VAR_15, VAR_19->index_start + VAR_21);
  FUNC_24(&VAR_19->port[VAR_21].port);
 }
err_free_kfifo:
 for (VAR_21 = 0; VAR_21 < VAR_6; VAR_21++)
  FUNC_9(&VAR_19->port[VAR_21].fifo_ul);
err_free_sbuf:
 FUNC_10(VAR_19->send_buf);
 FUNC_6(VAR_19->base_addr);
err_rel_regs:
 FUNC_19(VAR_16);
err_disable_device:
 FUNC_16(VAR_16);
err_free:
 FUNC_10(VAR_19);
err:
 return VAR_18;
}
