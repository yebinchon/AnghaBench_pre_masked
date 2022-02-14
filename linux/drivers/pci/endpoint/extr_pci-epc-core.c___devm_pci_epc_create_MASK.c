
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epc_ops {int dummy; } ;
struct pci_epc {int dummy; } ;
struct module {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct pci_epc* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct pci_epc*) ;
 struct pci_epc* FUNC_2 (struct device*,struct pci_epc_ops const*,struct module*) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,struct pci_epc**) ;
 struct pci_epc** FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct pci_epc**) ;

struct pci_epc *
FUNC_6(struct device *VAR_3, const struct pci_epc_ops *VAR_4,
        struct module *VAR_5)
{
 struct pci_epc **VAR_6, *VAR_7;

 VAR_6 = FUNC_4(VAR_2, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (!FUNC_1(VAR_7)) {
  *VAR_6 = VAR_7;
  FUNC_3(VAR_3, VAR_6);
 } else {
  FUNC_5(VAR_6);
 }

 return VAR_7;
}
