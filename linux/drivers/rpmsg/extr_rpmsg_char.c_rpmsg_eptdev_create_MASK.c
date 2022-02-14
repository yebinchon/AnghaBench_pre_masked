
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int owner; } ;
struct rpmsg_channel_info {int dummy; } ;
struct device {int id; int devt; int release; int groups; int * parent; int class; } ;
struct rpmsg_eptdev {TYPE_1__ cdev; int readq; int queue; int queue_lock; int ept_lock; struct rpmsg_channel_info chinfo; struct rpmsg_device* rpdev; struct device dev; } ;
struct rpmsg_device {int dummy; } ;
struct rpmsg_ctrldev {int dev; struct rpmsg_device* rpdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (struct device*,struct rpmsg_eptdev*) ;
 int FUNC_7 (struct device*,char*,int) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (int *,int ,int ,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct rpmsg_eptdev*) ;
 struct rpmsg_eptdev* FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct rpmsg_ctrldev *VAR_11,
          struct rpmsg_channel_info VAR_12)
{
 struct rpmsg_device *VAR_13 = VAR_11->rpdev;
 struct rpmsg_eptdev *VAR_14;
 struct device *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_14(sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_15 = &VAR_14->dev;
 VAR_14->rpdev = VAR_13;
 VAR_14->chinfo = VAR_12;

 FUNC_15(&VAR_14->ept_lock);
 FUNC_18(&VAR_14->queue_lock);
 FUNC_17(&VAR_14->queue);
 FUNC_12(&VAR_14->readq);

 FUNC_9(VAR_15);
 VAR_15->class = VAR_4;
 VAR_15->parent = &VAR_11->dev;
 VAR_15->groups = VAR_7;
 FUNC_6(VAR_15, VAR_14);

 FUNC_4(&VAR_14->cdev, &VAR_6);
 VAR_14->cdev.owner = VAR_3;

 VAR_16 = FUNC_10(&VAR_10, 0, VAR_2, VAR_1);
 if (VAR_16 < 0)
  goto free_eptdev;
 VAR_15->devt = FUNC_2(FUNC_0(VAR_9), VAR_16);

 VAR_16 = FUNC_10(&VAR_5, 0, 0, VAR_1);
 if (VAR_16 < 0)
  goto free_minor_ida;
 VAR_15->id = VAR_16;
 FUNC_7(VAR_15, "rpmsg%d", VAR_16);

 VAR_16 = FUNC_3(&VAR_14->cdev, VAR_15->devt, 1);
 if (VAR_16)
  goto free_ept_ida;


 VAR_15->release = VAR_8;

 VAR_16 = FUNC_8(VAR_15);
 if (VAR_16) {
  FUNC_5(VAR_15, "device_add failed: %d\n", VAR_16);
  FUNC_16(VAR_15);
 }

 return VAR_16;

free_ept_ida:
 FUNC_11(&VAR_5, VAR_15->id);
free_minor_ida:
 FUNC_11(&VAR_10, FUNC_1(VAR_15->devt));
free_eptdev:
 FUNC_16(VAR_15);
 FUNC_13(VAR_14);

 return VAR_16;
}
