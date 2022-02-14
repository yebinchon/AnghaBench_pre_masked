
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenvif_queue {int id; TYPE_1__* vif; } ;
struct xenbus_device {char* otherend; } ;
struct backend_info {struct xenbus_device* dev; } ;
struct TYPE_2__ {unsigned int num_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*,size_t,char*,char*,int) ;
 int FUNC_3 (char*,char*) ;
 size_t const FUNC_4 (char*) ;
 int FUNC_5 (struct xenbus_device*,int,char*,...) ;
 int FUNC_6 (int ,char*,char*,char*,...) ;
 int FUNC_7 (int ,char*,char*,char*,unsigned int*) ;
 int FUNC_8 (struct xenvif_queue*,unsigned long,unsigned long,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct backend_info *VAR_3,
         struct xenvif_queue *VAR_4)
{
 struct xenbus_device *VAR_5 = VAR_3->dev;
 unsigned int VAR_6 = VAR_4->vif->num_queues;
 unsigned long VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10;
 int VAR_11;
 char *VAR_12;
 size_t VAR_13;
 const size_t VAR_14 = 11;







 if (VAR_6 == 1) {
  VAR_12 = FUNC_1(FUNC_4(VAR_5->otherend) + 1, VAR_1);
  if (!VAR_12) {
   FUNC_5(VAR_5, -VAR_0,
      "reading ring references");
   return -VAR_0;
  }
  FUNC_3(VAR_12, VAR_5->otherend);
 } else {
  VAR_13 = FUNC_4(VAR_5->otherend) + VAR_14;
  VAR_12 = FUNC_1(VAR_13, VAR_1);
  if (!VAR_12) {
   FUNC_5(VAR_5, -VAR_0,
      "reading ring references");
   return -VAR_0;
  }
  FUNC_2(VAR_12, VAR_13, "%s/queue-%u", VAR_5->otherend,
    VAR_4->id);
 }

 VAR_11 = FUNC_6(VAR_2, VAR_12,
       "tx-ring-ref", "%lu", &VAR_7,
       "rx-ring-ref", "%lu", &VAR_8, ((void*)0));
 if (VAR_11) {
  FUNC_5(VAR_5, VAR_11,
     "reading %s/ring-ref",
     VAR_12);
  goto err;
 }


 VAR_11 = FUNC_6(VAR_2, VAR_12,
       "event-channel-tx", "%u", &VAR_9,
       "event-channel-rx", "%u", &VAR_10, ((void*)0));
 if (VAR_11 < 0) {
  VAR_11 = FUNC_7(VAR_2, VAR_12,
       "event-channel", "%u", &VAR_9);
  if (VAR_11 < 0) {
   FUNC_5(VAR_5, VAR_11,
      "reading %s/event-channel(-tx/rx)",
      VAR_12);
   goto err;
  }
  VAR_10 = VAR_9;
 }


 VAR_11 = FUNC_8(VAR_4, VAR_7, VAR_8,
      VAR_9, VAR_10);
 if (VAR_11) {
  FUNC_5(VAR_5, VAR_11,
     "mapping shared-frames %lu/%lu port tx %u rx %u",
     VAR_7, VAR_8,
     VAR_9, VAR_10);
  goto err;
 }

 VAR_11 = 0;
err:
 FUNC_0(VAR_12);
 return VAR_11;
}
