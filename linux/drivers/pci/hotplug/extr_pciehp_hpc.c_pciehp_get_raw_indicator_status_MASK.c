
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct hotplug_slot {int dummy; } ;
struct controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pci_dev* FUNC_0 (struct controller*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 struct controller* FUNC_4 (struct hotplug_slot*) ;

int FUNC_5(struct hotplug_slot *VAR_3,
        u8 *VAR_4)
{
 struct controller *VAR_5 = FUNC_4(VAR_3);
 struct pci_dev *VAR_6 = FUNC_0(VAR_5);
 u16 VAR_7;

 FUNC_1(VAR_6);
 FUNC_3(VAR_6, VAR_0, &VAR_7);
 FUNC_2(VAR_6);
 *VAR_4 = (VAR_7 & (VAR_1 | VAR_2)) >> 6;
 return 0;
}
