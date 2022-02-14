
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcifront_device {TYPE_1__* xdev; } ;
struct pci_dev {int dummy; } ;
struct pci_bus {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,char*,unsigned int,unsigned int,int ,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (struct pci_bus*,unsigned int) ;
 struct pci_dev* FUNC_5 (struct pci_bus*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct pcifront_device *VAR_0,
    unsigned int VAR_1, unsigned int VAR_2,
    struct pci_bus *VAR_3)
{
 struct pci_dev *VAR_4;
 unsigned int VAR_5;





 for (VAR_5 = 0; VAR_5 < 0x100; VAR_5++) {
  VAR_4 = FUNC_4(VAR_3, VAR_5);
  if (VAR_4) {

   FUNC_3(VAR_4);
   continue;
  }

  VAR_4 = FUNC_5(VAR_3, VAR_5);
  if (VAR_4)
   FUNC_2(&VAR_0->xdev->dev, "New device on "
     "%04x:%02x:%02x.%d found.\n", VAR_1, VAR_2,
     FUNC_1(VAR_5), FUNC_0(VAR_5));
 }

 return 0;
}
