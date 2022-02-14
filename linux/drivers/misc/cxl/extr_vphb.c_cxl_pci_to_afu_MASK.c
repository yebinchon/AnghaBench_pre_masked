
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int bus; } ;
struct pci_controller {scalar_t__ private_data; } ;
struct cxl_afu {int dummy; } ;


 struct pci_controller* FUNC_0 (int ) ;

struct cxl_afu *FUNC_1(struct pci_dev *VAR_0)
{
 struct pci_controller *VAR_1;

 VAR_1 = FUNC_0(VAR_0->bus);

 return (struct cxl_afu *)VAR_1->private_data;
}
