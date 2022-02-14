
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


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int ,...) ;
 int FUNC_3 (struct pcifront_device*,struct xen_pci_op*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct pci_bus*) ;
 struct pcifront_device* FUNC_7 (struct pcifront_sd*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_8(struct pci_bus *VAR_3, unsigned int VAR_4,
        int VAR_5, int VAR_6, u32 *VAR_7)
{
 int VAR_8 = 0;
 struct xen_pci_op VAR_9 = {
  .cmd = VAR_1,
  .domain = FUNC_6(VAR_3),
  .bus = VAR_3->number,
  .devfn = VAR_4,
  .offset = VAR_5,
  .size = VAR_6,
 };
 struct pcifront_sd *VAR_10 = VAR_3->sysdata;
 struct pcifront_device *VAR_11 = FUNC_7(VAR_10);

 if (VAR_2)
  FUNC_2(&VAR_11->xdev->dev,
    "read dev=%04x:%02x:%02x.%d - offset %x size %d\n",
    FUNC_6(VAR_3), VAR_3->number, FUNC_1(VAR_4),
    FUNC_0(VAR_4), VAR_5, VAR_6);

 VAR_8 = FUNC_3(VAR_11, &VAR_9);

 if (FUNC_5(!VAR_8)) {
  if (VAR_2)
   FUNC_2(&VAR_11->xdev->dev, "read got back value %x\n",
     VAR_9.value);

  *VAR_7 = VAR_9.value;
 } else if (VAR_8 == -VAR_0) {

  VAR_8 = 0;
  *VAR_7 = 0;
 }

 return FUNC_4(VAR_8);
}
