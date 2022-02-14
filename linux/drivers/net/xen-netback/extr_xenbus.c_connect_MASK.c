
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct xenvif_queue {unsigned int id; unsigned long credit_bytes; unsigned long remaining_credit; unsigned long credit_usec; int name; TYPE_1__* vif; } ;
struct xenbus_device {int nodename; int otherend; } ;
struct backend_info {int have_hotplug_status_watch; TYPE_1__* vif; int hotplug_status_watch; struct xenbus_device* dev; } ;
struct TYPE_11__ {char* name; } ;
struct TYPE_10__ {unsigned int num_queues; unsigned int stalled_queues; struct xenvif_queue* queues; TYPE_7__* dev; int fe_dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct backend_info*) ;
 int FUNC_2 (struct backend_info*,struct xenvif_queue*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_7__*,unsigned int) ;
 int FUNC_4 (TYPE_7__*,unsigned int) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (struct backend_info*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int,char*,char*,unsigned int) ;
 int FUNC_10 (struct backend_info*) ;
 int FUNC_11 (struct xenvif_queue*) ;
 struct xenvif_queue* FUNC_12 (int ) ;
 int FUNC_13 (struct xenbus_device*,int ) ;
 int FUNC_14 (struct xenbus_device*,unsigned long*,unsigned long*) ;
 int FUNC_15 (struct xenbus_device*,TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (struct xenbus_device*,int,char*,...) ;
 unsigned int FUNC_18 (int ,char*,int) ;
 int FUNC_19 (struct xenbus_device*,int *,int ,char*,int ,char*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (struct xenvif_queue*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (struct xenvif_queue*) ;
 unsigned int VAR_3 ;

__attribute__((used)) static void FUNC_26(struct backend_info *VAR_4)
{
 int VAR_5;
 struct xenbus_device *VAR_6 = VAR_4->dev;
 unsigned long VAR_7, VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 struct xenvif_queue *VAR_11;




 VAR_10 = FUNC_18(VAR_6->otherend,
     "multi-queue-num-queues", 1);
 if (VAR_10 > VAR_3) {

  FUNC_17(VAR_6, -VAR_0,
     "guest requested %u queues, exceeding the maximum of %u.",
     VAR_10, VAR_3);
  return;
 }

 VAR_5 = FUNC_13(VAR_6, VAR_4->vif->fe_dev_addr);
 if (VAR_5) {
  FUNC_17(VAR_6, VAR_5, "parsing %s/mac", VAR_6->nodename);
  return;
 }

 FUNC_14(VAR_6, &VAR_7, &VAR_8);
 FUNC_16(VAR_4->vif);
 FUNC_15(VAR_6, VAR_4->vif);
 FUNC_6(VAR_4);

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5) {
  FUNC_17(VAR_6, VAR_5, "connecting control ring");
  return;
 }


 VAR_4->vif->queues = FUNC_12(FUNC_0(VAR_10,
          sizeof(struct xenvif_queue)));
 if (!VAR_4->vif->queues) {
  FUNC_17(VAR_6, -VAR_1,
     "allocating queues");
  return;
 }

 VAR_4->vif->num_queues = VAR_10;
 VAR_4->vif->stalled_queues = VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9) {
  VAR_11 = &VAR_4->vif->queues[VAR_9];
  VAR_11->vif = VAR_4->vif;
  VAR_11->id = VAR_9;
  FUNC_9(VAR_11->name, sizeof(VAR_11->name), "%s-q%u",
    VAR_4->vif->dev->name, VAR_11->id);

  VAR_5 = FUNC_25(VAR_11);
  if (VAR_5) {






   VAR_4->vif->num_queues = VAR_9;
   goto err;
  }

  VAR_11->credit_bytes = VAR_7;
  VAR_11->remaining_credit = VAR_7;
  VAR_11->credit_usec = VAR_8;

  VAR_5 = FUNC_2(VAR_4, VAR_11);
  if (VAR_5) {





   FUNC_22(VAR_11);
   VAR_4->vif->num_queues = VAR_9;
   goto err;
  }
 }
 FUNC_7();
 FUNC_4(VAR_4->vif->dev, VAR_10);
 FUNC_3(VAR_4->vif->dev, VAR_10);
 FUNC_8();

 FUNC_20(VAR_4->vif);

 FUNC_10(VAR_4);
 VAR_5 = FUNC_19(VAR_6, &VAR_4->hotplug_status_watch,
       VAR_2,
       "%s/%s", VAR_6->nodename, "hotplug-status");
 if (!VAR_5)
  VAR_4->have_hotplug_status_watch = 1;

 FUNC_5(VAR_4->vif->dev);

 return;

err:
 if (VAR_4->vif->num_queues > 0)
  FUNC_24(VAR_4->vif);
 for (VAR_9 = 0; VAR_9 < VAR_4->vif->num_queues; ++VAR_9)
  FUNC_22(&VAR_4->vif->queues[VAR_9]);
 FUNC_11(VAR_4->vif->queues);
 VAR_4->vif->queues = ((void*)0);
 VAR_4->vif->num_queues = 0;
 FUNC_23(VAR_4->vif);
 return;
}
