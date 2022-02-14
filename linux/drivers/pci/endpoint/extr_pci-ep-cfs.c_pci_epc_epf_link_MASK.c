
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_epf_group {struct pci_epf* epf; } ;
struct pci_epf {scalar_t__ func_no; } ;
struct pci_epc_group {int function_num_map; struct pci_epc* epc; } ;
struct pci_epc {int dummy; } ;
struct config_item {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct pci_epc*,struct pci_epf*) ;
 int FUNC_3 (struct pci_epc*,struct pci_epf*) ;
 int FUNC_4 (struct pci_epf*) ;
 int FUNC_5 (scalar_t__,int *) ;
 struct pci_epc_group* FUNC_6 (struct config_item*) ;
 struct pci_epf_group* FUNC_7 (struct config_item*) ;

__attribute__((used)) static int FUNC_8(struct config_item *VAR_2,
       struct config_item *VAR_3)
{
 int VAR_4;
 u32 VAR_5 = 0;
 struct pci_epf_group *VAR_6 = FUNC_7(VAR_3);
 struct pci_epc_group *VAR_7 = FUNC_6(VAR_2);
 struct pci_epc *VAR_8 = VAR_7->epc;
 struct pci_epf *VAR_9 = VAR_6->epf;

 VAR_5 = FUNC_1(&VAR_7->function_num_map,
          VAR_0);
 if (VAR_5 >= VAR_0)
  return -VAR_1;

 FUNC_5(VAR_5, &VAR_7->function_num_map);
 VAR_9->func_no = VAR_5;

 VAR_4 = FUNC_2(VAR_8, VAR_9);
 if (VAR_4)
  goto err_add_epf;

 VAR_4 = FUNC_4(VAR_9);
 if (VAR_4)
  goto err_epf_bind;

 return 0;

err_epf_bind:
 FUNC_3(VAR_8, VAR_9);

err_add_epf:
 FUNC_0(VAR_5, &VAR_7->function_num_map);

 return VAR_4;
}
