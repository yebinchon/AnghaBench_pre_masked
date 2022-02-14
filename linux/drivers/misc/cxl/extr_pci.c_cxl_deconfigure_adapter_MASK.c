
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct cxl {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct cxl*) ;
 int FUNC_2 (struct cxl*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int,int ) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct cxl *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_5(VAR_0->dev.parent);

 if (FUNC_0())
  FUNC_4(VAR_1, 0x00020000E0000000ull, 0);

 FUNC_1(VAR_0);
 FUNC_2(VAR_0);

 FUNC_3(VAR_1);
}
