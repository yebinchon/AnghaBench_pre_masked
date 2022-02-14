
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct xenbus_transaction {int dummy; } ;
struct pcifront_device {int irq; TYPE_1__* xdev; int evtchn; int gnt_ref; int sh_info; } ;
typedef int grant_ref_t ;
struct TYPE_5__ {int dev; int nodename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,struct pcifront_device*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int,char*) ;
 int FUNC_4 (TYPE_1__*,int ,int,int *) ;
 int FUNC_5 (struct xenbus_transaction,int ,char*,char*,...) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (struct xenbus_transaction,int) ;
 int FUNC_8 (struct xenbus_transaction*) ;

__attribute__((used)) static int FUNC_9(struct pcifront_device *VAR_4)
{
 int VAR_5 = 0;
 struct xenbus_transaction VAR_6;
 grant_ref_t VAR_7;

 VAR_5 = FUNC_4(VAR_4->xdev, VAR_4->sh_info, 1, &VAR_7);
 if (VAR_5 < 0)
  goto out;

 VAR_4->gnt_ref = VAR_7;

 VAR_5 = FUNC_2(VAR_4->xdev, &VAR_4->evtchn);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_0(VAR_4->evtchn, VAR_3,
  0, "pcifront", VAR_4);

 if (VAR_5 < 0)
  return VAR_5;

 VAR_4->irq = VAR_5;

do_publish:
 VAR_5 = FUNC_8(&VAR_6);
 if (VAR_5) {
  FUNC_3(VAR_4->xdev, VAR_5,
     "Error writing configuration for backend "
     "(start transaction)");
  goto out;
 }

 VAR_5 = FUNC_5(VAR_6, VAR_4->xdev->nodename,
       "pci-op-ref", "%u", VAR_4->gnt_ref);
 if (!VAR_5)
  VAR_5 = FUNC_5(VAR_6, VAR_4->xdev->nodename,
        "event-channel", "%u", VAR_4->evtchn);
 if (!VAR_5)
  VAR_5 = FUNC_5(VAR_6, VAR_4->xdev->nodename,
        "magic", VAR_1);

 if (VAR_5) {
  FUNC_7(VAR_6, 1);
  FUNC_3(VAR_4->xdev, VAR_5,
     "Error writing configuration for backend");
  goto out;
 } else {
  VAR_5 = FUNC_7(VAR_6, 0);
  if (VAR_5 == -VAR_0)
   goto do_publish;
  else if (VAR_5) {
   FUNC_3(VAR_4->xdev, VAR_5,
      "Error completing transaction "
      "for backend");
   goto out;
  }
 }

 FUNC_6(VAR_4->xdev, VAR_2);

 FUNC_1(&VAR_4->xdev->dev, "publishing successful!\n");

out:
 return VAR_5;
}
