
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_pci_device {int modern_bars; int common; int isr; int notify_base; int device; struct pci_dev* pci_dev; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,int ) ;

void FUNC_2(struct virtio_pci_device *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pci_dev;

 if (VAR_0->device)
  FUNC_0(VAR_1, VAR_0->device);
 if (VAR_0->notify_base)
  FUNC_0(VAR_1, VAR_0->notify_base);
 FUNC_0(VAR_1, VAR_0->isr);
 FUNC_0(VAR_1, VAR_0->common);
 FUNC_1(VAR_1, VAR_0->modern_bars);
}
