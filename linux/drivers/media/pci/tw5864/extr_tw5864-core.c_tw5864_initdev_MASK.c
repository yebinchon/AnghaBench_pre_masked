
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw5864_dev {int v4l2_dev; int mmio; struct pci_dev* pci; int slock; int name; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 struct tw5864_dev* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ,int ,int ,char*,struct tw5864_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 char* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (int ,int,char*,char*) ;
 int FUNC_15 (int *) ;
 int VAR_7 ;
 int FUNC_16 (struct tw5864_dev*) ;
 int FUNC_17 (struct tw5864_dev*,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_21(struct pci_dev *VAR_9,
     const struct pci_device_id *VAR_10)
{
 struct tw5864_dev *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(&VAR_9->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 FUNC_14(VAR_11->name, sizeof(VAR_11->name), "tw5864:%s", FUNC_9(VAR_9));

 VAR_12 = FUNC_19(&VAR_9->dev, &VAR_11->v4l2_dev);
 if (VAR_12)
  return VAR_12;


 VAR_11->pci = VAR_9;
 VAR_12 = FUNC_7(VAR_9);
 if (VAR_12) {
  FUNC_1(&VAR_11->pci->dev, "pci_enable_device() failed\n");
  goto unreg_v4l2;
 }

 FUNC_13(VAR_9);

 VAR_12 = FUNC_12(VAR_9, FUNC_0(32));
 if (VAR_12) {
  FUNC_1(&VAR_11->pci->dev, "32 bit PCI DMA is not supported\n");
  goto disable_pci;
 }


 VAR_12 = FUNC_11(VAR_9, VAR_11->name);
 if (VAR_12) {
  FUNC_1(&VAR_11->pci->dev, "Cannot request regions for MMIO\n");
  goto disable_pci;
 }
 VAR_11->mmio = FUNC_8(VAR_9, 0);
 if (!VAR_11->mmio) {
  VAR_12 = -VAR_0;
  FUNC_1(&VAR_11->pci->dev, "can't ioremap() MMIO memory\n");
  goto release_mmio;
 }

 FUNC_15(&VAR_11->slock);

 FUNC_2(&VAR_9->dev, "TW5864 hardware version: %04x\n",
   FUNC_18(VAR_5));
 FUNC_2(&VAR_9->dev, "TW5864 H.264 core version: %04x:%04x\n",
   FUNC_18(VAR_4),
   FUNC_18(VAR_6));

 VAR_12 = FUNC_17(VAR_11, VAR_8);
 if (VAR_12)
  goto unmap_mmio;


 VAR_12 = FUNC_4(&VAR_9->dev, VAR_9->irq, VAR_7,
          VAR_3, "tw5864", VAR_11);
 if (VAR_12 < 0) {
  FUNC_1(&VAR_11->pci->dev, "can't get IRQ %d\n", VAR_9->irq);
  goto fini_video;
 }

 FUNC_2(&VAR_9->dev, "Note: there are known video quality issues. For details\n");
 FUNC_2(&VAR_9->dev, "see the comment in drivers/media/pci/tw5864/tw5864-core.c.\n");

 return 0;

fini_video:
 FUNC_16(VAR_11);
unmap_mmio:
 FUNC_5(VAR_11->mmio);
release_mmio:
 FUNC_10(VAR_9);
disable_pci:
 FUNC_6(VAR_9);
unreg_v4l2:
 FUNC_20(&VAR_11->v4l2_dev);
 return VAR_12;
}
