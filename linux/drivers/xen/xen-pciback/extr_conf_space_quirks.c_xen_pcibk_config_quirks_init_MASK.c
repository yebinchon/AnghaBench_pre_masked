
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long driver_data; scalar_t__ class_mask; scalar_t__ class; int subdevice; int subvendor; int device; int vendor; } ;
struct xen_pcibk_config_quirk {struct pci_dev* pdev; TYPE_1__ devid; } ;
struct pci_dev {int subsystem_device; int subsystem_vendor; int device; int vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xen_pcibk_config_quirk* FUNC_0 (int,int ) ;
 int FUNC_1 (struct xen_pcibk_config_quirk*) ;

int FUNC_2(struct pci_dev *VAR_2)
{
 struct xen_pcibk_config_quirk *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3) {
  VAR_4 = -VAR_0;
  goto out;
 }

 VAR_3->devid.vendor = VAR_2->vendor;
 VAR_3->devid.device = VAR_2->device;
 VAR_3->devid.subvendor = VAR_2->subsystem_vendor;
 VAR_3->devid.subdevice = VAR_2->subsystem_device;
 VAR_3->devid.class = 0;
 VAR_3->devid.class_mask = 0;
 VAR_3->devid.driver_data = 0UL;

 VAR_3->pdev = VAR_2;

 FUNC_1(VAR_3);
out:
 return VAR_4;
}
