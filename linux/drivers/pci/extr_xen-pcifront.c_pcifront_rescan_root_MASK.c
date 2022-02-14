
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcifront_device {TYPE_1__* xdev; } ;
struct pci_bus {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_2 (struct pci_bus*) ;
 struct pci_bus* FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (struct pci_bus*,int ,struct pcifront_device*) ;
 int VAR_1 ;
 int FUNC_5 (struct pcifront_device*,unsigned int,unsigned int,struct pci_bus*) ;
 int FUNC_6 (struct pcifront_device*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct pcifront_device *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 struct pci_bus *VAR_6;


 if (VAR_3 != 0) {
  FUNC_0(&VAR_2->xdev->dev,
   "PCI Root in non-zero PCI Domain! domain=%d\n", VAR_3);
  FUNC_0(&VAR_2->xdev->dev,
   "Please compile with CONFIG_PCI_DOMAINS\n");
  return -VAR_0;
 }


 FUNC_1(&VAR_2->xdev->dev, "Rescanning PCI Frontend Bus %04x:%02x\n",
   VAR_3, VAR_4);

 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (!VAR_6)

  return FUNC_6(VAR_2, VAR_3, VAR_4);

 VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_6);


 FUNC_4(VAR_6, VAR_1, VAR_2);


 FUNC_2(VAR_6);

 return VAR_5;
}
