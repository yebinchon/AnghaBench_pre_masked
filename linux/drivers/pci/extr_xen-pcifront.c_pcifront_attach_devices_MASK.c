
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
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct pcifront_device*,unsigned int,unsigned int) ;
 int FUNC_1 (char*,int,char*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int,char*) ;
 int FUNC_4 (TYPE_1__*,int,char*,...) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,char*,char*,...) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_8(struct pcifront_device *VAR_7)
{
 int VAR_8 = -VAR_0;
 int VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13;
 char VAR_14[64];

 if (FUNC_5(VAR_7->xdev->nodename) !=
     VAR_6)
  goto out;

 VAR_8 = FUNC_6(VAR_4, VAR_7->xdev->otherend,
      "root_num", "%d", &VAR_10);
 if (VAR_8 == -VAR_2) {
  FUNC_3(VAR_7->xdev, VAR_8,
     "No PCI Roots found, trying 0000:00");
  VAR_8 = FUNC_0(VAR_7, 0, 0);
  if (VAR_8) {
   FUNC_4(VAR_7->xdev, VAR_8,
      "Error scanning PCI root 0000:00");
   goto out;
  }
  VAR_10 = 0;
 } else if (VAR_8 != 1) {
  if (VAR_8 == 0)
   VAR_8 = -VAR_1;
  FUNC_4(VAR_7->xdev, VAR_8,
     "Error reading number of PCI roots");
  goto out;
 }

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_11 = FUNC_1(VAR_14, sizeof(VAR_14), "root-%d", VAR_9);
  if (FUNC_2(VAR_11 >= (sizeof(VAR_14) - 1))) {
   VAR_8 = -VAR_3;
   goto out;
  }

  VAR_8 = FUNC_6(VAR_4, VAR_7->xdev->otherend, VAR_14,
       "%x:%x", &VAR_12, &VAR_13);
  if (VAR_8 != 2) {
   if (VAR_8 >= 0)
    VAR_8 = -VAR_1;
   FUNC_4(VAR_7->xdev, VAR_8,
      "Error reading PCI root %d", VAR_9);
   goto out;
  }

  VAR_8 = FUNC_0(VAR_7, VAR_12, VAR_13);
  if (VAR_8) {
   FUNC_4(VAR_7->xdev, VAR_8,
      "Error scanning PCI root %04x:%02x",
      VAR_12, VAR_13);
   goto out;
  }
 }

 FUNC_7(VAR_7->xdev, VAR_5);

out:
 return VAR_8;
}
