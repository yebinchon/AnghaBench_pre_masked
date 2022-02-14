
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_device {TYPE_1__* xdev; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int otherend_id; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int,int,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 struct pci_dev* FUNC_3 (struct xen_pcibk_device*,int,int,int,int) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct xen_pcibk_device*,struct pci_dev*,int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (TYPE_1__*,int,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct xen_pcibk_device *VAR_2,
     int VAR_3, int VAR_4, int VAR_5, int VAR_6,
     int VAR_7)
{
 struct pci_dev *VAR_8;
 int VAR_9 = 0;

 FUNC_0(&VAR_2->xdev->dev, "exporting dom %x bus %x slot %x func %x\n",
  VAR_3, VAR_4, VAR_5, VAR_6);

 VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  FUNC_8(VAR_2->xdev, VAR_9,
     "Couldn't locate PCI device "
     "(%04x:%02x:%02x.%d)! "
     "perhaps already in-use?",
     VAR_3, VAR_4, VAR_5, VAR_6);
  goto out;
 }

 VAR_9 = FUNC_5(VAR_2, VAR_8, VAR_7,
        VAR_1);
 if (VAR_9)
  goto out;

 FUNC_2(&VAR_8->dev, "registering for %d\n", VAR_2->xdev->otherend_id);
 if (FUNC_6(VAR_8,
          VAR_2->xdev->otherend_id) != 0) {
  FUNC_1(&VAR_8->dev, "Stealing ownership from dom%d.\n",
   FUNC_4(VAR_8));
  FUNC_7(VAR_8);
  FUNC_6(VAR_8, VAR_2->xdev->otherend_id);
 }
out:
 return VAR_9;
}
