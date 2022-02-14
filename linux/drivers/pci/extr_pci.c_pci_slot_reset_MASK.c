
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_slot {int hotplug; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct pci_slot*) ;
 int FUNC_3 (struct pci_slot*) ;
 int FUNC_4 (struct pci_slot*) ;

__attribute__((used)) static int FUNC_5(struct pci_slot *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!VAR_1 || !FUNC_3(VAR_1))
  return -VAR_0;

 if (!VAR_2)
  FUNC_2(VAR_1);

 FUNC_0();

 VAR_3 = FUNC_1(VAR_1->hotplug, VAR_2);

 if (!VAR_2)
  FUNC_4(VAR_1);

 return VAR_3;
}
