
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct hotplug_slot {int dummy; } ;
struct controller {TYPE_1__* pcie; } ;
struct TYPE_2__ {struct pci_dev* port; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct controller*,int *) ;
 struct controller* FUNC_3 (struct hotplug_slot*) ;

__attribute__((used)) static int FUNC_4(struct hotplug_slot *VAR_0, u8 *VAR_1)
{
 struct controller *VAR_2 = FUNC_3(VAR_0);
 struct pci_dev *VAR_3 = VAR_2->pcie->port;

 FUNC_0(VAR_3);
 FUNC_2(VAR_2, VAR_1);
 FUNC_1(VAR_3);
 return 0;
}
