
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct cxl {TYPE_1__ dev; } ;


 int FUNC_0 (struct pci_dev*,int) ;
 struct pci_dev* FUNC_1 (int ) ;

int FUNC_2(struct cxl *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_1(VAR_0->dev.parent);

 return FUNC_0(VAR_1, 1);
}
