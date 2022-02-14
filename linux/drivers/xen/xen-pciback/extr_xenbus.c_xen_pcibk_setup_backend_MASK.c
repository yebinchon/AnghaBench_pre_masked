
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xen_pcibk_device {int dev_lock; TYPE_1__* xdev; } ;
typedef int state_str ;
typedef int dev_str ;
struct TYPE_3__ {int nodename; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char*,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct xen_pcibk_device*) ;
 int FUNC_6 (struct xen_pcibk_device*,int,int,int,int,int) ;
 int VAR_5 ;
 int FUNC_7 (struct xen_pcibk_device*,int ) ;
 int FUNC_8 (TYPE_1__*,int,char*,...) ;
 int FUNC_9 (int ,int ,char*,char*,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,char*,char*,int*,...) ;
 int FUNC_12 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_13(struct xen_pcibk_device *VAR_6)
{

 int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;
 int VAR_12, VAR_13;
 char VAR_14[64];
 char VAR_15[64];

 FUNC_1(&VAR_6->dev_lock);



 if (FUNC_10(VAR_6->xdev->nodename) !=
     VAR_3)
  goto out;

 FUNC_0(&VAR_6->xdev->dev, "getting be setup\n");

 VAR_11 = FUNC_11(VAR_2, VAR_6->xdev->nodename, "num_devs", "%d",
      &VAR_13);
 if (VAR_11 != 1) {
  if (VAR_11 >= 0)
   VAR_11 = -VAR_0;
  FUNC_8(VAR_6->xdev, VAR_11,
     "Error reading number of devices");
  goto out;
 }

 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  int VAR_16 = FUNC_3(VAR_14, sizeof(VAR_14), "dev-%d", VAR_12);
  if (FUNC_4(VAR_16 >= (sizeof(VAR_14) - 1))) {
   VAR_11 = -VAR_1;
   FUNC_8(VAR_6->xdev, VAR_11,
      "String overflow while reading "
      "configuration");
   goto out;
  }

  VAR_11 = FUNC_11(VAR_2, VAR_6->xdev->nodename, VAR_14,
       "%x:%x:%x.%x", &VAR_7, &VAR_8, &VAR_9, &VAR_10);
  if (VAR_11 < 0) {
   FUNC_8(VAR_6->xdev, VAR_11,
      "Error reading device configuration");
   goto out;
  }
  if (VAR_11 != 4) {
   VAR_11 = -VAR_0;
   FUNC_8(VAR_6->xdev, VAR_11,
      "Error parsing pci device "
      "configuration");
   goto out;
  }

  VAR_11 = FUNC_6(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_12);
  if (VAR_11)
   goto out;


  VAR_16 = FUNC_3(VAR_15, sizeof(VAR_15), "state-%d", VAR_12);
  if (FUNC_4(VAR_16 >= (sizeof(VAR_15) - 1))) {
   VAR_11 = -VAR_1;
   FUNC_8(VAR_6->xdev, VAR_11,
      "String overflow while reading "
      "configuration");
   goto out;
  }
  VAR_11 = FUNC_9(VAR_2, VAR_6->xdev->nodename, VAR_15,
        "%d", VAR_4);
  if (VAR_11) {
   FUNC_8(VAR_6->xdev, VAR_11, "Error switching "
      "substate of dev-%d\n", VAR_12);
   goto out;
  }
 }

 VAR_11 = FUNC_7(VAR_6, VAR_5);
 if (VAR_11) {
  FUNC_8(VAR_6->xdev, VAR_11,
     "Error while publish PCI root buses "
     "for frontend");
  goto out;
 }

 VAR_11 = FUNC_12(VAR_6->xdev, VAR_4);
 if (VAR_11)
  FUNC_8(VAR_6->xdev, VAR_11,
     "Error switching to initialised state!");

out:
 FUNC_2(&VAR_6->dev_lock);
 if (!VAR_11)

  FUNC_5(VAR_6);
 return VAR_11;
}
