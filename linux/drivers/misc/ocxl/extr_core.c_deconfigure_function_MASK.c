
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct ocxl_fn {int link; TYPE_1__ dev; } ;


 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ocxl_fn *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_2(VAR_0->dev.parent);

 FUNC_0(VAR_1, VAR_0->link);
 FUNC_1(VAR_1);
}
