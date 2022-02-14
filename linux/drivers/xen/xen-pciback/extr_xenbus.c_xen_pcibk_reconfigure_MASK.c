
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

 int VAR_3 ;

 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char*,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct xen_pcibk_device*,int,int,int,int,int) ;
 int VAR_7 ;
 int FUNC_6 (struct xen_pcibk_device*,int ) ;
 int FUNC_7 (struct xen_pcibk_device*,int,int,int,int) ;
 int FUNC_8 (TYPE_1__*,int,char*,...) ;
 int FUNC_9 (int ,int ,char*,char*,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 unsigned int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (int ,int ,char*,char*,int*,...) ;
 int FUNC_13 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_14(struct xen_pcibk_device *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15;
 int VAR_16, VAR_17;
 char VAR_18[64];
 char VAR_19[64];


 FUNC_0(&VAR_8->xdev->dev, "Reconfiguring device ...\n");

 FUNC_1(&VAR_8->dev_lock);

 if (FUNC_10(VAR_8->xdev->nodename) !=
     VAR_5)
  goto out;

 VAR_9 = FUNC_12(VAR_2, VAR_8->xdev->nodename, "num_devs", "%d",
      &VAR_10);
 if (VAR_9 != 1) {
  if (VAR_9 >= 0)
   VAR_9 = -VAR_0;
  FUNC_8(VAR_8->xdev, VAR_9,
     "Error reading number of devices");
  goto out;
 }

 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  VAR_17 = FUNC_3(VAR_18, sizeof(VAR_18), "state-%d", VAR_16);
  if (FUNC_4(VAR_17 >= (sizeof(VAR_18) - 1))) {
   VAR_9 = -VAR_1;
   FUNC_8(VAR_8->xdev, VAR_9,
      "String overflow while reading "
      "configuration");
   goto out;
  }
  VAR_15 = FUNC_11(VAR_8->xdev->nodename, VAR_18,
      VAR_6);

  switch (VAR_15) {
  case 128:
   FUNC_0(&VAR_8->xdev->dev, "Attaching dev-%d ...\n", VAR_16);

   VAR_17 = FUNC_3(VAR_19, sizeof(VAR_19), "dev-%d", VAR_16);
   if (FUNC_4(VAR_17 >= (sizeof(VAR_19) - 1))) {
    VAR_9 = -VAR_1;
    FUNC_8(VAR_8->xdev, VAR_9,
       "String overflow while "
       "reading configuration");
    goto out;
   }
   VAR_9 = FUNC_12(VAR_2, VAR_8->xdev->nodename,
        VAR_19, "%x:%x:%x.%x",
        &VAR_11, &VAR_12, &VAR_13, &VAR_14);
   if (VAR_9 < 0) {
    FUNC_8(VAR_8->xdev, VAR_9,
       "Error reading device "
       "configuration");
    goto out;
   }
   if (VAR_9 != 4) {
    VAR_9 = -VAR_0;
    FUNC_8(VAR_8->xdev, VAR_9,
       "Error parsing pci device "
       "configuration");
    goto out;
   }

   VAR_9 = FUNC_5(VAR_8, VAR_11, VAR_12, VAR_13,
          VAR_14, VAR_16);
   if (VAR_9)
    goto out;


   VAR_9 = FUNC_6(VAR_8,
      VAR_7);
   if (VAR_9) {
    FUNC_8(VAR_8->xdev, VAR_9,
       "Error while publish PCI root"
       "buses for frontend");
    goto out;
   }

   VAR_9 = FUNC_9(VAR_2, VAR_8->xdev->nodename,
         VAR_18, "%d",
         VAR_3);
   if (VAR_9) {
    FUNC_8(VAR_8->xdev, VAR_9,
       "Error switching substate of "
       "dev-%d\n", VAR_16);
    goto out;
   }
   break;

  case 129:
   FUNC_0(&VAR_8->xdev->dev, "Detaching dev-%d ...\n", VAR_16);

   VAR_17 = FUNC_3(VAR_19, sizeof(VAR_19), "vdev-%d", VAR_16);
   if (FUNC_4(VAR_17 >= (sizeof(VAR_19) - 1))) {
    VAR_9 = -VAR_1;
    FUNC_8(VAR_8->xdev, VAR_9,
       "String overflow while "
       "reading configuration");
    goto out;
   }
   VAR_9 = FUNC_12(VAR_2, VAR_8->xdev->nodename,
        VAR_19, "%x:%x:%x.%x",
        &VAR_11, &VAR_12, &VAR_13, &VAR_14);
   if (VAR_9 < 0) {
    FUNC_8(VAR_8->xdev, VAR_9,
       "Error reading device "
       "configuration");
    goto out;
   }
   if (VAR_9 != 4) {
    VAR_9 = -VAR_0;
    FUNC_8(VAR_8->xdev, VAR_9,
       "Error parsing pci device "
       "configuration");
    goto out;
   }

   VAR_9 = FUNC_7(VAR_8, VAR_11, VAR_12, VAR_13,
          VAR_14);
   if (VAR_9)
    goto out;






   break;

  default:
   break;
  }
 }

 VAR_9 = FUNC_13(VAR_8->xdev, VAR_4);
 if (VAR_9) {
  FUNC_8(VAR_8->xdev, VAR_9,
     "Error switching to reconfigured state!");
  goto out;
 }

out:
 FUNC_2(&VAR_8->dev_lock);
 return 0;
}
