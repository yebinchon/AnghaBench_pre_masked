
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_dev {struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;



struct pci_dev *FUNC_0(struct vnic_dev *VAR_0)
{
 return VAR_0->pdev;
}
