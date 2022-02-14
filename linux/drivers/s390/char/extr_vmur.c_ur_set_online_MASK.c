
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int devno; } ;
struct urdev {scalar_t__ class; TYPE_5__* char_device; int device; TYPE_3__* cdev; TYPE_1__ dev_id; } ;
struct ccw_device {int dev; } ;
struct TYPE_12__ {int dev; int owner; TYPE_4__* ops; } ;
struct TYPE_11__ {int owner; } ;
struct TYPE_9__ {scalar_t__ cu_type; } ;
struct TYPE_10__ {TYPE_2__ id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 TYPE_5__* FUNC_6 () ;
 int FUNC_7 (TYPE_5__*) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int ,int *,int ,int *,char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,char*,char*) ;
 int VAR_8 ;
 TYPE_4__ VAR_9 ;
 struct urdev* FUNC_13 (struct ccw_device*) ;
 int FUNC_14 (struct urdev*) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_15(struct ccw_device *VAR_12)
{
 struct urdev *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 char VAR_17[16];

 FUNC_4("ur_set_online: cdev=%p\n", VAR_12);

 FUNC_10(&VAR_11);
 VAR_13 = FUNC_13(VAR_12);
 if (!VAR_13) {

  VAR_16 = -VAR_3;
  goto fail_unlock;
 }

 if (VAR_13->char_device) {

  VAR_16 = -VAR_2;
  goto fail_urdev_put;
 }

 VAR_14 = VAR_13->dev_id.devno;
 VAR_15 = FUNC_1(VAR_8);

 VAR_13->char_device = FUNC_6();
 if (!VAR_13->char_device) {
  VAR_16 = -VAR_4;
  goto fail_urdev_put;
 }

 VAR_13->char_device->ops = &VAR_9;
 VAR_13->char_device->owner = VAR_9.owner;

 VAR_16 = FUNC_5(VAR_13->char_device, FUNC_2(VAR_15, VAR_14), 1);
 if (VAR_16)
  goto fail_free_cdev;
 if (VAR_13->cdev->id.cu_type == VAR_7) {
  if (VAR_13->class == VAR_0)
   FUNC_12(VAR_17, "vmrdr-%s", FUNC_8(&VAR_12->dev));
  if (VAR_13->class == VAR_1)
   FUNC_12(VAR_17, "vmpun-%s", FUNC_8(&VAR_12->dev));
 } else if (VAR_13->cdev->id.cu_type == VAR_6) {
  FUNC_12(VAR_17, "vmprt-%s", FUNC_8(&VAR_12->dev));
 } else {
  VAR_16 = -VAR_5;
  goto fail_free_cdev;
 }

 VAR_13->device = FUNC_9(VAR_10, &VAR_12->dev,
        VAR_13->char_device->dev, ((void*)0), "%s", VAR_17);
 if (FUNC_0(VAR_13->device)) {
  VAR_16 = FUNC_3(VAR_13->device);
  FUNC_4("ur_set_online: device_create rc=%d\n", VAR_16);
  goto fail_free_cdev;
 }
 FUNC_14(VAR_13);
 FUNC_11(&VAR_11);
 return 0;

fail_free_cdev:
 FUNC_7(VAR_13->char_device);
 VAR_13->char_device = ((void*)0);
fail_urdev_put:
 FUNC_14(VAR_13);
fail_unlock:
 FUNC_11(&VAR_11);
 return VAR_16;
}
