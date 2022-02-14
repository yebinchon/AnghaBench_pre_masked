
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_pcibk_device {int dummy; } ;
struct pcistub_device {int lock; struct pci_dev* dev; struct xen_pcibk_device* pdev; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pcistub_device*) ;
 int FUNC_1 (struct pcistub_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct pci_dev *FUNC_4(struct xen_pcibk_device *VAR_0,
        struct pcistub_device *VAR_1)
{
 struct pci_dev *VAR_2 = ((void*)0);
 unsigned long VAR_3;

 FUNC_0(VAR_1);

 FUNC_2(&VAR_1->lock, VAR_3);
 if (!VAR_1->pdev) {
  VAR_1->pdev = VAR_0;
  VAR_2 = VAR_1->dev;
 }
 FUNC_3(&VAR_1->lock, VAR_3);

 if (!VAR_2)
  FUNC_1(VAR_1);

 return VAR_2;
}
