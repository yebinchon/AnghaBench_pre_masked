
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct umc_dev {TYPE_1__ dev; } ;
struct pci_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static inline struct pci_dev *FUNC_2(struct umc_dev *VAR_0)
{
 struct pci_dev *VAR_1 = ((void*)0);
 if (FUNC_0(VAR_0->dev.parent))
  VAR_1 = FUNC_1(VAR_0->dev.parent);
 return VAR_1;
}
