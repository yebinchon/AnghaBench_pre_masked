
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xenbus_transaction {int dummy; } ;
struct xenbus_device {char const* nodename; int dev; } ;
struct netfront_queue {int dummy; } ;
struct netfront_info {struct netfront_queue* queues; TYPE_2__* xbdev; TYPE_1__* netdev; } ;
struct TYPE_4__ {int otherend; } ;
struct TYPE_3__ {int dev_addr; scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct netfront_queue*) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct xenbus_device*,struct netfront_queue*,unsigned int) ;
 int FUNC_6 (struct netfront_queue*,struct xenbus_transaction*,int) ;
 int FUNC_7 (struct xenbus_device*,int ) ;
 int FUNC_8 (struct xenbus_device*,int,char*,...) ;
 scalar_t__ FUNC_9 (int ,int ,char*) ;
 int FUNC_10 (struct xenbus_transaction,char const*,char*,char*,int) ;
 unsigned int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (struct xenbus_transaction,int) ;
 int FUNC_13 (struct xenbus_transaction*) ;
 int FUNC_14 (struct xenbus_transaction,char const*,char*,char*) ;
 int FUNC_15 (struct netfront_info*,unsigned int*) ;
 int FUNC_16 (struct netfront_info*) ;
 int FUNC_17 (struct netfront_info*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_18(struct xenbus_device *VAR_3,
      struct netfront_info *VAR_4)
{
 const char *VAR_5;
 struct xenbus_transaction VAR_6;
 int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10 = 0;
 struct netfront_queue *VAR_11 = ((void*)0);
 unsigned int VAR_12 = 1;

 VAR_4->netdev->irq = 0;


 VAR_10 = FUNC_11(VAR_4->xbdev->otherend,
       "multi-queue-max-queues", 1);
 VAR_12 = FUNC_2(VAR_10, VAR_2);


 VAR_8 = FUNC_11(VAR_4->xbdev->otherend,
     "feature-split-event-channels", 0);


 VAR_7 = FUNC_7(VAR_3, VAR_4->netdev->dev_addr);
 if (VAR_7) {
  FUNC_8(VAR_3, VAR_7, "parsing %s/mac", VAR_3->nodename);
  goto out_unlocked;
 }

 FUNC_3();
 if (VAR_4->queues)
  FUNC_16(VAR_4);

 VAR_7 = FUNC_15(VAR_4, &VAR_12);
 if (VAR_7 < 0) {
  FUNC_8(VAR_3, VAR_7, "creating queues");
  FUNC_1(VAR_4->queues);
  VAR_4->queues = ((void*)0);
  goto out;
 }
 FUNC_4();


 for (VAR_9 = 0; VAR_9 < VAR_12; ++VAR_9) {
  VAR_11 = &VAR_4->queues[VAR_9];
  VAR_7 = FUNC_5(VAR_3, VAR_11, VAR_8);
  if (VAR_7)
   goto destroy_ring;
 }

again:
 VAR_7 = FUNC_13(&VAR_6);
 if (VAR_7) {
  FUNC_8(VAR_3, VAR_7, "starting transaction");
  goto destroy_ring;
 }

 if (FUNC_9(VAR_1,
     VAR_4->xbdev->otherend, "multi-queue-max-queues")) {

  VAR_7 = FUNC_10(VAR_6, VAR_3->nodename,
        "multi-queue-num-queues", "%u", VAR_12);
  if (VAR_7) {
   VAR_5 = "writing multi-queue-num-queues";
   goto abort_transaction_no_dev_fatal;
  }
 }

 if (VAR_12 == 1) {
  VAR_7 = FUNC_6(&VAR_4->queues[0], &VAR_6, 0);
  if (VAR_7)
   goto abort_transaction_no_dev_fatal;
 } else {

  for (VAR_9 = 0; VAR_9 < VAR_12; ++VAR_9) {
   VAR_11 = &VAR_4->queues[VAR_9];
   VAR_7 = FUNC_6(VAR_11, &VAR_6, 1);
   if (VAR_7)
    goto abort_transaction_no_dev_fatal;
  }
 }


 VAR_7 = FUNC_10(VAR_6, VAR_3->nodename, "request-rx-copy", "%u",
       1);
 if (VAR_7) {
  VAR_5 = "writing request-rx-copy";
  goto abort_transaction;
 }

 VAR_7 = FUNC_10(VAR_6, VAR_3->nodename, "feature-rx-notify", "%d", 1);
 if (VAR_7) {
  VAR_5 = "writing feature-rx-notify";
  goto abort_transaction;
 }

 VAR_7 = FUNC_10(VAR_6, VAR_3->nodename, "feature-sg", "%d", 1);
 if (VAR_7) {
  VAR_5 = "writing feature-sg";
  goto abort_transaction;
 }

 VAR_7 = FUNC_10(VAR_6, VAR_3->nodename, "feature-gso-tcpv4", "%d", 1);
 if (VAR_7) {
  VAR_5 = "writing feature-gso-tcpv4";
  goto abort_transaction;
 }

 VAR_7 = FUNC_14(VAR_6, VAR_3->nodename, "feature-gso-tcpv6", "1");
 if (VAR_7) {
  VAR_5 = "writing feature-gso-tcpv6";
  goto abort_transaction;
 }

 VAR_7 = FUNC_14(VAR_6, VAR_3->nodename, "feature-ipv6-csum-offload",
      "1");
 if (VAR_7) {
  VAR_5 = "writing feature-ipv6-csum-offload";
  goto abort_transaction;
 }

 VAR_7 = FUNC_12(VAR_6, 0);
 if (VAR_7) {
  if (VAR_7 == -VAR_0)
   goto again;
  FUNC_8(VAR_3, VAR_7, "completing transaction");
  goto destroy_ring;
 }

 return 0;

 abort_transaction:
 FUNC_8(VAR_3, VAR_7, "%s", VAR_5);
abort_transaction_no_dev_fatal:
 FUNC_12(VAR_6, 1);
 destroy_ring:
 FUNC_17(VAR_4);
 FUNC_3();
 FUNC_16(VAR_4);
 out:
 FUNC_4();
out_unlocked:
 FUNC_0(&VAR_3->dev);
 return VAR_7;
}
