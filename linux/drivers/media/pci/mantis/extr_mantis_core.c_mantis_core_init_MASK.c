
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mantis_pci {int mantis_mmio; int mantis_addr; int latency; TYPE_3__* pdev; int subsystem_device; int subsystem_vendor; int revision; TYPE_1__* hwconfig; } ;
struct TYPE_6__ {int irq; int devfn; TYPE_2__* bus; } ;
struct TYPE_5__ {int number; } ;
struct TYPE_4__ {int dev_type; int model_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,char*,...) ;
 int FUNC_3 (struct mantis_pci*) ;
 int FUNC_4 (struct mantis_pci*) ;
 int FUNC_5 (struct mantis_pci*) ;
 int FUNC_6 (struct mantis_pci*) ;
 int FUNC_7 (struct mantis_pci*) ;
 int FUNC_8 (struct mantis_pci*) ;
 int VAR_2 ;

int FUNC_9(struct mantis_pci *VAR_3)
{
 int VAR_4 = 0;

 FUNC_7(VAR_3);
 FUNC_2(VAR_2, VAR_1, 0, "found a %s PCI %s device on (%02x:%02x.%x),\n",
  VAR_3->hwconfig->model_name, VAR_3->hwconfig->dev_type,
  VAR_3->pdev->bus->number, FUNC_1(VAR_3->pdev->devfn), FUNC_0(VAR_3->pdev->devfn));
 FUNC_2(VAR_2, VAR_1, 0, "    Mantis Rev %d [%04x:%04x], ",
  VAR_3->revision,
  VAR_3->subsystem_vendor, VAR_3->subsystem_device);
 FUNC_2(VAR_2, VAR_1, 0,
  "irq: %d, latency: %d\n    memory: 0x%lx, mmio: 0x%p\n",
  VAR_3->pdev->irq, VAR_3->latency,
  VAR_3->mantis_addr, VAR_3->mantis_mmio);

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2, VAR_1, 1, "Mantis I2C init failed");
  return VAR_4;
 }
 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2, VAR_1, 1, "get MAC address failed");
  return VAR_4;
 }
 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2, VAR_1, 1, "Mantis DMA init failed");
  return VAR_4;
 }
 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2, VAR_0, 1, "Mantis DVB init failed");
  return VAR_4;
 }
 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2, VAR_0, 1, "Mantis UART init failed");
  return VAR_4;
 }

 return 0;
}
