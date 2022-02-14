
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epf_group {struct pci_epf* epf; } ;
struct pci_epf {int func_no; } ;
struct pci_epc_group {int function_num_map; struct pci_epc* epc; int start; } ;
struct pci_epc {int dummy; } ;
struct config_item {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct pci_epc*,struct pci_epf*) ;
 int FUNC_3 (struct pci_epf*) ;
 struct pci_epc_group* FUNC_4 (struct config_item*) ;
 struct pci_epf_group* FUNC_5 (struct config_item*) ;

__attribute__((used)) static void FUNC_6(struct config_item *VAR_0,
          struct config_item *VAR_1)
{
 struct pci_epc *VAR_2;
 struct pci_epf *VAR_3;
 struct pci_epf_group *VAR_4 = FUNC_5(VAR_1);
 struct pci_epc_group *VAR_5 = FUNC_4(VAR_0);

 FUNC_0(VAR_5->start);

 VAR_2 = VAR_5->epc;
 VAR_3 = VAR_4->epf;
 FUNC_1(VAR_3->func_no, &VAR_5->function_num_map);
 FUNC_3(VAR_3);
 FUNC_2(VAR_2, VAR_3);
}
