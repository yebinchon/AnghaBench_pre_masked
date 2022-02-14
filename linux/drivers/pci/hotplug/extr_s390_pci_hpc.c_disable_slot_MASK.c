
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slot {TYPE_1__* zdev; } ;
struct pci_dev {int dummy; } ;
struct hotplug_slot {int dummy; } ;
struct TYPE_2__ {int bus; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct slot*) ;
 struct slot* FUNC_4 (struct hotplug_slot*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct hotplug_slot *VAR_2)
{
 struct slot *VAR_3 = FUNC_4(VAR_2);
 struct pci_dev *VAR_4;
 int VAR_5;

 if (!FUNC_6(VAR_3->zdev->state))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3->zdev->bus, VAR_1);
 if (VAR_4) {
  FUNC_2(VAR_4);
  FUNC_0(VAR_4);
 }

 VAR_5 = FUNC_5(VAR_3->zdev);
 if (VAR_5)
  return VAR_5;

 return FUNC_3(VAR_3);
}
