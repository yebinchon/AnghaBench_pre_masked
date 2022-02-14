
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tape_class_device {char* device_name; char* mode_name; TYPE_2__* char_device; TYPE_1__* class_device; } ;
struct file_operations {int owner; } ;
struct device {int kobj; } ;
typedef int dev_t ;
struct TYPE_7__ {int dev; struct file_operations const* ops; int owner; } ;
struct TYPE_6__ {int kobj; } ;


 int VAR_0 ;
 struct tape_class_device* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 (int ,struct device*,int ,int *,char*,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct tape_class_device*) ;
 struct tape_class_device* FUNC_8 (int,int ) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (int *,int *,char*) ;
 int VAR_3 ;

struct tape_class_device *FUNC_12(
 struct device * VAR_4,
 dev_t VAR_5,
 const struct file_operations *VAR_6,
 char * VAR_7,
 char * VAR_8)
{
 struct tape_class_device * VAR_9;
 int VAR_10;
 char * VAR_11;

 VAR_9 = FUNC_8(sizeof(struct tape_class_device), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 FUNC_10(VAR_9->device_name, VAR_7, VAR_2);
 for (VAR_11 = FUNC_9(VAR_9->device_name, '/'); VAR_11; VAR_11 = FUNC_9(VAR_11, '/'))
  *VAR_11 = '!';
 FUNC_10(VAR_9->mode_name, VAR_8, VAR_2);
 for (VAR_11 = FUNC_9(VAR_9->mode_name, '/'); VAR_11; VAR_11 = FUNC_9(VAR_11, '/'))
  *VAR_11 = '!';

 VAR_9->char_device = FUNC_3();
 if (!VAR_9->char_device) {
  VAR_10 = -VAR_0;
  goto fail_with_tcd;
 }

 VAR_9->char_device->owner = VAR_6->owner;
 VAR_9->char_device->ops = VAR_6;

 VAR_10 = FUNC_2(VAR_9->char_device, VAR_5, 1);
 if (VAR_10)
  goto fail_with_cdev;

 VAR_9->class_device = FUNC_5(VAR_3, VAR_4,
       VAR_9->char_device->dev, ((void*)0),
       "%s", VAR_9->device_name);
 VAR_10 = FUNC_1(VAR_9->class_device);
 if (VAR_10)
  goto fail_with_cdev;
 VAR_10 = FUNC_11(
  &VAR_4->kobj,
  &VAR_9->class_device->kobj,
  VAR_9->mode_name
 );
 if (VAR_10)
  goto fail_with_class_device;

 return VAR_9;

fail_with_class_device:
 FUNC_6(VAR_3, VAR_9->char_device->dev);

fail_with_cdev:
 FUNC_4(VAR_9->char_device);

fail_with_tcd:
 FUNC_7(VAR_9);

 return FUNC_0(VAR_10);
}
