
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * dev; } ;
struct hv_pcibus_device {int state; TYPE_3__* pci_bus; TYPE_2__* hdev; TYPE_1__ msi_chip; int resources_for_children; int sysdata; } ;
struct TYPE_9__ {TYPE_1__* msi; } ;
struct TYPE_8__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct hv_pcibus_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int *,int ,int *,int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct hv_pcibus_device *VAR_3)
{

 VAR_3->pci_bus = FUNC_3(&VAR_3->hdev->device,
         0,
         &VAR_2,
         &VAR_3->sysdata,
         &VAR_3->resources_for_children);
 if (!VAR_3->pci_bus)
  return -VAR_0;

 VAR_3->pci_bus->msi = &VAR_3->msi_chip;
 VAR_3->pci_bus->msi->dev = &VAR_3->hdev->device;

 FUNC_4();
 FUNC_5(VAR_3->pci_bus);
 FUNC_2(VAR_3->pci_bus);
 FUNC_0(VAR_3);
 FUNC_1(VAR_3->pci_bus);
 FUNC_6();
 VAR_3->state = VAR_1;
 return 0;
}
