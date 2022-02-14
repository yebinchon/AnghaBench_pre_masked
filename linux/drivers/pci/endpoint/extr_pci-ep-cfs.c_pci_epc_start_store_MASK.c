
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epc_group {int start; struct pci_epc* epc; } ;
struct pci_epc {int dev; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (struct pci_epc*) ;
 int FUNC_3 (struct pci_epc*) ;
 struct pci_epc_group* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_1, const char *VAR_2,
       size_t VAR_3)
{
 int VAR_4;
 bool VAR_5;
 struct pci_epc *VAR_6;
 struct pci_epc_group *VAR_7 = FUNC_4(VAR_1);

 VAR_6 = VAR_7->epc;

 VAR_4 = FUNC_1(VAR_2, &VAR_5);
 if (VAR_4)
  return VAR_4;

 if (!VAR_5) {
  FUNC_3(VAR_6);
  return VAR_3;
 }

 VAR_4 = FUNC_2(VAR_6);
 if (VAR_4) {
  FUNC_0(&VAR_6->dev, "failed to start endpoint controller\n");
  return -VAR_0;
 }

 VAR_7->start = VAR_5;

 return VAR_3;
}
