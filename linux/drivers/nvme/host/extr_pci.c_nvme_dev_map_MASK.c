
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct nvme_dev {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct nvme_dev*,scalar_t__) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*,char*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nvme_dev *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_3(VAR_2->dev);

 if (FUNC_2(VAR_3, "nvme"))
  return -VAR_0;

 if (FUNC_0(VAR_2, VAR_1 + 4096))
  goto release;

 return 0;
  release:
 FUNC_1(VAR_3);
 return -VAR_0;
}
