
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {int bus; } ;
struct cxl_afu {struct pci_controller* phb; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct cxl_afu *VAR_0)
{
 struct pci_controller *VAR_1;


 if (!VAR_0 || !VAR_0->phb)
  return;

 VAR_1 = VAR_0->phb;
 VAR_0->phb = ((void*)0);

 FUNC_0(VAR_1->bus);




}
