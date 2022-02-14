
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; int revision; int dev; } ;
struct TYPE_3__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct cx23885_dev {int board; TYPE_1__ v4l2_dev; int name; int pci_lat; int pci_rev; struct pci_dev* pci; struct v4l2_ctrl_handler ctrl_handler; int need_dma_reset; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct cx23885_dev*) ;
 int FUNC_1 (struct cx23885_dev*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct cx23885_dev*) ;
 int FUNC_4 (struct cx23885_dev*) ;
 int VAR_8 ;
 int FUNC_5 (struct cx23885_dev*,int) ;
 int FUNC_6 (struct cx23885_dev*) ;
 int FUNC_7 (struct cx23885_dev*) ;
 struct cx23885_dev* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ,int *) ;
 scalar_t__ FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (char*,int ,...) ;
 int FUNC_16 (char*,int ,int ,int ,int ,int ,unsigned long long) ;
 int FUNC_17 (int ,int ,int ,int ,struct cx23885_dev*) ;
 int FUNC_18 (struct v4l2_ctrl_handler*) ;
 int FUNC_19 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_20 (int *,TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_22(struct pci_dev *VAR_9,
      const struct pci_device_id *VAR_10)
{
 struct cx23885_dev *VAR_11;
 struct v4l2_ctrl_handler *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_3);
 if (((void*)0) == VAR_11)
  return -VAR_2;

 VAR_11->need_dma_reset = FUNC_2();

 VAR_13 = FUNC_20(&VAR_9->dev, &VAR_11->v4l2_dev);
 if (VAR_13 < 0)
  goto fail_free;

 VAR_12 = &VAR_11->ctrl_handler;
 FUNC_19(VAR_12, 6);
 if (VAR_12->error) {
  VAR_13 = VAR_12->error;
  goto fail_ctrl;
 }
 VAR_11->v4l2_dev.ctrl_handler = VAR_12;


 FUNC_6(VAR_11);


 VAR_11->pci = VAR_9;
 if (FUNC_9(VAR_9)) {
  VAR_13 = -VAR_1;
  goto fail_ctrl;
 }

 if (FUNC_0(VAR_11) < 0) {
  VAR_13 = -VAR_0;
  goto fail_ctrl;
 }


 VAR_11->pci_rev = VAR_9->revision;
 FUNC_11(VAR_9, VAR_5, &VAR_11->pci_lat);
 FUNC_16("%s/0: found at %s, rev: %d, irq: %d, latency: %d, mmio: 0x%llx\n",
        VAR_11->name,
        FUNC_10(VAR_9), VAR_11->pci_rev, VAR_9->irq,
        VAR_11->pci_lat,
  (unsigned long long)FUNC_12(VAR_9, 0));

 FUNC_14(VAR_9);
 VAR_13 = FUNC_13(VAR_9, 0xffffffff);
 if (VAR_13) {
  FUNC_15("%s/0: Oops: no 32bit PCI DMA ???\n", VAR_11->name);
  goto fail_ctrl;
 }

 VAR_13 = FUNC_17(VAR_9->irq, VAR_8,
     VAR_4, VAR_11->name, VAR_11);
 if (VAR_13 < 0) {
  FUNC_15("%s: can't get IRQ %d\n",
         VAR_11->name, VAR_9->irq);
  goto fail_irq;
 }

 switch (VAR_11->board) {
 case 129:
  FUNC_5(VAR_11, VAR_7 | VAR_6);
  break;
 case 128:
  FUNC_5(VAR_11, VAR_6);
  break;
 }






 FUNC_4(VAR_11);
 FUNC_3(VAR_11);

 return 0;

fail_irq:
 FUNC_1(VAR_11);
fail_ctrl:
 FUNC_18(VAR_12);
 FUNC_21(&VAR_11->v4l2_dev);
fail_free:
 FUNC_7(VAR_11);
 return VAR_13;
}
