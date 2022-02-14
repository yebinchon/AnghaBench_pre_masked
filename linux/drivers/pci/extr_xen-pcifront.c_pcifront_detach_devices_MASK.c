
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcifront_device {TYPE_1__* xdev; } ;
struct pci_dev {int dummy; } ;
typedef int str ;
struct TYPE_3__ {int dev; int otherend; int nodename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (unsigned int,unsigned int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,char*,int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*,int,char*,...) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (int ,int ,char*,char*,...) ;
 int FUNC_13 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_14(struct pcifront_device *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14;
 struct pci_dev *VAR_15;
 char VAR_16[64];

 if (FUNC_10(VAR_7->xdev->nodename) !=
     VAR_4)
  goto out;

 VAR_8 = FUNC_12(VAR_2, VAR_7->xdev->otherend, "num_devs", "%d",
      &VAR_10);
 if (VAR_8 != 1) {
  if (VAR_8 >= 0)
   VAR_8 = -VAR_0;
  FUNC_9(VAR_7->xdev, VAR_8,
     "Error reading number of PCI devices");
  goto out;
 }


 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  int VAR_17, VAR_18;
  VAR_17 = FUNC_7(VAR_16, sizeof(VAR_16), "state-%d", VAR_9);
  if (FUNC_8(VAR_17 >= (sizeof(VAR_16) - 1))) {
   VAR_8 = -VAR_1;
   goto out;
  }
  VAR_18 = FUNC_11(VAR_7->xdev->otherend, VAR_16,
          VAR_6);

  if (VAR_18 != VAR_3)
   continue;


  VAR_17 = FUNC_7(VAR_16, sizeof(VAR_16), "vdev-%d", VAR_9);
  if (FUNC_8(VAR_17 >= (sizeof(VAR_16) - 1))) {
   VAR_8 = -VAR_1;
   goto out;
  }
  VAR_8 = FUNC_12(VAR_2, VAR_7->xdev->otherend, VAR_16,
       "%x:%x:%x.%x", &VAR_11, &VAR_12, &VAR_13, &VAR_14);
  if (VAR_8 != 4) {
   if (VAR_8 >= 0)
    VAR_8 = -VAR_0;
   FUNC_9(VAR_7->xdev, VAR_8,
      "Error reading PCI device %d", VAR_9);
   goto out;
  }

  VAR_15 = FUNC_3(VAR_11, VAR_12,
    FUNC_0(VAR_13, VAR_14));
  if (!VAR_15) {
   FUNC_1(&VAR_7->xdev->dev,
    "Cannot get PCI device %04x:%02x:%02x.%d\n",
    VAR_11, VAR_12, VAR_13, VAR_14);
   continue;
  }
  FUNC_4();
  FUNC_5(VAR_15);
  FUNC_2(VAR_15);
  FUNC_6();

  FUNC_1(&VAR_7->xdev->dev,
   "PCI device %04x:%02x:%02x.%d removed.\n",
   VAR_11, VAR_12, VAR_13, VAR_14);
 }

 VAR_8 = FUNC_13(VAR_7->xdev, VAR_5);

out:
 return VAR_8;
}
