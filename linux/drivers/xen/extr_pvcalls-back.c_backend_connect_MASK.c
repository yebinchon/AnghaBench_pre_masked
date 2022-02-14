
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_device {int dev; int otherend_id; int otherend; } ;
struct pvcalls_fedata {int irq; int * sring; int list; int socket_lock; int socketpass_mappings; int socket_mappings; struct xenbus_device* dev; int ring; } ;
typedef int grant_ref_t ;
struct TYPE_2__ {int frontends_lock; int frontends; } ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,struct pvcalls_fedata*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pvcalls_fedata*) ;
 struct pvcalls_fedata* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_9 (int,int *,int ,int ,char*,struct xenbus_device*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int,struct xenbus_device*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct xenbus_device*,int,char*,int ) ;
 int FUNC_14 (struct xenbus_device*,int*,int,void**) ;
 int FUNC_15 (int ,int ,char*,char*,int*) ;
 int FUNC_16 (struct xenbus_device*,int *) ;

__attribute__((used)) static int FUNC_17(struct xenbus_device *VAR_8)
{
 int VAR_9, VAR_10;
 grant_ref_t VAR_11;
 struct pvcalls_fedata *VAR_12 = ((void*)0);

 VAR_12 = FUNC_7(sizeof(struct pvcalls_fedata), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->irq = -1;
 VAR_9 = FUNC_15(VAR_4, VAR_8->otherend, "port", "%u",
      &VAR_10);
 if (VAR_9 != 1) {
  VAR_9 = -VAR_0;
  FUNC_13(VAR_8, VAR_9, "reading %s/event-channel",
     VAR_8->otherend);
  goto error;
 }

 VAR_9 = FUNC_15(VAR_4, VAR_8->otherend, "ring-ref", "%u", &VAR_11);
 if (VAR_9 != 1) {
  VAR_9 = -VAR_0;
  FUNC_13(VAR_8, VAR_9, "reading %s/ring-ref",
     VAR_8->otherend);
  goto error;
 }

 VAR_9 = FUNC_3(VAR_8->otherend_id, VAR_10);
 if (VAR_9 < 0)
  goto error;
 VAR_12->irq = VAR_9;

 VAR_9 = FUNC_9(VAR_12->irq, ((void*)0), VAR_6,
       VAR_3, "pvcalls-back", VAR_8);
 if (VAR_9 < 0)
  goto error;

 VAR_9 = FUNC_14(VAR_8, &VAR_11, 1,
         (void **)&VAR_12->sring);
 if (VAR_9 < 0)
  goto error;

 FUNC_0(&VAR_12->ring, VAR_12->sring, VAR_5 * 1);
 VAR_12->dev = VAR_8;

 FUNC_1(&VAR_12->socket_mappings);
 FUNC_2(&VAR_12->socketpass_mappings, VAR_2);
 FUNC_10(&VAR_12->socket_lock, 1);
 FUNC_4(&VAR_8->dev, VAR_12);

 FUNC_5(&VAR_7.frontends_lock);
 FUNC_8(&VAR_12->list, &VAR_7.frontends);
 FUNC_12(&VAR_7.frontends_lock);

 return 0;

 error:
 if (VAR_12->irq >= 0)
  FUNC_11(VAR_12->irq, VAR_8);
 if (VAR_12->sring != ((void*)0))
  FUNC_16(VAR_8, VAR_12->sring);
 FUNC_6(VAR_12);
 return VAR_9;
}
