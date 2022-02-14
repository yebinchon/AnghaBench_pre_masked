
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {struct cxl_afu* private_data; } ;
struct pci_bus {int dummy; } ;
struct cxl_afu {int dummy; } ;


 struct pci_controller* FUNC_0 (struct pci_bus*) ;

__attribute__((used)) static inline struct cxl_afu *FUNC_1(struct pci_bus *VAR_0)
{
 struct pci_controller *VAR_1 = VAR_0 ? FUNC_0(VAR_0) : ((void*)0);

 return VAR_1 ? VAR_1->private_data : ((void*)0);
}
