
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {scalar_t__ vendor; int device; } ;
struct pci_bus {struct pci_dev* self; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_bus*,int,int *,int) ;
 int FUNC_1 (struct pci_bus*,int,int *,int) ;

bool FUNC_2(struct pci_bus *VAR_1, int VAR_2, u32 *VAR_3,
    int VAR_4)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
