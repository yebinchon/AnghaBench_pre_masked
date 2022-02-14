
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_device {TYPE_1__* xdev; } ;
typedef int str ;
struct TYPE_2__ {int nodename; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char*,int,char*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,char*,char*,int,...) ;
 int FUNC_4 (int ,int ,char*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct xen_pcibk_device *VAR_4,
        unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 char VAR_13[64];

 FUNC_0(&VAR_4->xdev->dev, "Publishing pci roots\n");

 VAR_12 = FUNC_4(VAR_3, VAR_4->xdev->nodename,
      "root_num", "%d", &VAR_10);
 if (VAR_12 == 0 || VAR_12 == -VAR_1)
  VAR_10 = 0;
 else if (VAR_12 < 0)
  goto out;


 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_11 = FUNC_1(VAR_13, sizeof(VAR_13), "root-%d", VAR_9);
  if (FUNC_2(VAR_11 >= (sizeof(VAR_13) - 1))) {
   VAR_12 = -VAR_2;
   goto out;
  }

  VAR_12 = FUNC_4(VAR_3, VAR_4->xdev->nodename,
       VAR_13, "%x:%x", &VAR_7, &VAR_8);
  if (VAR_12 < 0)
   goto out;
  if (VAR_12 != 2) {
   VAR_12 = -VAR_0;
   goto out;
  }

  if (VAR_7 == VAR_5 && VAR_8 == VAR_6) {
   VAR_12 = 0;
   goto out;
  }
 }

 VAR_11 = FUNC_1(VAR_13, sizeof(VAR_13), "root-%d", VAR_10);
 if (FUNC_2(VAR_11 >= (sizeof(VAR_13) - 1))) {
  VAR_12 = -VAR_2;
  goto out;
 }

 FUNC_0(&VAR_4->xdev->dev, "writing root %d at %04x:%02x\n",
  VAR_10, VAR_5, VAR_6);

 VAR_12 = FUNC_3(VAR_3, VAR_4->xdev->nodename, VAR_13,
       "%04x:%02x", VAR_5, VAR_6);
 if (VAR_12)
  goto out;

 VAR_12 = FUNC_3(VAR_3, VAR_4->xdev->nodename,
       "root_num", "%d", (VAR_10 + 1));

out:
 return VAR_12;
}
