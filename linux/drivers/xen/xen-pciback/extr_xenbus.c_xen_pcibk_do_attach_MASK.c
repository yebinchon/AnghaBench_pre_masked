
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xen_pcibk_device {int evtchn_irq; TYPE_1__* xdev; void* sh_info; } ;
struct TYPE_3__ {int dev; int otherend_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ,int ,struct xen_pcibk_device*) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int,char*) ;
 int FUNC_3 (TYPE_1__*,int*,int,void**) ;

__attribute__((used)) static int FUNC_4(struct xen_pcibk_device *VAR_2, int VAR_3,
        int VAR_4)
{
 int VAR_5 = 0;
 void *VAR_6;

 FUNC_1(&VAR_2->xdev->dev,
  "Attaching to frontend resources - gnt_ref=%d evtchn=%d\n",
  VAR_3, VAR_4);

 VAR_5 = FUNC_3(VAR_2->xdev, &VAR_3, 1, &VAR_6);
 if (VAR_5 < 0) {
  FUNC_2(VAR_2->xdev, VAR_5,
    "Error mapping other domain page in ours.");
  goto out;
 }

 VAR_2->sh_info = VAR_6;

 VAR_5 = FUNC_0(
  VAR_2->xdev->otherend_id, VAR_4, VAR_1,
  0, VAR_0, VAR_2);
 if (VAR_5 < 0) {
  FUNC_2(VAR_2->xdev, VAR_5,
     "Error binding event channel to IRQ");
  goto out;
 }
 VAR_2->evtchn_irq = VAR_5;
 VAR_5 = 0;

 FUNC_1(&VAR_2->xdev->dev, "Attached!\n");
out:
 return VAR_5;
}
