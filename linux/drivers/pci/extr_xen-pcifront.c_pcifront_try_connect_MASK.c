
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pcifront_device {TYPE_1__* xdev; } ;
typedef int str ;
struct TYPE_4__ {int otherend; int nodename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct pcifront_device*) ;
 int FUNC_1 (struct pcifront_device*,unsigned int,unsigned int) ;
 int FUNC_2 (char*,int,char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int,char*) ;
 int FUNC_5 (TYPE_1__*,int,char*,...) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,char*,char*,...) ;
 int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_9(struct pcifront_device *VAR_8)
{
 int VAR_9 = -VAR_1;
 int VAR_10, VAR_11, VAR_12;
 char VAR_13[64];
 unsigned int VAR_14, VAR_15;



 if (FUNC_6(VAR_8->xdev->nodename) !=
     VAR_7)
  goto out;

 VAR_9 = FUNC_0(VAR_8);
 if (VAR_9 && VAR_9 != -VAR_0) {
  FUNC_5(VAR_8->xdev, VAR_9,
     "Error setting up PCI Frontend");
  goto out;
 }

 VAR_9 = FUNC_7(VAR_5, VAR_8->xdev->otherend,
      "root_num", "%d", &VAR_11);
 if (VAR_9 == -VAR_3) {
  FUNC_4(VAR_8->xdev, VAR_9,
     "No PCI Roots found, trying 0000:00");
  VAR_9 = FUNC_1(VAR_8, 0, 0);
  if (VAR_9) {
   FUNC_5(VAR_8->xdev, VAR_9,
      "Error scanning PCI root 0000:00");
   goto out;
  }
  VAR_11 = 0;
 } else if (VAR_9 != 1) {
  if (VAR_9 == 0)
   VAR_9 = -VAR_2;
  FUNC_5(VAR_8->xdev, VAR_9,
     "Error reading number of PCI roots");
  goto out;
 }

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  VAR_12 = FUNC_2(VAR_13, sizeof(VAR_13), "root-%d", VAR_10);
  if (FUNC_3(VAR_12 >= (sizeof(VAR_13) - 1))) {
   VAR_9 = -VAR_4;
   goto out;
  }

  VAR_9 = FUNC_7(VAR_5, VAR_8->xdev->otherend, VAR_13,
       "%x:%x", &VAR_14, &VAR_15);
  if (VAR_9 != 2) {
   if (VAR_9 >= 0)
    VAR_9 = -VAR_2;
   FUNC_5(VAR_8->xdev, VAR_9,
      "Error reading PCI root %d", VAR_10);
   goto out;
  }

  VAR_9 = FUNC_1(VAR_8, VAR_14, VAR_15);
  if (VAR_9) {
   FUNC_5(VAR_8->xdev, VAR_9,
      "Error scanning PCI root %04x:%02x",
      VAR_14, VAR_15);
   goto out;
  }
 }

 VAR_9 = FUNC_8(VAR_8->xdev, VAR_6);

out:
 return VAR_9;
}
