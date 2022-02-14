
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int device; } ;
struct nvme_dev {TYPE_1__ ctrl; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct nvme_dev* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_4(struct pci_dev *VAR_1)
{
 struct nvme_dev *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2->ctrl.device, "restart after slot reset\n");
 FUNC_3(VAR_1);
 FUNC_1(&VAR_2->ctrl);
 return VAR_0;
}
