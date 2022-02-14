
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imgu_device {int base; TYPE_1__* pci_dev; int mmu; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct imgu_device *VAR_0)
{
 FUNC_1(VAR_0->mmu);
 FUNC_0(&VAR_0->pci_dev->dev, VAR_0->base);
}
