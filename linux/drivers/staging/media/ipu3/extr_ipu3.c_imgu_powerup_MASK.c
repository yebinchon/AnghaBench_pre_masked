
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imgu_device {int mmu; int base; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct imgu_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->pci_dev->dev, VAR_0->base);
 if (VAR_1)
  return VAR_1;

 FUNC_1(VAR_0->mmu);
 return 0;
}
