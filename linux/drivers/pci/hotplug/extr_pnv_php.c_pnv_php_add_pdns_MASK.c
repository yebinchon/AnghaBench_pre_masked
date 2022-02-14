
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_php_slot {int dn; int bus; } ;
struct pci_controller {int dummy; } ;


 struct pci_controller* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct pci_controller*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct pnv_php_slot *VAR_1)
{
 struct pci_controller *VAR_2 = FUNC_0(VAR_1->bus);

 FUNC_1(VAR_1->dn, VAR_0, VAR_2);
}
