
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_transaction {int dummy; } ;
struct xenbus_device {char* nodename; } ;
struct netfront_queue {int id; int rx_evtchn; int tx_evtchn; int rx_ring_ref; int tx_ring_ref; TYPE_1__* info; } ;
struct TYPE_2__ {struct xenbus_device* xbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*,size_t,char*,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct xenbus_device*,int,char*,char const*) ;
 int FUNC_5 (struct xenbus_transaction,char*,char*,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct netfront_queue *VAR_2,
      struct xenbus_transaction *VAR_3, int VAR_4)
{




 struct xenbus_device *VAR_5 = VAR_2->info->xbdev;
 int VAR_6;
 const char *VAR_7;
 char *VAR_8;
 size_t VAR_9;


 if (VAR_4) {
  VAR_9 = FUNC_3(VAR_5->nodename) + 10;
  VAR_8 = FUNC_1(VAR_9, VAR_1);
  if (!VAR_8) {
   VAR_6 = -VAR_0;
   VAR_7 = "out of memory while writing ring references";
   goto error;
  }
  FUNC_2(VAR_8, VAR_9, "%s/queue-%u",
    VAR_5->nodename, VAR_2->id);
 } else {
  VAR_8 = (char *)VAR_5->nodename;
 }


 VAR_6 = FUNC_5(*VAR_3, VAR_8, "tx-ring-ref", "%u",
   VAR_2->tx_ring_ref);
 if (VAR_6) {
  VAR_7 = "writing tx-ring-ref";
  goto error;
 }

 VAR_6 = FUNC_5(*VAR_3, VAR_8, "rx-ring-ref", "%u",
   VAR_2->rx_ring_ref);
 if (VAR_6) {
  VAR_7 = "writing rx-ring-ref";
  goto error;
 }




 if (VAR_2->tx_evtchn == VAR_2->rx_evtchn) {

  VAR_6 = FUNC_5(*VAR_3, VAR_8,
    "event-channel", "%u", VAR_2->tx_evtchn);
  if (VAR_6) {
   VAR_7 = "writing event-channel";
   goto error;
  }
 } else {

  VAR_6 = FUNC_5(*VAR_3, VAR_8,
    "event-channel-tx", "%u", VAR_2->tx_evtchn);
  if (VAR_6) {
   VAR_7 = "writing event-channel-tx";
   goto error;
  }

  VAR_6 = FUNC_5(*VAR_3, VAR_8,
    "event-channel-rx", "%u", VAR_2->rx_evtchn);
  if (VAR_6) {
   VAR_7 = "writing event-channel-rx";
   goto error;
  }
 }

 if (VAR_4)
  FUNC_0(VAR_8);
 return 0;

error:
 if (VAR_4)
  FUNC_0(VAR_8);
 FUNC_4(VAR_5, VAR_6, "%s", VAR_7);
 return VAR_6;
}
