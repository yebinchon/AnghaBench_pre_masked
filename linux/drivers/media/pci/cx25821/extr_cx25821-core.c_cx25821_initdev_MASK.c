
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; int dev; } ;
struct cx25821_dev {int v4l2_dev; int name; scalar_t__ base_io_addr; int pci_lat; int pci_rev; struct pci_dev* pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cx25821_dev*) ;
 int FUNC_1 (struct cx25821_dev*) ;
 int VAR_6 ;
 int FUNC_2 (struct cx25821_dev*) ;
 struct cx25821_dev* FUNC_3 (int,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ,int *) ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (char*,int ,...) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int ,int ,int ,int ,struct cx25821_dev*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct pci_dev *VAR_7,
      const struct pci_device_id *VAR_8)
{
 struct cx25821_dev *VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 if (((void*)0) == VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_13(&VAR_7->dev, &VAR_9->v4l2_dev);
 if (VAR_10 < 0)
  goto fail_free;


 VAR_9->pci = VAR_7;
 if (FUNC_5(VAR_7)) {
  VAR_10 = -VAR_0;

  FUNC_11("pci enable failed!\n");

  goto fail_unregister_device;
 }

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10)
  goto fail_unregister_pci;


 FUNC_7(VAR_7, VAR_4, &VAR_9->pci_rev);
 FUNC_7(VAR_7, VAR_5, &VAR_9->pci_lat);
 FUNC_11("%s/0: found at %s, rev: %d, irq: %d, latency: %d, mmio: 0x%llx\n",
  VAR_9->name, FUNC_6(VAR_7), VAR_9->pci_rev, VAR_7->irq,
  VAR_9->pci_lat, (unsigned long long)VAR_9->base_io_addr);

 FUNC_9(VAR_7);
 VAR_10 = FUNC_8(VAR_7, 0xffffffff);
 if (VAR_10) {
  FUNC_10("%s/0: Oops: no 32bit PCI DMA ???\n", VAR_9->name);
  VAR_10 = -VAR_0;
  goto fail_irq;
 }

 VAR_10 = FUNC_12(VAR_7->irq, VAR_6,
   VAR_3, VAR_9->name, VAR_9);

 if (VAR_10 < 0) {
  FUNC_10("%s: can't get IRQ %d\n", VAR_9->name, VAR_7->irq);
  goto fail_irq;
 }

 return 0;

fail_irq:
 FUNC_11("cx25821_initdev() can't get IRQ !\n");
 FUNC_1(VAR_9);

fail_unregister_pci:
 FUNC_4(VAR_7);
fail_unregister_device:
 FUNC_14(&VAR_9->v4l2_dev);

fail_free:
 FUNC_2(VAR_9);
 return VAR_10;
}
