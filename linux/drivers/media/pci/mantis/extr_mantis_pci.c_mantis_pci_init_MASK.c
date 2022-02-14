
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int irq; int subsystem_device; int subsystem_vendor; int revision; int devfn; TYPE_1__* bus; } ;
struct mantis_pci {int mmio; int mantis_addr; int latency; struct pci_dev* pdev; int revision; struct mantis_hwconfig* hwconfig; } ;
struct mantis_hwconfig {int irq_handler; int dev_type; int model_name; } ;
struct TYPE_2__ {int number; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,char*,...) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ,int *) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,struct mantis_pci*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ,int ,int ,struct mantis_pci*) ;
 int FUNC_16 (int ,int ,int ) ;

int FUNC_17(struct mantis_pci *VAR_6)
{
 u8 VAR_7;
 struct mantis_hwconfig *VAR_8 = VAR_6->hwconfig;
 struct pci_dev *VAR_9 = VAR_6->pdev;
 int VAR_10, VAR_11 = 0;

 FUNC_3(VAR_4, 0, "found a %s PCI %s device on (%02x:%02x.%x),\n",
  VAR_8->model_name,
  VAR_8->dev_type,
  VAR_6->pdev->bus->number,
  FUNC_2(VAR_6->pdev->devfn),
  FUNC_1(VAR_6->pdev->devfn));

 VAR_10 = FUNC_7(VAR_9);
 if (VAR_10 != 0) {
  VAR_11 = -VAR_1;
  FUNC_3(VAR_4, 1, "ERROR: PCI enable failed <%i>", VAR_10);
  goto fail0;
 }

 VAR_10 = FUNC_11(VAR_9, FUNC_0(32));
 if (VAR_10 != 0) {
  FUNC_3(VAR_4, 1, "ERROR: Unable to obtain 32 bit DMA <%i>", VAR_10);
  VAR_11 = -VAR_2;
  goto fail1;
 }

 FUNC_13(VAR_9);

 if (!FUNC_16(FUNC_10(VAR_9, 0),
    FUNC_9(VAR_9, 0),
    VAR_0)) {

  FUNC_3(VAR_4, 1, "ERROR: BAR0 Request failed !");
  VAR_11 = -VAR_1;
  goto fail1;
 }

 VAR_6->mmio = FUNC_4(FUNC_10(VAR_9, 0),
          FUNC_9(VAR_9, 0));

 if (!VAR_6->mmio) {
  FUNC_3(VAR_4, 1, "ERROR: BAR0 remap failed !");
  VAR_11 = -VAR_1;
  goto fail2;
 }

 FUNC_8(VAR_9, VAR_5, &VAR_7);
 VAR_6->latency = VAR_7;
 VAR_6->revision = VAR_9->revision;

 FUNC_3(VAR_4, 0, "    Mantis Rev %d [%04x:%04x], ",
  VAR_6->revision,
  VAR_6->pdev->subsystem_vendor,
  VAR_6->pdev->subsystem_device);

 FUNC_3(VAR_4, 0,
  "irq: %d, latency: %d\n    memory: 0x%lx, mmio: 0x%p\n",
  VAR_6->pdev->irq,
  VAR_6->latency,
  VAR_6->mantis_addr,
  VAR_6->mmio);

 VAR_10 = FUNC_15(VAR_9->irq,
     VAR_8->irq_handler,
     VAR_3,
     VAR_0,
     VAR_6);

 if (VAR_10 != 0) {

  FUNC_3(VAR_4, 1, "ERROR: IRQ registration failed ! <%d>", VAR_10);
  VAR_11 = -VAR_1;
  goto fail3;
 }

 FUNC_12(VAR_9, VAR_6);
 return VAR_11;


fail3:
 FUNC_3(VAR_4, 1, "ERROR: <%d> I/O unmap", VAR_11);
 if (VAR_6->mmio)
  FUNC_5(VAR_6->mmio);

fail2:
 FUNC_3(VAR_4, 1, "ERROR: <%d> releasing regions", VAR_11);
 FUNC_14(FUNC_10(VAR_9, 0),
      FUNC_9(VAR_9, 0));

fail1:
 FUNC_3(VAR_4, 1, "ERROR: <%d> disabling device", VAR_11);
 FUNC_6(VAR_9);

fail0:
 FUNC_3(VAR_4, 1, "ERROR: <%d> exiting", VAR_11);
 return VAR_11;
}
