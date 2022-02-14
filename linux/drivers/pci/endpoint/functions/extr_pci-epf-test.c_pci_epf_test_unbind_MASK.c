
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epf_test {scalar_t__* reg; int cmd_handler; } ;
struct pci_epf_bar {int dummy; } ;
struct pci_epf {int func_no; struct pci_epf_bar* bar; struct pci_epc* epc; } ;
struct pci_epc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct pci_epf_test* FUNC_1 (struct pci_epf*) ;
 int FUNC_2 (struct pci_epc*,int ,struct pci_epf_bar*) ;
 int FUNC_3 (struct pci_epc*) ;
 int FUNC_4 (struct pci_epf*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct pci_epf *VAR_2)
{
 struct pci_epf_test *VAR_3 = FUNC_1(VAR_2);
 struct pci_epc *VAR_4 = VAR_2->epc;
 struct pci_epf_bar *VAR_5;
 int VAR_6;

 FUNC_0(&VAR_3->cmd_handler);
 FUNC_3(VAR_4);
 for (VAR_6 = VAR_0; VAR_6 <= VAR_1; VAR_6++) {
  VAR_5 = &VAR_2->bar[VAR_6];

  if (VAR_3->reg[VAR_6]) {
   FUNC_2(VAR_4, VAR_2->func_no, VAR_5);
   FUNC_4(VAR_2, VAR_3->reg[VAR_6], VAR_6);
  }
 }
}
