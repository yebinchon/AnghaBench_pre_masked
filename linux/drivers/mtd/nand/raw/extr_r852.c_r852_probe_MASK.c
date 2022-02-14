
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int strength; int read_oob; int correct; int calculate; int hwctl; int bytes; int size; int mode; } ;
struct TYPE_3__ {int write_buf; int read_buf; int read_byte; int dev_ready; int waitfunc; int cmd_ctrl; } ;
struct r852_device {int phys_bounce_buffer; int bounce_buffer; int mmio; struct r852_device* tmp_buffer; int card_workqueue; int card_detect_work; scalar_t__ card_detected; int irqlock; int irq; int dma_done; struct pci_dev* pci_dev; struct r852_device* chip; TYPE_2__ ecc; TYPE_1__ legacy; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct nand_chip {int phys_bounce_buffer; int bounce_buffer; int mmio; struct nand_chip* tmp_buffer; int card_workqueue; int card_detect_work; scalar_t__ card_detected; int irqlock; int irq; int dma_done; struct pci_dev* pci_dev; struct nand_chip* chip; TYPE_2__ ecc; TYPE_1__ legacy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *,int ) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct r852_device*) ;
 void* FUNC_9 (int,int ) ;
 int FUNC_10 (struct r852_device*,struct r852_device*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*,struct r852_device*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int ,int *,int ) ;
 int VAR_9 ;
 int FUNC_21 (struct r852_device*) ;
 int VAR_10 ;
 int FUNC_22 (struct r852_device*) ;
 int FUNC_23 (struct r852_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_24 (struct r852_device*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_25 (int ,int *,int ,int ,struct r852_device*) ;
 int FUNC_26 (int *) ;

__attribute__((used)) static int FUNC_27(struct pci_dev *VAR_21, const struct pci_device_id *VAR_22)
{
 int VAR_23;
 struct nand_chip *VAR_24;
 struct r852_device *VAR_25;


 VAR_23 = FUNC_12(VAR_21);

 if (VAR_23)
  goto error1;

 FUNC_18(VAR_21);

 VAR_23 = FUNC_6(&VAR_21->dev, FUNC_0(32));
 if (VAR_23)
  goto error2;

 VAR_23 = FUNC_16(VAR_21, VAR_0);

 if (VAR_23)
  goto error3;

 VAR_23 = -VAR_2;


 VAR_24 = FUNC_9(sizeof(struct nand_chip), VAR_3);

 if (!VAR_24)
  goto error4;


 VAR_24->legacy.cmd_ctrl = VAR_10;
 VAR_24->legacy.waitfunc = VAR_19;
 VAR_24->legacy.dev_ready = VAR_18;


 VAR_24->legacy.read_byte = VAR_16;
 VAR_24->legacy.read_buf = VAR_15;
 VAR_24->legacy.write_buf = VAR_20;


 VAR_24->ecc.mode = VAR_5;
 VAR_24->ecc.size = VAR_6;
 VAR_24->ecc.bytes = VAR_7;
 VAR_24->ecc.strength = 2;
 VAR_24->ecc.hwctl = VAR_13;
 VAR_24->ecc.calculate = VAR_11;
 VAR_24->ecc.correct = VAR_12;


 VAR_24->ecc.read_oob = VAR_17;


 VAR_25 = FUNC_9(sizeof(struct r852_device), VAR_3);

 if (!VAR_25)
  goto error5;

 FUNC_10(VAR_24, VAR_25);
 VAR_25->chip = VAR_24;
 VAR_25->pci_dev = VAR_21;
 FUNC_17(VAR_21, VAR_25);

 VAR_25->bounce_buffer = FUNC_4(&VAR_21->dev, VAR_6,
  &VAR_25->phys_bounce_buffer, VAR_3);

 if (!VAR_25->bounce_buffer)
  goto error6;


 VAR_23 = -VAR_1;
 VAR_25->mmio = FUNC_13(VAR_21, 0);

 if (!VAR_25->mmio)
  goto error7;

 VAR_23 = -VAR_2;
 VAR_25->tmp_buffer = FUNC_9(VAR_8, VAR_3);

 if (!VAR_25->tmp_buffer)
  goto error8;

 FUNC_7(&VAR_25->dma_done);

 VAR_25->card_workqueue = FUNC_2(VAR_0);

 if (!VAR_25->card_workqueue)
  goto error9;

 FUNC_1(&VAR_25->card_detect_work, VAR_9);


 FUNC_24(VAR_25);
 FUNC_22(VAR_25);

 FUNC_23(VAR_25);

 VAR_25->irq = VAR_21->irq;
 FUNC_26(&VAR_25->irqlock);

 VAR_25->card_detected = 0;
 FUNC_21(VAR_25);


 VAR_23 = -VAR_1;
 if (FUNC_25(VAR_21->irq, &VAR_14, VAR_4,
     VAR_0, VAR_25))
  goto error10;


 FUNC_20(VAR_25->card_workqueue,
  &VAR_25->card_detect_work, 0);


 FUNC_19("driver loaded successfully\n");
 return 0;

error10:
 FUNC_3(VAR_25->card_workqueue);
error9:
 FUNC_8(VAR_25->tmp_buffer);
error8:
 FUNC_14(VAR_21, VAR_25->mmio);
error7:
 FUNC_5(&VAR_21->dev, VAR_6, VAR_25->bounce_buffer,
     VAR_25->phys_bounce_buffer);
error6:
 FUNC_8(VAR_25);
error5:
 FUNC_8(VAR_24);
error4:
 FUNC_15(VAR_21);
error3:
error2:
 FUNC_11(VAR_21);
error1:
 return VAR_23;
}
