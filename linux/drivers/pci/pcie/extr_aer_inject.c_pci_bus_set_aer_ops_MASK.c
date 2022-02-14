
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_ops {int dummy; } ;
struct pci_bus_ops {int list; } ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_ops VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_bus_ops*) ;
 struct pci_bus_ops* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct pci_bus_ops*,struct pci_bus*,struct pci_ops*) ;
 int VAR_4 ;
 struct pci_ops* FUNC_4 (struct pci_bus*,struct pci_ops*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct pci_bus *VAR_5)
{
 struct pci_ops *VAR_6;
 struct pci_bus_ops *VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_6 = FUNC_4(VAR_5, &VAR_2);
 FUNC_5(&VAR_3, VAR_8);
 if (VAR_6 == &VAR_2)
  goto out;
 FUNC_3(VAR_7, VAR_5, VAR_6);
 FUNC_2(&VAR_7->list, &VAR_4);
 VAR_7 = ((void*)0);
out:
 FUNC_6(&VAR_3, VAR_8);
 FUNC_0(VAR_7);
 return 0;
}
