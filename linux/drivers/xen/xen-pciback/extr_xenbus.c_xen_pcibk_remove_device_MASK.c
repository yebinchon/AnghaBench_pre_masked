
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_device {TYPE_1__* xdev; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int otherend_id; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,int,...) ;
 struct pci_dev* FUNC_2 (struct xen_pcibk_device*,int,int,int ) ;
 int FUNC_3 (struct xen_pcibk_device*,struct pci_dev*,int) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct xen_pcibk_device *VAR_1,
     int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct pci_dev *VAR_7;

 FUNC_1(&VAR_1->xdev->dev, "removing dom %x bus %x slot %x func %x\n",
  VAR_2, VAR_3, VAR_4, VAR_5);

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, FUNC_0(VAR_4, VAR_5));
 if (!VAR_7) {
  VAR_6 = -VAR_0;
  FUNC_1(&VAR_1->xdev->dev, "Couldn't locate PCI device "
   "(%04x:%02x:%02x.%d)! not owned by this domain\n",
   VAR_2, VAR_3, VAR_4, VAR_5);
  goto out;
 }

 FUNC_1(&VAR_7->dev, "unregistering for %d\n", VAR_1->xdev->otherend_id);
 FUNC_4(VAR_7);



 FUNC_3(VAR_1, VAR_7, 1 );

out:
 return VAR_6;
}
