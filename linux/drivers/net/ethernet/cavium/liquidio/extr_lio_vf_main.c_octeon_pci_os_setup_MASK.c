
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct octeon_device {TYPE_1__* pci_dev; } ;
struct TYPE_4__ {int dev; int physfn; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (struct octeon_device*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct octeon_device *VAR_0)
{






 if (FUNC_5(VAR_0->pci_dev)) {
  FUNC_1(&VAR_0->pci_dev->dev, "pci_enable_device failed\n");
  return 1;
 }

 if (FUNC_2(&VAR_0->pci_dev->dev, FUNC_0(64))) {
  FUNC_1(&VAR_0->pci_dev->dev, "Unexpected DMA device capability\n");
  FUNC_4(VAR_0->pci_dev);
  return 1;
 }


 FUNC_6(VAR_0->pci_dev);

 return 0;
}
