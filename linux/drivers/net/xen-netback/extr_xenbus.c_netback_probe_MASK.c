
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_transaction {int dummy; } ;
struct xenbus_device_id {int dummy; } ;
struct xenbus_device {int nodename; int dev; } ;
struct backend_info {char const* hotplug_script; int state; struct xenbus_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 struct xenbus_transaction VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct backend_info*) ;
 int FUNC_3 (int *,struct backend_info*) ;
 struct backend_info* FUNC_4 (int,int ) ;
 int FUNC_5 (struct xenbus_device*) ;
 int FUNC_6 (char*) ;
 int VAR_5 ;
 int FUNC_7 (struct xenbus_device*,int,char*,...) ;
 int FUNC_8 (struct xenbus_transaction,int ,char*,char*,int) ;
 char* FUNC_9 (struct xenbus_transaction,int ,char*,int *) ;
 int FUNC_10 (struct xenbus_device*,int ) ;
 int FUNC_11 (struct xenbus_transaction,int) ;
 int FUNC_12 (struct xenbus_transaction*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_13(struct xenbus_device *VAR_7,
    const struct xenbus_device_id *VAR_8)
{
 const char *VAR_9;
 struct xenbus_transaction VAR_10;
 int VAR_11;
 int VAR_12;
 const char *VAR_13;
 struct backend_info *VAR_14 = FUNC_4(sizeof(struct backend_info),
       VAR_2);
 if (!VAR_14) {
  FUNC_7(VAR_7, -VAR_1,
     "allocating backend structure");
  return -VAR_1;
 }

 VAR_14->dev = VAR_7;
 FUNC_3(&VAR_7->dev, VAR_14);

 VAR_14->state = VAR_4;
 VAR_11 = FUNC_10(VAR_7, VAR_4);
 if (VAR_11)
  goto fail;

 VAR_12 = 1;

 do {
  VAR_11 = FUNC_12(&VAR_10);
  if (VAR_11) {
   FUNC_7(VAR_7, VAR_11, "starting transaction");
   goto fail;
  }

  VAR_11 = FUNC_8(VAR_10, VAR_7->nodename, "feature-sg", "%d", VAR_12);
  if (VAR_11) {
   VAR_9 = "writing feature-sg";
   goto abort_transaction;
  }

  VAR_11 = FUNC_8(VAR_10, VAR_7->nodename, "feature-gso-tcpv4",
        "%d", VAR_12);
  if (VAR_11) {
   VAR_9 = "writing feature-gso-tcpv4";
   goto abort_transaction;
  }

  VAR_11 = FUNC_8(VAR_10, VAR_7->nodename, "feature-gso-tcpv6",
        "%d", VAR_12);
  if (VAR_11) {
   VAR_9 = "writing feature-gso-tcpv6";
   goto abort_transaction;
  }


  VAR_11 = FUNC_8(VAR_10, VAR_7->nodename,
        "feature-ipv6-csum-offload",
        "%d", 1);
  if (VAR_11) {
   VAR_9 = "writing feature-ipv6-csum-offload";
   goto abort_transaction;
  }


  VAR_11 = FUNC_8(VAR_10, VAR_7->nodename,
        "feature-rx-copy", "%d", 1);
  if (VAR_11) {
   VAR_9 = "writing feature-rx-copy";
   goto abort_transaction;
  }





  VAR_11 = FUNC_8(VAR_10, VAR_7->nodename,
        "feature-rx-flip", "%d", 0);
  if (VAR_11) {
   VAR_9 = "writing feature-rx-flip";
   goto abort_transaction;
  }


  VAR_11 = FUNC_8(VAR_10, VAR_7->nodename,
        "feature-multicast-control", "%d", 1);
  if (VAR_11) {
   VAR_9 = "writing feature-multicast-control";
   goto abort_transaction;
  }

  VAR_11 = FUNC_8(VAR_10, VAR_7->nodename,
        "feature-dynamic-multicast-control",
        "%d", 1);
  if (VAR_11) {
   VAR_9 = "writing feature-dynamic-multicast-control";
   goto abort_transaction;
  }

  VAR_11 = FUNC_11(VAR_10, 0);
 } while (VAR_11 == -VAR_0);

 if (VAR_11) {
  FUNC_7(VAR_7, VAR_11, "completing transaction");
  goto fail;
 }





 VAR_11 = FUNC_8(VAR_3, VAR_7->nodename,
       "feature-split-event-channels",
       "%u", VAR_5);
 if (VAR_11)
  FUNC_6("Error writing feature-split-event-channels\n");


 VAR_11 = FUNC_8(VAR_3, VAR_7->nodename,
       "multi-queue-max-queues", "%u", VAR_6);
 if (VAR_11)
  FUNC_6("Error writing multi-queue-max-queues\n");

 VAR_11 = FUNC_8(VAR_3, VAR_7->nodename,
       "feature-ctrl-ring",
       "%u", 1);
 if (VAR_11)
  FUNC_6("Error writing feature-ctrl-ring\n");

 VAR_13 = FUNC_9(VAR_3, VAR_7->nodename, "script", ((void*)0));
 if (FUNC_0(VAR_13)) {
  VAR_11 = FUNC_1(VAR_13);
  FUNC_7(VAR_7, VAR_11, "reading script");
  goto fail;
 }

 VAR_14->hotplug_script = VAR_13;



 VAR_11 = FUNC_2(VAR_14);
 if (VAR_11)
  goto fail;

 return 0;

abort_transaction:
 FUNC_11(VAR_10, 1);
 FUNC_7(VAR_7, VAR_11, "%s", VAR_9);
fail:
 FUNC_6("failed\n");
 FUNC_5(VAR_7);
 return VAR_11;
}
