
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rpmsg_device {int dev; } ;
struct TYPE_3__ {int owner; } ;
struct device {int id; int devt; int release; int class; int * parent; } ;
struct rpmsg_ctrldev {TYPE_1__ cdev; struct device dev; struct rpmsg_device* rpdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,struct rpmsg_ctrldev*) ;
 int FUNC_7 (struct device*,char*,int) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (int *,int ,int ,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (struct rpmsg_ctrldev*) ;
 struct rpmsg_ctrldev* FUNC_13 (int,int ) ;
 int FUNC_14 (struct device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_15(struct rpmsg_device *VAR_10)
{
 struct rpmsg_ctrldev *VAR_11;
 struct device *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_13(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->rpdev = VAR_10;

 VAR_12 = &VAR_11->dev;
 FUNC_9(VAR_12);
 VAR_12->parent = &VAR_10->dev;
 VAR_12->class = VAR_4;

 FUNC_4(&VAR_11->cdev, &VAR_6);
 VAR_11->cdev.owner = VAR_3;

 VAR_13 = FUNC_10(&VAR_9, 0, VAR_2, VAR_1);
 if (VAR_13 < 0)
  goto free_ctrldev;
 VAR_12->devt = FUNC_2(FUNC_0(VAR_8), VAR_13);

 VAR_13 = FUNC_10(&VAR_5, 0, 0, VAR_1);
 if (VAR_13 < 0)
  goto free_minor_ida;
 VAR_12->id = VAR_13;
 FUNC_7(&VAR_11->dev, "rpmsg_ctrl%d", VAR_13);

 VAR_13 = FUNC_3(&VAR_11->cdev, VAR_12->devt, 1);
 if (VAR_13)
  goto free_ctrl_ida;


 VAR_12->release = VAR_7;

 VAR_13 = FUNC_8(VAR_12);
 if (VAR_13) {
  FUNC_5(&VAR_10->dev, "device_add failed: %d\n", VAR_13);
  FUNC_14(VAR_12);
 }

 FUNC_6(&VAR_10->dev, VAR_11);

 return VAR_13;

free_ctrl_ida:
 FUNC_11(&VAR_5, VAR_12->id);
free_minor_ida:
 FUNC_11(&VAR_9, FUNC_1(VAR_12->devt));
free_ctrldev:
 FUNC_14(VAR_12);
 FUNC_12(VAR_11);

 return VAR_13;
}
