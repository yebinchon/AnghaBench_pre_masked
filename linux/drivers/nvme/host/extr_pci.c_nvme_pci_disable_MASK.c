
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct nvme_dev {int dev; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct nvme_dev *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_4(VAR_0->dev);

 FUNC_2(VAR_1);

 if (FUNC_3(VAR_1)) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1);
 }
}
