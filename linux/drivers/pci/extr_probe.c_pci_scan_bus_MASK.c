
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_ops {int dummy; } ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 struct pci_bus* FUNC_2 (int *,int,struct pci_ops*,void*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_bus*) ;
 int VAR_3 ;

struct pci_bus *FUNC_5(int VAR_4, struct pci_ops *VAR_5,
     void *VAR_6)
{
 FUNC_0(VAR_3);
 struct pci_bus *VAR_7;

 FUNC_1(&VAR_3, &VAR_2);
 FUNC_1(&VAR_3, &VAR_1);
 FUNC_1(&VAR_3, &VAR_0);
 VAR_7 = FUNC_2(((void*)0), VAR_4, VAR_5, VAR_6, &VAR_3);
 if (VAR_7) {
  FUNC_4(VAR_7);
 } else {
  FUNC_3(&VAR_3);
 }
 return VAR_7;
}
