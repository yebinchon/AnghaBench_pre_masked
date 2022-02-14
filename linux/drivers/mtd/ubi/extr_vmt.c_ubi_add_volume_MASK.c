
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int owner; } ;
struct TYPE_8__ {int groups; int * class; int devt; int * parent; int release; } ;
struct ubi_volume {int vol_id; TYPE_4__ cdev; TYPE_2__ dev; } ;
struct TYPE_7__ {int dev; } ;
struct ubi_device {int ubi_name; int dev; TYPE_1__ cdev; } ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (TYPE_2__*,char*,int ,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct ubi_device*) ;
 int VAR_1 ;
 int FUNC_9 (struct ubi_device*,char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_10(struct ubi_device *VAR_5, struct ubi_volume *VAR_6)
{
 int VAR_7, VAR_8 = VAR_6->vol_id;
 dev_t VAR_9;

 FUNC_5("add volume %d", VAR_8);


 FUNC_4(&VAR_6->cdev, &VAR_2);
 VAR_6->cdev.owner = VAR_0;
 VAR_9 = FUNC_1(FUNC_0(VAR_5->cdev.dev), VAR_6->vol_id + 1);
 VAR_7 = FUNC_2(&VAR_6->cdev, VAR_9, 1);
 if (VAR_7) {
  FUNC_9(VAR_5, "cannot add character device for volume %d, error %d",
   VAR_8, VAR_7);
  return VAR_7;
 }

 VAR_6->dev.release = VAR_3;
 VAR_6->dev.parent = &VAR_5->dev;
 VAR_6->dev.devt = VAR_9;
 VAR_6->dev.class = &VAR_1;
 VAR_6->dev.groups = VAR_4;
 FUNC_6(&VAR_6->dev, "%s_%d", VAR_5->ubi_name, VAR_6->vol_id);
 VAR_7 = FUNC_7(&VAR_6->dev);
 if (VAR_7)
  goto out_cdev;

 FUNC_8(VAR_5);
 return VAR_7;

out_cdev:
 FUNC_3(&VAR_6->cdev);
 return VAR_7;
}
