
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int reset_work; } ;
struct nvme_dev {TYPE_1__ ctrl; } ;


 int FUNC_0 (int *) ;
 struct nvme_dev* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 struct nvme_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->ctrl.reset_work);
}
