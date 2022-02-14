
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int class; struct pci_bus* subordinate; } ;
struct pci_bus {int number; } ;
struct list_head {int dummy; } ;




 int FUNC_0 (struct pci_bus*,struct list_head*,struct list_head*) ;
 int FUNC_1 (struct pci_bus*) ;
 int FUNC_2 (struct pci_dev const*,char*,int ,int ) ;
 int FUNC_3 (struct pci_bus*) ;
 int FUNC_4 (struct pci_bus*) ;
 int FUNC_5 (struct pci_dev*,struct list_head*,struct list_head*) ;

__attribute__((used)) static void FUNC_6(const struct pci_dev *VAR_0,
       struct list_head *VAR_1,
       struct list_head *VAR_2)
{
 struct pci_bus *VAR_3;

 FUNC_5((struct pci_dev *)VAR_0,
      VAR_1, VAR_2);

 VAR_3 = VAR_0->subordinate;
 if (!VAR_3)
  return;

 FUNC_0(VAR_3, VAR_1, VAR_2);

 switch (VAR_0->class >> 8) {
 case 128:
  FUNC_3(VAR_3);
  break;

 case 129:
  FUNC_4(VAR_3);
  break;

 default:
  FUNC_2(VAR_0, "not setting up bridge for bus %04x:%02x\n",
    FUNC_1(VAR_3), VAR_3->number);
  break;
 }
}
