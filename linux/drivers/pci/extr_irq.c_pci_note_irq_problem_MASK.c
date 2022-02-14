
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct pci_dev {int device; int vendor; TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct pci_dev*,char*,...) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0, const char *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_3(VAR_0->dev.parent);

 FUNC_2(VAR_0, "Potentially misrouted IRQ (Bridge %s %04x:%04x)\n",
  FUNC_1(&VAR_2->dev), VAR_2->vendor, VAR_2->device);
 FUNC_2(VAR_0, "%s\n", VAR_1);
 FUNC_2(VAR_0, "Please report to linux-kernel@vger.kernel.org\n");
 FUNC_0(1);
}
