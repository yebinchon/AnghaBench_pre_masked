
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xen_pci_op {unsigned int devfn; int offset; int size; int value; int bus; int domain; int cmd; } ;
struct pcifront_sd {int dummy; } ;
struct pcifront_device {TYPE_1__* xdev; } ;
struct pci_bus {int number; struct pcifront_sd* sysdata; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*,int ,int ,int ,int ,int,int,int ) ;
 int FUNC_3 (struct pcifront_device*,struct xen_pci_op*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pci_bus*) ;
 struct pcifront_device* FUNC_6 (struct pcifront_sd*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_7(struct pci_bus *VAR_2, unsigned int VAR_3,
         int VAR_4, int VAR_5, u32 VAR_6)
{
 struct xen_pci_op VAR_7 = {
  .cmd = VAR_0,
  .domain = FUNC_5(VAR_2),
  .bus = VAR_2->number,
  .devfn = VAR_3,
  .offset = VAR_4,
  .size = VAR_5,
  .value = VAR_6,
 };
 struct pcifront_sd *VAR_8 = VAR_2->sysdata;
 struct pcifront_device *VAR_9 = FUNC_6(VAR_8);

 if (VAR_1)
  FUNC_2(&VAR_9->xdev->dev,
    "write dev=%04x:%02x:%02x.%d - "
    "offset %x size %d val %x\n",
    FUNC_5(VAR_2), VAR_2->number,
    FUNC_1(VAR_3), FUNC_0(VAR_3), VAR_4, VAR_5, VAR_6);

 return FUNC_4(FUNC_3(VAR_9, &VAR_7));
}
