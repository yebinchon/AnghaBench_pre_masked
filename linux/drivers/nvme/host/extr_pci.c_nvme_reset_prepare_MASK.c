
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct nvme_dev {int ctrl; } ;


 int FUNC_0 (struct nvme_dev*,int) ;
 int FUNC_1 (int *) ;
 struct nvme_dev* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct nvme_dev *VAR_1 = FUNC_2(VAR_0);






 FUNC_0(VAR_1, 0);
 FUNC_1(&VAR_1->ctrl);
}
