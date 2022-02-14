
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_group {int dummy; } ;
struct pci_epc_group {struct pci_epc* epc; struct config_group group; } ;
struct pci_epc {int dummy; } ;


 int VAR_0 ;
 struct config_group* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct pci_epc*) ;
 int FUNC_2 (struct pci_epc*) ;
 int FUNC_3 (struct config_group*,char const*,int *) ;
 int FUNC_4 (int ,struct config_group*) ;
 int FUNC_5 (struct config_group*) ;
 int VAR_2 ;
 int FUNC_6 (struct pci_epc_group*) ;
 struct pci_epc_group* FUNC_7 (int,int ) ;
 struct pci_epc* FUNC_8 (char const*) ;
 int VAR_3 ;
 int FUNC_9 (char*,char const*) ;

struct config_group *FUNC_10(const char *VAR_4)
{
 int VAR_5;
 struct pci_epc *VAR_6;
 struct config_group *VAR_7;
 struct pci_epc_group *VAR_8;

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  VAR_5 = -VAR_0;
  goto err;
 }

 VAR_7 = &VAR_8->group;

 FUNC_3(VAR_7, VAR_4, &VAR_3);
 VAR_5 = FUNC_4(VAR_2, VAR_7);
 if (VAR_5) {
  FUNC_9("failed to register configfs group for %s\n", VAR_4);
  goto err_register_group;
 }

 VAR_6 = FUNC_8(VAR_4);
 if (FUNC_1(VAR_6)) {
  VAR_5 = FUNC_2(VAR_6);
  goto err_epc_get;
 }

 VAR_8->epc = VAR_6;

 return VAR_7;

err_epc_get:
 FUNC_5(VAR_7);

err_register_group:
 FUNC_6(VAR_8);

err:
 return FUNC_0(VAR_5);
}
