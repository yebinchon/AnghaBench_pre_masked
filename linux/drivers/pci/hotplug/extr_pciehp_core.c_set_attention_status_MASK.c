
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct controller*,int ,int) ;
 struct controller* FUNC_3 (struct hotplug_slot*) ;

__attribute__((used)) static int FUNC_4(struct hotplug_slot *VAR_3, u8 VAR_4)
{
 struct controller *VAR_5 = FUNC_3(VAR_3);
 struct pci_dev *VAR_6 = VAR_5->pcie->port;

 if (VAR_4)
  VAR_4 <<= VAR_2;
 else
  VAR_4 = VAR_1;

 FUNC_0(VAR_6);
 FUNC_2(VAR_5, VAR_0, VAR_4);
 FUNC_1(VAR_6);
 return 0;
}
