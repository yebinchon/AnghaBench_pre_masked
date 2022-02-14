
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_host_bridge {int dummy; } ;
struct pci_dev {int bus; } ;


 int FUNC_0 (struct pci_host_bridge*,int) ;
 struct pci_host_bridge* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct pci_dev *VAR_0, struct pci_dev *VAR_1)
{
 struct pci_host_bridge *VAR_2 = FUNC_1(VAR_0->bus);
 struct pci_host_bridge *VAR_3 = FUNC_1(VAR_1->bus);

 if (VAR_2 == VAR_3)
  return FUNC_0(VAR_2, 1);

 if (FUNC_0(VAR_2, 0) &&
     FUNC_0(VAR_3, 0))
  return 1;

 return 0;
}
